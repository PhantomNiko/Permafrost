/* Firmware block-device inventory and native WFE5 disk tables.
 * Pooka's Free Software License.
 */
static Block *live_disks[128];
static unsigned live_disk_count;
static int disk_usable(Block *device){return device&&device->media&&device->media->present&&device->media->block_size==512&&device->read&&device->media->last<UINT64_MAX;}
static void publish_disk(Block *device){
 if(live_disk_count==128||!disk_usable(device))return;
 for(unsigned i=0;i<live_disk_count;i++)if(live_disks[i]==device)return;
 unsigned i=live_disk_count++;live_disks[i]=device;
 context[0x1538/4+i]=(uint32_t)(uintptr_t)device;
 ((uint64_t *)((uint8_t *)context+0x1738))[i]=(uintptr_t)device;
 context[0x1b38/4+i]=device->media->id;
 uint64_t sectors=device->media->last+1;
 context[0x1d38/4+i]=sectors>UINT32_MAX?UINT32_MAX:(uint32_t)sectors;
 context[0x1f38/4+i]=0;
 context[0x1530/4]=live_disk_count;
}
static void disk_devices(void){
 live_disk_count=0;clear(live_disks,sizeof live_disks);clear((uint8_t *)context+0x1530,0xc08);
 publish_disk(disk);uintptr_t count=0;void **handles=0;
 if(failed(services->handles(2,&block_guid,0,&count,&handles)))return;
 for(uintptr_t i=0;i<count&&i<4096&&live_disk_count<128;i++){
  Block *device=0;if(failed(services->protocol(handles[i],&block_guid,(void **)&device))||!disk_usable(device)||device->media->partition)continue;
  publish_disk(device);
 }
 services->free_pool(handles);
}
static Block *command_disk(uint32_t index){return live_disk_count?(index<live_disk_count?live_disks[index]:0):(index?0:disk);}
