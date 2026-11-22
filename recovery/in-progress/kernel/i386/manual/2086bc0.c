/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_00000004 (*(uint8_t *)(0x4U))
#define DAT_020c5048 (*(uint8_t *)(0x20c5048U))
#define DAT_020c504c (*(uint8_t *)(0x20c504cU))
#define DAT_020c5050 (*(uint8_t *)(0x20c5050U))
#define DAT_020c5054 (*(uint8_t *)(0x20c5054U))
#define DAT_020c5058 (*(uint8_t *)(0x20c5058U))
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c526d (*(uint8_t *)(0x20c526dU))
#define DAT_020c5354 (*(uint8_t *)(0x20c5354U))
#define DAT_020c5355 (*(uint8_t *)(0x20c5355U))
#define DAT_020c5356 (*(uint8_t *)(0x20c5356U))
#define DAT_020c5357 (*(uint8_t *)(0x20c5357U))
#define DAT_020c5358 (*(uint8_t *)(0x20c5358U))
#define DAT_020c547f (*(uint8_t *)(0x20c547fU))
#define DAT_020cb03d (*(uint8_t *)(0x20cb03dU))
#define DAT_020cb0c2 (*(uint8_t *)(0x20cb0c2U))
#define DAT_020cd454 (*(uint8_t *)(0x20cd454U))
#define DAT_020cd4af (*(uint8_t *)(0x20cd4afU))
#define DAT_020cd6d6 (*(char *)(0x20cd6d6U))
#define DAT_020cd6d7 (*(char *)(0x20cd6d7U))
#define DAT_020cd6d8 (*(char *)(0x20cd6d8U))
#define DAT_020cd78b (*(uint8_t *)(0x20cd78bU))
#define DAT_020cd790 (*(uint8_t *)(0x20cd790U))
#define DAT_020cd795 (*(uint8_t *)(0x20cd795U))
#define DAT_020cd79a (*(uint8_t *)(0x20cd79aU))
#define DAT_020cd79e (*(uint8_t *)(0x20cd79eU))
#define DAT_020cd7a9 (*(uint8_t *)(0x20cd7a9U))
#define DAT_020cd7bb (*(uint8_t *)(0x20cd7bbU))
#define DAT_020cd7cf (*(uint8_t *)(0x20cd7cfU))
#define DAT_020cd7dc (*(uint8_t *)(0x20cd7dcU))
#define DAT_020cd805 (*(uint8_t *)(0x20cd805U))
#define DAT_020cd814 (*(uint8_t *)(0x20cd814U))
#define DAT_020cd821 (*(uint8_t *)(0x20cd821U))
#define DAT_020cd825 (*(uint8_t *)(0x20cd825U))
#define DAT_020cd829 (*(uint8_t *)(0x20cd829U))
#define DAT_020cd842 (*(uint8_t *)(0x20cd842U))
#define DAT_020cd84e (*(uint8_t *)(0x20cd84eU))
#define DAT_020cd965 (*(uint8_t *)(0x20cd965U))
#define DAT_020cd977 (*(uint8_t *)(0x20cd977U))
#define DAT_020cd98f (*(uint8_t *)(0x20cd98fU))
#define DAT_020cd994 (*(uint8_t *)(0x20cd994U))
#define DAT_020cd9e0 (*(uint8_t *)(0x20cd9e0U))
#define DAT_020cd9e1 (*(char *)(0x20cd9e1U))
#define DAT_020cd9e2 (*(char *)(0x20cd9e2U))
#define DAT_020cd9e3 (*(char *)(0x20cd9e3U))
#define DAT_020cd9e4 (*(char *)(0x20cd9e4U))
#define DAT_020ce12d (*(uint8_t *)(0x20ce12dU))
#define DAT_020ce5e8 (*(uint8_t *)(0x20ce5e8U))
#define DAT_020ceab4 (*(uint8_t *)(0x20ceab4U))
#define DAT_020de175 (*(uint8_t volatile *)(0x20de175U))
#define DAT_020de324 (*(uint32_t volatile *)(0x20de324U))
#define DAT_021306f8 (*(uint8_t volatile *)(0x21306f8U))
#define DAT_021408e9 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_0214b108 (*(uint32_t volatile *)(0x214b108U))
#define DAT_0214b10c (*(uint32_t volatile *)(0x214b10cU))
#define DAT_0214b11d (*(uint8_t volatile *)(0x214b11dU))
#define DAT_0215bc84 (*(uint32_t volatile *)(0x215bc84U))
#define DAT_0223dc18 (*(uint32_t volatile *)(0x223dc18U))
#define DAT_0223dc1c (*(uint8_t volatile *)(0x223dc1cU))
#define DAT_0223dc1d (*(uint8_t volatile *)(0x223dc1dU))
#define DAT_0223dd1d (*(uint8_t volatile *)(0x223dd1dU))
#define DAT_0223dd1e (*(uint8_t volatile *)(0x223dd1eU))
#define DAT_0223dd20 (*(uint8_t volatile *)(0x223dd20U))
#define Ram0223dd20 (*(uint32_t volatile *)(0x223dd20U))
#define _DAT_020c5048 (*(float *)(0x20c5048U))
#define _DAT_020c504c (*(float *)(0x20c504cU))
#define _DAT_020c5050 (*(float *)(0x20c5050U))
#define _DAT_020c5054 (*(float *)(0x20c5054U))
#define _DAT_020c5058 (*(float *)(0x20c5058U))
#define str_020c51c8 (*(char (*)[1])(0x20c51c8U))
#define str_020ca028 (*(char (*)[1])(0x20ca028U))
#define str_020cb850 (*(char (*)[1])(0x20cb850U))
#define str_020cb8e7 (*(char (*)[1])(0x20cb8e7U))
#define str_020cbdae (*(char (*)[1])(0x20cbdaeU))
#define str_020cd6cf (*(char (*)[1])(0x20cd6cfU))
#define str_020cd6d9 (*(char (*)[1])(0x20cd6d9U))
#define str_020cd6df (*(char (*)[1])(0x20cd6dfU))
#define str_020cd6ed (*(char (*)[1])(0x20cd6edU))
#define str_020cd6fb (*(char (*)[1])(0x20cd6fbU))
#define str_020cd708 (*(char (*)[1])(0x20cd708U))
#define str_020cd716 (*(char (*)[1])(0x20cd716U))
#define str_020cd729 (*(char (*)[1])(0x20cd729U))
#define str_020cd738 (*(char (*)[1])(0x20cd738U))
#define str_020cd743 (*(char (*)[1])(0x20cd743U))
#define str_020cd750 (*(char (*)[1])(0x20cd750U))
#define str_020cd75d (*(char (*)[1])(0x20cd75dU))
#define str_020cd76b (*(char (*)[1])(0x20cd76bU))
#define str_020cd77e (*(char (*)[1])(0x20cd77eU))
#define str_020cd7a3 (*(char (*)[1])(0x20cd7a3U))
#define str_020cd7ae (*(char (*)[1])(0x20cd7aeU))
#define str_020cd7b5 (*(char (*)[1])(0x20cd7b5U))
#define str_020cd7c1 (*(char (*)[1])(0x20cd7c1U))
#define str_020cd7c9 (*(char (*)[1])(0x20cd7c9U))
#define str_020cd7d4 (*(char (*)[1])(0x20cd7d4U))
#define str_020cd7e1 (*(char (*)[1])(0x20cd7e1U))
#define str_020cd7e7 (*(char (*)[1])(0x20cd7e7U))
#define str_020cd7f1 (*(char (*)[1])(0x20cd7f1U))
#define str_020cd7f9 (*(char (*)[1])(0x20cd7f9U))
#define str_020cd7ff (*(char (*)[1])(0x20cd7ffU))
#define str_020cd809 (*(char (*)[1])(0x20cd809U))
#define str_020cd819 (*(char (*)[1])(0x20cd819U))
#define str_020cd82d (*(char (*)[1])(0x20cd82dU))
#define str_020cd833 (*(char (*)[1])(0x20cd833U))
#define str_020cd839 (*(char (*)[1])(0x20cd839U))
#define str_020cd847 (*(char (*)[1])(0x20cd847U))
#define str_020cd853 (*(char (*)[1])(0x20cd853U))
#define str_020cd85f (*(char (*)[1])(0x20cd85fU))
#define str_020cd86c (*(char (*)[1])(0x20cd86cU))
#define str_020cd879 (*(char (*)[1])(0x20cd879U))
#define str_020cd884 (*(char (*)[1])(0x20cd884U))
#define str_020cd890 (*(char (*)[1])(0x20cd890U))
#define str_020cd89d (*(char (*)[1])(0x20cd89dU))
#define str_020cd8ab (*(char (*)[1])(0x20cd8abU))
#define str_020cd8b7 (*(char (*)[1])(0x20cd8b7U))
#define str_020cd8c3 (*(char (*)[1])(0x20cd8c3U))
#define str_020cd8d1 (*(char (*)[1])(0x20cd8d1U))
#define str_020cd8dc (*(char (*)[1])(0x20cd8dcU))
#define str_020cd8e9 (*(char (*)[1])(0x20cd8e9U))
#define str_020cd8f6 (*(char (*)[1])(0x20cd8f6U))
#define str_020cd903 (*(char (*)[1])(0x20cd903U))
#define str_020cd90e (*(char (*)[1])(0x20cd90eU))
#define str_020cd915 (*(char (*)[1])(0x20cd915U))
#define str_020cd91b (*(char (*)[1])(0x20cd91bU))
#define str_020cd926 (*(char (*)[1])(0x20cd926U))
#define str_020cd92f (*(char (*)[1])(0x20cd92fU))
#define str_020cd938 (*(char (*)[1])(0x20cd938U))
#define str_020cd940 (*(char (*)[1])(0x20cd940U))
#define str_020cd947 (*(char (*)[1])(0x20cd947U))
#define str_020cd956 (*(char (*)[1])(0x20cd956U))
#define str_020cd96a (*(char (*)[1])(0x20cd96aU))
#define str_020cd970 (*(char (*)[1])(0x20cd970U))
#define str_020cd97c (*(char (*)[1])(0x20cd97cU))
#define str_020cd983 (*(char (*)[1])(0x20cd983U))
#define str_020cd989 (*(char (*)[1])(0x20cd989U))
#define str_020cd998 (*(char (*)[1])(0x20cd998U))
#define str_020cd9a2 (*(char (*)[1])(0x20cd9a2U))
#define str_020cd9a9 (*(char (*)[1])(0x20cd9a9U))
#define str_020cd9b5 (*(char (*)[1])(0x20cd9b5U))
#define str_020cd9be (*(char (*)[1])(0x20cd9beU))
#define str_020cd9c7 (*(char (*)[1])(0x20cd9c7U))
#define str_020cd9d0 (*(char (*)[1])(0x20cd9d0U))
#define str_020cd9d9 (*(char (*)[1])(0x20cd9d9U))
#define str_020cd9e5 (*(char (*)[1])(0x20cd9e5U))
#define str_020cd9f0 (*(char (*)[1])(0x20cd9f0U))
#define str_020cd9fa (*(char (*)[1])(0x20cd9faU))
#define str_020cda03 (*(char (*)[1])(0x20cda03U))
#define str_020cda0c (*(char (*)[1])(0x20cda0cU))
#define str_020cda15 (*(char (*)[1])(0x20cda15U))
#define str_020cda1e (*(char (*)[1])(0x20cda1eU))
#define str_020cda27 (*(char (*)[1])(0x20cda27U))
#define str_020cda30 (*(char (*)[1])(0x20cda30U))
#define str_020cda39 (*(char (*)[1])(0x20cda39U))
#define str_020cda43 (*(char (*)[1])(0x20cda43U))
#define str_020cda53 (*(char (*)[1])(0x20cda53U))
#define str_020cda63 (*(char (*)[1])(0x20cda63U))
#define str_020cda6c (*(char (*)[1])(0x20cda6cU))
#define str_020cda78 (*(char (*)[1])(0x20cda78U))
#define str_020cda81 (*(char (*)[1])(0x20cda81U))
#define str_020cda89 (*(char (*)[1])(0x20cda89U))
#define str_020cda91 (*(char (*)[1])(0x20cda91U))
#define str_020cda9a (*(char (*)[1])(0x20cda9aU))
#define str_020cdaa9 (*(char (*)[1])(0x20cdaa9U))
#define str_020cdab9 (*(char (*)[1])(0x20cdab9U))
#define str_020cdc37 (*(char (*)[1])(0x20cdc37U))
#define str_020cdc5f (*(char (*)[1])(0x20cdc5fU))
#define str_020cdc93 (*(char (*)[1])(0x20cdc93U))
#define str_020cdca9 (*(char (*)[1])(0x20cdca9U))
#define str_020cdcd2 (*(char (*)[1])(0x20cdcd2U))
#define str_020cdd0f (*(char (*)[1])(0x20cdd0fU))
#define str_020cdd17 (*(char (*)[1])(0x20cdd17U))
#define str_020cdd49 (*(char (*)[1])(0x20cdd49U))
#define str_020cdd76 (*(char (*)[1])(0x20cdd76U))
#define str_020cdd7e (*(char (*)[1])(0x20cdd7eU))
#define str_020cdda5 (*(char (*)[1])(0x20cdda5U))
#define str_020cddbf (*(char (*)[1])(0x20cddbfU))
#define str_020cdddb (*(char (*)[1])(0x20cdddbU))
#define str_020cddfb (*(char (*)[1])(0x20cddfbU))
#define str_020cde1f (*(char (*)[1])(0x20cde1fU))
#define str_020cde45 (*(char (*)[1])(0x20cde45U))
#define str_020cde57 (*(char (*)[1])(0x20cde57U))
#define str_020cde79 (*(char (*)[1])(0x20cde79U))
#define str_020cde9b (*(char (*)[1])(0x20cde9bU))
#define str_020cdea6 (*(char (*)[1])(0x20cdea6U))
#define str_020cdec4 (*(char (*)[1])(0x20cdec4U))
#define str_020cdedd (*(char (*)[1])(0x20cdeddU))
#define str_020cdefd (*(char (*)[1])(0x20cdefdU))
#define str_020cdf1a (*(char (*)[1])(0x20cdf1aU))
#define str_020cdf44 (*(char (*)[1])(0x20cdf44U))
#define str_020cdf64 (*(char (*)[1])(0x20cdf64U))
#define str_020cdf86 (*(char (*)[1])(0x20cdf86U))
#define str_020cdfb3 (*(char (*)[1])(0x20cdfb3U))
#define str_020cdfd6 (*(char (*)[1])(0x20cdfd6U))
#define str_020cdfeb (*(char (*)[1])(0x20cdfebU))
#define str_020ce00d (*(char (*)[1])(0x20ce00dU))
#define str_020ce027 (*(char (*)[1])(0x20ce027U))
#define str_020ce048 (*(char (*)[1])(0x20ce048U))
#define str_020ce06c (*(char (*)[1])(0x20ce06cU))
#define str_020ce089 (*(char (*)[1])(0x20ce089U))
#define str_020ce0b1 (*(char (*)[1])(0x20ce0b1U))
#define str_020ce0d9 (*(char (*)[1])(0x20ce0d9U))
#define str_020ce0f8 (*(char (*)[1])(0x20ce0f8U))
#define str_020ce131 (*(char (*)[1])(0x20ce131U))
#define str_020ce15e (*(char (*)[1])(0x20ce15eU))
#define str_020ce16b (*(char (*)[1])(0x20ce16bU))
#define str_020ce18f (*(char (*)[1])(0x20ce18fU))
#define str_020ce1b5 (*(char (*)[1])(0x20ce1b5U))
#define str_020ce1d8 (*(char (*)[1])(0x20ce1d8U))
#define str_020ce1fd (*(char (*)[1])(0x20ce1fdU))
#define str_020ce21f (*(char (*)[1])(0x20ce21fU))
#define str_020ce243 (*(char (*)[1])(0x20ce243U))
#define str_020ce269 (*(char (*)[1])(0x20ce269U))
#define str_020ce28d (*(char (*)[1])(0x20ce28dU))
#define str_020ce2b3 (*(char (*)[1])(0x20ce2b3U))
#define str_020ce2cf (*(char (*)[1])(0x20ce2cfU))
#define str_020ce2e7 (*(char (*)[1])(0x20ce2e7U))
#define str_020ce2fe (*(char (*)[1])(0x20ce2feU))
#define str_020ce316 (*(char (*)[1])(0x20ce316U))
#define str_020ce333 (*(char (*)[1])(0x20ce333U))
#define str_020ce361 (*(char (*)[1])(0x20ce361U))
#define str_020ce386 (*(char (*)[1])(0x20ce386U))
#define str_020ce3b4 (*(char (*)[1])(0x20ce3b4U))
#define str_020ce3d2 (*(char (*)[1])(0x20ce3d2U))
#define str_020ce3f9 (*(char (*)[1])(0x20ce3f9U))
#define str_020ce407 (*(char (*)[1])(0x20ce407U))
#define str_020ce433 (*(char (*)[1])(0x20ce433U))
#define str_020ce454 (*(char (*)[1])(0x20ce454U))
#define str_020ce476 (*(char (*)[1])(0x20ce476U))
#define str_020ce49d (*(char (*)[1])(0x20ce49dU))
#define str_020ce4db (*(char (*)[1])(0x20ce4dbU))
#define str_020ce500 (*(char (*)[1])(0x20ce500U))
#define str_020ce522 (*(char (*)[1])(0x20ce522U))
#define str_020ce542 (*(char (*)[1])(0x20ce542U))
#define str_020ce54f (*(char (*)[1])(0x20ce54fU))
#define str_020ce579 (*(char (*)[1])(0x20ce579U))
#define str_020ce5a6 (*(char (*)[1])(0x20ce5a6U))
#define str_020ce5c9 (*(char (*)[1])(0x20ce5c9U))
#define str_020ce5ed (*(char (*)[1])(0x20ce5edU))
#define str_020ce608 (*(char (*)[1])(0x20ce608U))
#define str_020ce62c (*(char (*)[1])(0x20ce62cU))
#define str_020ce646 (*(char (*)[1])(0x20ce646U))
#define str_020ce65f (*(char (*)[1])(0x20ce65fU))
#define str_020ce682 (*(char (*)[1])(0x20ce682U))
#define str_020ce6a2 (*(char (*)[1])(0x20ce6a2U))
#define str_020ce6bc (*(char (*)[1])(0x20ce6bcU))
#define str_020ce6e0 (*(char (*)[1])(0x20ce6e0U))
#define str_020ce701 (*(char (*)[1])(0x20ce701U))
#define str_020ce71f (*(char (*)[1])(0x20ce71fU))
#define str_020ce748 (*(char (*)[1])(0x20ce748U))
#define str_020ce767 (*(char (*)[1])(0x20ce767U))
#define str_020ce792 (*(char (*)[1])(0x20ce792U))
#define str_020ce7ac (*(char (*)[1])(0x20ce7acU))
#define str_020ce7d2 (*(char (*)[1])(0x20ce7d2U))
#define str_020ce7ee (*(char (*)[1])(0x20ce7eeU))
#define str_020ce811 (*(char (*)[1])(0x20ce811U))
#define str_020ce835 (*(char (*)[1])(0x20ce835U))
#define str_020ce863 (*(char (*)[1])(0x20ce863U))
#define str_020ce882 (*(char (*)[1])(0x20ce882U))
#define str_020ce8a3 (*(char (*)[1])(0x20ce8a3U))
#define str_020ce8c0 (*(char (*)[1])(0x20ce8c0U))
#define str_020ce8df (*(char (*)[1])(0x20ce8dfU))
#define str_020ce901 (*(char (*)[1])(0x20ce901U))
#define str_020ce91f (*(char (*)[1])(0x20ce91fU))
#define str_020ce948 (*(char (*)[1])(0x20ce948U))
#define str_020ce96d (*(char (*)[1])(0x20ce96dU))
#define str_020ce994 (*(char (*)[1])(0x20ce994U))
#define str_020ce9b2 (*(char (*)[1])(0x20ce9b2U))
#define str_020ce9d5 (*(char (*)[1])(0x20ce9d5U))
#define str_020cea03 (*(char (*)[1])(0x20cea03U))
#define str_020cea21 (*(char (*)[1])(0x20cea21U))
#define str_020cea3e (*(char (*)[1])(0x20cea3eU))
#define str_020cea9b (*(char (*)[1])(0x20cea9bU))
#define str_020cead0 (*(char (*)[1])(0x20cead0U))
#define str_020ceaf0 (*(char (*)[1])(0x20ceaf0U))
#define local_54 (*(undefined4 *)(frame + 1884))
#define local_50 (*(undefined4 *)(frame + 1888))
#define local_4c (*(undefined4 *)(frame + 1892))
#define local_48 (*(undefined4 *)(frame + 1896))
#define local_44 (*(undefined4 *)(frame + 1900))
#define local_40 (*(undefined4 *)(frame + 1904))
#define local_3c (*(uint * *)(frame + 1908))
#define local_38 (*(uint * *)(frame + 1912))
#define local_34 (*(uint * *)(frame + 1916))
#define local_30 (*(uint * *)(frame + 1920))
#define local_2c (*(uint * *)(frame + 1924))
#define local_28 (*(uint * *)(frame + 1928))
#define local_24 (*(uint * *)(frame + 1932))
#define local_20 (*(pf_kernel_value * *)(frame + 1936))
#define local_1c (*(float * *)(frame + 1940))
#define local_18 (*(uint * *)(frame + 1944))
#define local_14 (*(pf_kernel_value * *)(frame + 1948))
#define local_78c (*(pf_kernel_value *)(frame + 36))
#define local_768 (*(uint *)(frame + 72))
#define local_764 (*(char * *)(frame + 76))
#define local_760 (*(float *)(frame + 80))
#define local_75c (*(undefined4 *)(frame + 84))
#define local_758 (*(undefined4 *)(frame + 88))
#define local_754 (*(undefined4 *)(frame + 92))
#define local_750 (*(undefined4 *)(frame + 96))
#define local_74c (*(undefined4 *)(frame + 100))
#define local_748 (*(undefined4 *)(frame + 104))
#define local_358 (*(int *)(frame + 1112))
#define vararg2 (*(undefined1 * *)(frame + 24))
#define local_34c (*(int *)(frame + 1124))
#define local_340 (*(int *)(frame + 1136))
#define local_330 (*(int *)(frame + 1152))
#define local_324 (*(int *)(frame + 1164))
#define local_2f8 (*(uint * *)(frame + 1208))
#define local_2f4 (*(uint * *)(frame + 1212))
#define local_2f0 (*(uint * *)(frame + 1216))
#define local_2ec (*(uint * *)(frame + 1220))
#define local_2e8 (*(int *)(frame + 1224))
#define local_2e4 (*(void * *)(frame + 1228))
#define local_2e0 (*(int *)(frame + 1232))
#define local_2dc (*(char * *)(frame + 1236))
#define local_2d8 (*(uint * *)(frame + 1240))
#define local_2d4 (*(char * *)(frame + 1244))
#define local_2d0 (*(uint * *)(frame + 1248))
#define local_2b8 (*(int *)(frame + 1272))
#define local_2b4 (*(pf_kernel_value *)(frame + 1276))
#define local_290 (*(undefined4 *)(frame + 1312))
#define local_28c (*(undefined4 *)(frame + 1316))
#define local_288 (*(undefined4 *)(frame + 1320))
#define local_b4 (*(uint * *)(frame + 1788))
#define local_b0 (*(uint * *)(frame + 1792))
#define local_ac (*(ushort *)(frame + 1796))
#define local_a8 (*(ushort *)(frame + 1800))
#define local_a6 (*(ushort *)(frame + 1802))
#define local_8c (*(uint *)(frame + 1828))
#define local_88 (*(double *)(frame + 1832))
#define local_64 (*(uint *)(frame + 1868))
#define local_60 (*(uint * *)(frame + 1872))
#define local_5c (*(undefined4 *)(frame + 1876))
#define local_58 (*(undefined4 *)(frame + 1880))


uchar recovered_2086bc0(void *context,char *name,pf_kernel_value *values,ulong count,
                       pf_kernel_value *out)

{
  unsigned char frame[2000] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  uchar uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  pf_kernel_value *ppVar15;
  int *piVar16;
  void *pvVar17;
  byte *pbVar18;
  char cVar19;
  byte bVar20;
  char cVar21;
  uchar extraout_CL;
  uchar extraout_CL_00;
  uchar in_CL;
  uchar in_CL_00;
  char *pcVar22;
  char *pcVar23;
  int iVar24;
  int iVar25;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  pf_kernel_value *extraout_ECX_01;
  pf_kernel_value *extraout_ECX_02;
  byte bVar26;
  byte bVar27;
  char *extraout_EDX = 0;
  uint incoming_edx;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint incoming_edx_02;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_03;
  uint incoming_edx_04;
  uint incoming_edx_05;
  uint incoming_edx_06;
  uint extraout_EDX_02 = 0;
  uint incoming_edx_07;
  undefined4 extraout_EDX_03 = 0;
  uint incoming_edx_08;
  uint extraout_EDX_04 = 0;
  uint incoming_edx_09;
  uint extraout_EDX_05 = 0;
  uint incoming_edx_10;
  uchar *puVar28;
  uint incoming_edx_11;
  uint extraout_EDX_06 = 0;
  uint incoming_edx_12;
  uint extraout_EDX_07 = 0;
  uint extraout_EDX_08 = 0;
  uint incoming_edx_13;
  uint incoming_edx_14;
  uint extraout_EDX_09 = 0;
  uint extraout_EDX_10 = 0;
  uint extraout_EDX_11 = 0;
  uint extraout_EDX_12 = 0;
  uint incoming_edx_15;
  uint extraout_EDX_13 = 0;
  uint extraout_EDX_14 = 0;
  uint extraout_EDX_15 = 0;
  uint incoming_edx_16;
  uint incoming_edx_17;
  uint incoming_edx_18;
  uint incoming_edx_19;
  uint incoming_edx_20;
  uint incoming_edx_21;
  uint incoming_edx_22;
  uint incoming_edx_23;
  uint incoming_edx_24;
  uint incoming_edx_25;
  uint incoming_edx_26;
  uint incoming_edx_27;
  uint incoming_edx_28;
  uint extraout_EDX_16 = 0;
  uint extraout_EDX_17 = 0;
  uint extraout_EDX_18 = 0;
  uint incoming_edx_29;
  uint incoming_edx_30;
  uint *extraout_EDX_19 = 0;
  uint *extraout_EDX_20 = 0;
  uint *extraout_EDX_21 = 0;
  uint *extraout_EDX_22 = 0;
  uint *extraout_EDX_23 = 0;
  uint *extraout_EDX_24 = 0;
  uint *extraout_EDX_25 = 0;
  uint *extraout_EDX_26 = 0;
  uint *extraout_EDX_27 = 0;
  uint *extraout_EDX_28 = 0;
  uint incoming_edx_31;
  uint incoming_edx_32;
  uint incoming_edx_33;
  uint incoming_edx_34;
  uint extraout_EDX_29 = 0;
  uint extraout_EDX_30 = 0;
  uint incoming_edx_35;
  uint incoming_edx_36;
  uint incoming_edx_37;
  uint incoming_edx_38;
  uint in_EDX;
  uint incoming_edx_39;
  uint incoming_edx_40;
  uint extraout_EDX_31 = 0;
  uint incoming_edx_41;
  uint incoming_edx_42;
  uint incoming_edx_43;
  uint extraout_EDX_32 = 0;
  uint incoming_edx_44;
  uint extraout_EDX_33 = 0;
  uint extraout_EDX_34 = 0;
  uint incoming_edx_45;
  uint incoming_edx_46;
  uint extraout_EDX_35 = 0;
  uint incoming_edx_47;
  uint extraout_EDX_36 = 0;
  uint extraout_EDX_37 = 0;
  uint incoming_edx_48;
  uint incoming_edx_49;
  uint incoming_edx_50;
  uint incoming_edx_51;
  uint extraout_EDX_38 = 0;
  uint extraout_EDX_39 = 0;
  uint extraout_EDX_40 = 0;
  uint incoming_edx_52;
  uint incoming_edx_53;
  byte bVar29;
  pf_kernel_value *ppVar30;
  uint *puVar31;
  ulong uVar32;
  int iVar33;
  uint **ppuVar34;
  byte *pbVar35;
  bool bVar36;
  ushort in_FPUControlWord = pf_fpu_control();
  ulonglong uVar37;
  longlong lVar38;
  float fVar39;
  float fVar40;
  double dVar41;

  bVar29 = 0;
  if (out == (pf_kernel_value *)0x0 || name == (char *)0x0) {
    return '\0';
  }
  local_18 = (uint *)count;
  local_14 = values;
  out->kind = 0;
  out->integer = 0;
  out->number = 0.0;
  out->text = (char *)0x0;
  out->storage = (void *)0x0;
  out->flag = 0;
  out->table = (void *)0x0;
  out->array = (void *)0x0;
  out->auxiliary = (void *)0x0;
  bVar26 = *name;
  pcVar5 = (char *)(uint)bVar26;
  pcVar22 = name;
  cVar19 = str_020cd6df[0];
  if (bVar26 == 0) {
joined_r0x02086d21:
    if (cVar19 == '\0') {
      if (count == 0) {
        uVar6 = recovered_2042550();
        pcVar22 = extraout_EDX;
        if (uVar6 == 0) {
          pcVar5 = str_020ceaf0;
          goto LAB_02087a80;
        }
LAB_02087a4b:
        uVar6 = recovered_208e640(&out->kind,(uint)pcVar22);
        if ((char)uVar6 != '\0') {
          return '\x01';
        }
        pcVar5 = str_020cdd49;
        goto LAB_02087a80;
      }
    }
    else {
LAB_02086d27:
      cVar19 = str_020cd6ed[0];
      if ((char)pcVar5 != '\0') {
        iVar24 = 0;
        pcVar22 = pcVar5;
        do {
          iVar25 = iVar24;
          if (iVar25 == 0xd) goto LAB_02086dc2;
          cVar19 = str_020cd6ed[iVar25];
          uVar3 = SUB41(pcVar5,0);
          pcVar5 = (char *)(uint)CONCAT11(cVar19,uVar3);
          cVar21 = (char)pcVar22;
          if (cVar21 != cVar19) {
            if ((byte)(cVar21 + 0x9fU) < 0x1a) {
              cVar21 = cVar21 + -0x20;
            }
            pcVar22 = (char *)(uint)CONCAT11(cVar19 + 0x9fU,cVar21);
            if ((byte)(cVar19 + 0x9fU) < 0x1a) {
              pcVar5 = (char *)(uint)CONCAT11(cVar19 + -0x20,uVar3);
            }
            if (cVar21 != (char)((uint)pcVar5 >> 8)) goto LAB_02086dc2;
          }
          pcVar22 = (char *)(uint)(byte)name[iVar25 + 1];
          iVar24 = iVar25 + 1;
        } while (name[iVar25 + 1] != 0);
        cVar19 = str_020cd6ed[iVar25 + 1];
      }
      if (cVar19 == '\0') {
        if (count == 0) {
          recovered_2043300();
LAB_02087797:
          out->kind = 5;
          out->integer = 1;
          out->number = 1.0;
LAB_020877ab:
          out->text = (char *)0x0;
          out->storage = (void *)0x0;
          out->flag = 0;
          out->table = (void *)0x0;
          out->array = (void *)0x0;
          out->auxiliary = (void *)0x0;
          return '\x01';
        }
      }
      else {
LAB_02086dc2:
        cVar19 = str_020cd6fb[0];
        if ((char)pcVar5 != '\0') {
          iVar24 = 0;
          pcVar22 = pcVar5;
          do {
            iVar25 = iVar24;
            if (iVar25 == 0xc) goto LAB_02086e1b;
            cVar19 = str_020cd6fb[iVar25];
            uVar3 = SUB41(pcVar5,0);
            pcVar5 = (char *)(uint)CONCAT11(cVar19,uVar3);
            cVar21 = (char)pcVar22;
            if (cVar21 != cVar19) {
              if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                cVar21 = cVar21 + -0x20;
              }
              if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                pcVar5 = (char *)(uint)CONCAT11(cVar19 + -0x20,uVar3);
              }
              if (cVar21 != (char)((uint)pcVar5 >> 8)) goto LAB_02086e1b;
            }
            pcVar22 = (char *)(uint)(byte)name[iVar25 + 1];
            iVar24 = iVar25 + 1;
          } while (name[iVar25 + 1] != 0);
          pcVar22 = (char *)0x0;
          cVar19 = str_020cd6fb[iVar25 + 1];
        }
        if (cVar19 != '\0') {
LAB_02086e1b:
          cVar19 = str_020cd708[0];
          if ((char)pcVar5 != '\0') {
            iVar24 = 0;
            do {
              iVar25 = iVar24;
              if (iVar25 == 0xd) goto LAB_02086ea4;
              cVar19 = str_020cd708[iVar25];
              cVar21 = (char)pcVar5;
              if (cVar21 != cVar19) {
                if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                  cVar21 = cVar21 + -0x20;
                }
                if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                  cVar19 = cVar19 + -0x20;
                }
                if (cVar21 != cVar19) goto LAB_02086ea4;
              }
              pcVar5 = (char *)(uint)(byte)name[iVar25 + 1];
              iVar24 = iVar25 + 1;
            } while (name[iVar25 + 1] != 0);
            cVar19 = str_020cd708[iVar25 + 1];
          }
          if (cVar19 == '\0') {
            uVar6 = recovered_208eac0(context,(uint *)name,(int)values,count,(uint *)out);
            return (uchar)uVar6;
          }
LAB_02086ea4:
          uVar4 = recovered_207a9c0(name,str_020cd716);
          if (uVar4 != '\0') {
            uVar6 = recovered_208f2e0(context,name,(int)local_14,(uint)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd729);
          if (uVar4 != '\0') {
            uVar6 = recovered_208f4e0(context,name,(int)local_14,(int)local_18,&out->kind);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd738);
          if (uVar4 != '\0') {
            uVar6 = recovered_208f5f0(context,(uint *)name,(int)local_14,(uint)local_18,&out->kind);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd743);
          if (uVar4 != '\0') {
            uVar6 = recovered_208fb60(context,name,(int)local_14,(int)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd750);
          if (uVar4 != '\0') {
            uVar6 = recovered_208fcc0(context,name,(int)local_14,(int)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd76b);
          if (uVar4 != '\0') {
            uVar6 = recovered_208ff10(context,name,(int)local_14,(int)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd77e);
          if (uVar4 != '\0') {
            local_78c.kind = 0;
            if (local_18 != (uint *)0x1) {
              vararg2 = &DAT_020c5084;
              uVar6 = 1;
              goto LAB_02087a38;
            }
            uVar6 = recovered_208fff0(context,name,(int)local_14,1,0,&local_78c.kind);
            if ((char)uVar6 == '\0') {
              return '\0';
            }
            uVar6 = recovered_2090100(context,name);
            if ((char)uVar6 == '\0') {
              return '\0';
            }
            recovered_2090150(local_78c.kind,incoming_edx_00);
            goto LAB_02087797;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd78b);
          if (uVar4 != '\0') {
            uVar6 = recovered_20901c0(context,name,(int)local_14,(int)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd790);
          if (uVar4 != '\0') {
            uVar6 = recovered_2090300(context,name,(int)local_14,(uint)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd795);
          if (uVar4 != '\0') {
            uVar6 = recovered_2090470(context,name,(int)local_14,(int)local_18,(uint *)out);
            return (uchar)uVar6;
          }
          local_20 = out;
          local_1c = context;
          uVar4 = recovered_207a9c0(name,&DAT_020cd79a);
          if (uVar4 != '\0') {
            uVar6 = recovered_2090670((int *)local_1c,(uchar **)name,&local_14->kind,(uint)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd79e);
          if (uVar4 != '\0') {
            uVar6 = recovered_20913a0((int *)local_1c,name,&local_14->kind,(uint)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7a3);
          if (uVar4 != '\0') {
            uVar6 = recovered_20917c0((int *)local_1c,name,&local_14->kind,(uint)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd7a9);
          if (uVar4 != '\0') {
            uVar6 = recovered_2091cb0((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7ae);
          if (uVar4 != '\0') {
            uVar6 = recovered_20923c0((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7b5);
          if (uVar4 != '\0') {
            uVar6 = recovered_20924a0((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd7bb);
          if (uVar4 != '\0') {
            uVar6 = recovered_2092620((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cb0c2);
          if (uVar4 != '\0') {
            uVar6 = recovered_2092760((int *)local_1c,name,(int)local_14,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7c1);
          if (uVar4 != '\0') {
            uVar6 = recovered_2092800((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7c9);
          if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd75d), uVar4 != '\0')) {
            uVar6 = recovered_2092980((int *)local_1c,name,(int)local_14,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd7cf);
          if (uVar4 != '\0') {
            uVar7 = recovered_2092b20(local_1c,name,&local_14->kind,(int)local_18,&local_20->kind);
            return (uchar)uVar7;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7d4);
          if (uVar4 != '\0') {
            uVar6 = recovered_2092bd0((int *)local_1c,name,(int)local_14,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,&DAT_020cd7dc);
          if (uVar4 != '\0') {
            uVar6 = recovered_2092d80((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7e1);
          if (uVar4 != '\0') {
            uVar6 = recovered_20930a0((int *)local_1c,name,(uint)local_14,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cbdae);
          if (uVar4 != '\0') {
            uVar6 = recovered_2093250((int *)local_1c,(int *)name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cb850);
          if (uVar4 != '\0') {
            uVar7 = recovered_2095750((int *)local_1c,name,&local_14->kind,(int)local_18,
                                      &local_20->kind);
            return (uchar)uVar7;
          }
          uVar4 = recovered_207a9c0(name,str_020ca028);
          if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cdd76), uVar4 != '\0')) {
            uVar6 = recovered_2096040((int *)local_1c,name,&local_14->kind,(uint)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7e7);
          if (uVar4 != '\0') {
            uVar6 = recovered_2097c70((uchar *)local_1c,name,&local_14->kind,(int)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7f1);
          if (uVar4 != '\0') {
            uVar6 = recovered_2098720((int *)local_1c,name,&local_14->kind,(uint)local_18,
                                      (uint *)local_20);
            return (uchar)uVar6;
          }
          uVar4 = recovered_207a9c0(name,str_020cd7f9);
          if (uVar4 == '\0') {
            uVar4 = recovered_207a9c0(name,str_020cd7ff);
            if (uVar4 != '\0') {
              if (local_18 == (uint *)0x0) {
                uVar4 = recovered_207cfd0((uint *)local_20,incoming_edx_02);
                return uVar4;
              }
              goto LAB_02087fbf;
            }
            uVar4 = recovered_207a9c0(name,&DAT_020cd805);
            uVar6 = extraout_EDX_00;
            if (uVar4 == '\0') {
              uVar4 = recovered_207a9c0(name,str_020cd809);
              uVar6 = extraout_EDX_01;
              if (uVar4 != '\0') goto LAB_02087ff8;
              uVar4 = recovered_207a9c0(name,&DAT_020cd814);
              if (uVar4 == '\0') {
                uVar4 = recovered_207a9c0(name,str_020cd819);
                if (uVar4 != '\0') {
                  local_78c.kind = 0;
                  if (((local_18 == (uint *)0x2) && (local_14->kind == 7)) &&
                     ((local_14->table != (void *)0x0 &&
                      (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,2,1,
                                                 &local_78c.kind),
                      ((byte)uVar6 & -1 < local_78c.kind) != 0)))) {
                    uVar6 = recovered_207f640((int)local_14->table,local_78c.kind);
                    if ((char)uVar6 != '\0') {
                      local_60 = *(uint **)((int)local_14->table + 0xc);
                      local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                      goto LAB_0208819c;
                    }
                    pcVar5 = str_020cddfb;
                  }
                  else {
                    pcVar5 = str_020cdddb;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd821);
                if (uVar4 != '\0') {
                  if (local_18 + -1 < (uint *)0xfffffffe) {
                    pcVar5 = str_020cde1f;
                  }
                  else {
                    uVar6 = recovered_2084ed0(&local_14->kind,&local_14[1].kind,(uint *)local_20);
                    if ((char)uVar6 != '\0') {
                      return '\x01';
                    }
                    if (local_18 == (uint *)0x3) {
                      ppVar15 = local_14 + 2;
LAB_0208832c:
LAB_0208832f:
                      uVar6 = recovered_207e1d0((uint *)local_20,(uint *)ppVar15);
                      return (uchar)uVar6;
                    }
                    pcVar5 = str_020cde45;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd825);
                if (uVar4 != '\0') {
                  local_78c.kind = 0;
                  local_78c.integer = 0;
                  local_78c.number = 0.0;
                  local_78c.text = (char *)0x0;
                  local_78c.storage = (void *)0x0;
                  local_78c.flag = 0;
                  local_78c.table = (void *)0x0;
                  local_78c.array = (void *)0x0;
                  local_78c.auxiliary = (void *)0x0;
                  if (local_18 == (uint *)0x3) {
                    uVar6 = recovered_207e1d0((uint *)&local_78c,(uint *)local_14);
                    if ((char)uVar6 == '\0') {
                      pcVar5 = str_020cde79;
                    }
                    else {
                      ppVar15 = local_14 + 2;
                      uVar6 = recovered_207d2b0(&local_78c.kind,&local_14[1].kind,&ppVar15->kind,
                                                '\x01');
                      if ((char)uVar6 != '\0') {
                        uVar6 = incoming_edx_03;
                        if ((uint *)local_78c.kind != (uint *)0x3) {
                          recovered_2043a90((uint *)&local_78c,incoming_edx_03);
                          goto LAB_0208860e;
                        }
LAB_020882e0:
                        ppVar15 = local_20;
                        recovered_2043a90((uint *)local_20,uVar6);
                        ppVar30 = &local_78c;
LAB_020882f0:
                        for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                          ppVar15->kind = ppVar30->kind;
                          ppVar30 = (pf_kernel_value *)((int)ppVar30 + ((uint)bVar29 * -2 + 1) * 4);
                          ppVar15 = (pf_kernel_value *)((int)ppVar15 + (uint)bVar29 * -8 + 4);
                        }
                        return '\x01';
                      }
                      recovered_2043a90((uint *)&local_78c,incoming_edx_03);
                      pcVar5 = str_020cde9b;
                    }
                  }
                  else {
                    pcVar5 = str_020cde57;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd829);
                if (uVar4 != '\0') {
                  if (((local_18 == (uint *)0x1) && (local_14->kind == 7)) &&
                     ((pvVar17 = local_14->table, pvVar17 != (void *)0x0 &&
                      (*(int *)((int)pvVar17 + 8) != 0)))) {
                    recovered_207a480((uint *)local_20,
                                      (uint *)(*(int *)((int)pvVar17 + 0x10) + -0x24 +
                                              *(int *)((int)pvVar17 + 8) * 0x24));
                    piVar16 = (int *)((int)local_14->table + 8);
                    *piVar16 = *piVar16 + -1;
                    return '\x01';
                  }
                  pcVar5 = str_020cdea6;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd82d);
                if (uVar4 != '\0') {
                  if (local_18 != (uint *)0x1) {
                    pcVar5 = str_020cdec4;
                    goto LAB_02088215;
                  }
                  if (local_14->kind == 8) {
                    if (local_14->array == (void *)0x0) goto LAB_02088731;
                    recovered_209a1c0((int)local_14->array,incoming_edx_04);
                  }
                  else {
                    if ((local_14->kind != 7) || (local_14->table == (void *)0x0)) {
LAB_02088731:
                      pcVar5 = str_020cdedd;
                      goto LAB_02088215;
                    }
                    recovered_209a130((int)local_14->table,incoming_edx_04);
                  }
LAB_020886eb:
                  local_20->kind = 1;
LAB_020886f4:
                  local_20->integer = 0;
LAB_020886fb:
                  local_20->number = 0.0;
LAB_02088702:
                  local_20->text = (char *)0x0;
                  local_20->storage = (void *)0x0;
                  local_20->flag = 0;
                  local_20->table = (void *)0x0;
                  local_20->array = (void *)0x0;
                  local_20->auxiliary = (void *)0x0;
                  return '\x01';
                }
                uVar4 = recovered_207a9c0(name,str_020cd833);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x2) {
                    if (local_14->kind == 8) {
                      if (local_14->array != (void *)0x0) {
                        local_78c.kind = 0;
                        uVar4 = recovered_2085e30((uint *)(local_14 + 1),(uint *)&local_78c);
                        if (uVar4 == '\0') {
                          pf_varargs_207a2e0___(local_1c,name,str_020cdf1a);
                        }
                        else {
                          uVar6 = recovered_209a220((int)local_14->array,(char *)local_78c.kind);
                          recovered_2001710((void *)local_78c.kind);
                          fVar39 = 1.0;
                          if ((char)uVar6 == '\0') {
                            fVar39 = 0.0;
                          }
                          local_20->kind = 5;
                          local_20->integer = uVar6 & 0xff;
                          local_20->number = fVar39;
                          local_20->text = (char *)0x0;
                          local_20->storage = (void *)0x0;
                          local_20->flag = 0;
                          local_20->table = (void *)0x0;
                          local_20->array = (void *)0x0;
                          local_20->auxiliary = (void *)0x0;
                        }
                        return uVar4;
                      }
                    }
                    else if ((local_14->kind == 7) &&
                            (pvVar17 = local_14->table, pvVar17 != (void *)0x0)) {
                      if ((local_14[1].kind == 1) &&
                         ((uVar6 = local_14[1].integer, 0 < (int)uVar6 &&
                          (uVar6 <= *(uint *)((int)pvVar17 + 8))))) {
                        recovered_2043a90((uint *)((uVar6 - 1) * 0x24 +
                                                  *(int *)((int)pvVar17 + 0x10)),incoming_edx_05);
                        pvVar17 = local_14->table;
                        uVar9 = *(uint *)((int)pvVar17 + 8);
                        if (uVar6 <= uVar9 && uVar9 - uVar6 != 0) {
                          recovered_2001c30((void *)(*(int *)((int)pvVar17 + 0x10) +
                                                    (uVar6 - 1) * 0x24),
                                            (void *)(*(int *)((int)pvVar17 + 0x10) + uVar6 * 0x24),
                                            (uVar9 - uVar6) * 0x24);
                          pvVar17 = local_14->table;
                          uVar9 = *(uint *)((int)pvVar17 + 8);
                        }
                        iVar25 = uVar9 - 1;
                        *(int *)((int)pvVar17 + 8) = iVar25;
                        iVar24 = *(int *)((int)pvVar17 + 0x10);
                        *(undefined4 *)(iVar24 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 4 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 8 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0xc + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x10 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x14 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x18 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x1c + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x20 + iVar25 * 0x24) = 0;
LAB_0208852c:
                        local_20->kind = 5;
                        local_20->integer = 1;
                        local_20->number = 1.0;
                        goto LAB_02088702;
                      }
LAB_020885f0:
                      local_20->kind = 5;
                      goto LAB_020886f4;
                    }
                    pcVar5 = str_020cdf44;
                  }
                  else {
                    pcVar5 = str_020cdefd;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd839);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x2) {
                    if (local_14->kind == 8) {
                      if (local_14->array != (void *)0x0) {
                        local_78c.kind = 0;
                        uVar4 = recovered_2085e30((uint *)(local_14 + 1),(uint *)&local_78c);
                        if (uVar4 != '\0') {
                          uVar6 = recovered_2082a70((int)local_14->array,(char *)local_78c.kind);
                          recovered_2001710((void *)local_78c.kind);
                          fVar39 = 1.0;
                          if (-1 >= (int)uVar6) {
                            fVar39 = 0.0;
                          }
                          local_20->kind = 5;
                          local_20->integer = (uint)(-1 < (int)uVar6);
                          local_20->number = fVar39;
                          local_20->text = (char *)0x0;
                          local_20->storage = (void *)0x0;
                          local_20->flag = 0;
                          local_20->table = (void *)0x0;
                          local_20->array = (void *)0x0;
                          local_20->auxiliary = (void *)0x0;
                          return uVar4;
                        }
                        pcVar5 = str_020cdf86;
                        context = local_1c;
LAB_020879a6:
                        pf_varargs_207a2e0___(context,name,pcVar5);
                        return '\0';
                      }
                    }
                    else if ((local_14->kind == 7) &&
                            (pvVar17 = local_14->table, pvVar17 != (void *)0x0)) {
                      if (*(int *)((int)pvVar17 + 8) != 0) {
                        ppVar15 = local_14 + 1;
                        iVar24 = 0;
                        uVar6 = 0;
                        do {
                          uVar4 = recovered_2086aa0((uint *)(*(int *)((int)pvVar17 + 0x10) + iVar24)
                                                    ,(uint *)ppVar15);
                          if (uVar4 != '\0') goto LAB_0208852c;
                          uVar6 = uVar6 + 1;
                          pvVar17 = local_14->table;
                          iVar24 = iVar24 + 0x24;
                        } while (uVar6 < *(uint *)((int)pvVar17 + 8));
                      }
                      goto LAB_020885f0;
                    }
                    pcVar5 = str_020cdfb3;
                  }
                  else {
                    pcVar5 = str_020cdf64;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd842);
                if (uVar4 != '\0') {
                  if (((local_18 == (uint *)0x1) && (local_14->kind == 8)) &&
                     (local_14->array != (void *)0x0)) {
                    uVar4 = recovered_207cf70((uint *)local_20,incoming_edx_06);
                    if (uVar4 != '\0') {
                      iVar24 = *(int *)((int)local_14->array + 4);
                      if (iVar24 == 0) {
                        return '\x01';
                      }
                      local_18 = recovered_2001650(iVar24 << 2);
                      uVar6 = extraout_EDX_02;
                      if (local_18 != (uint *)0x0) {
                        pvVar17 = local_14->array;
                        if (*(int *)((int)pvVar17 + 4) != 0) {
                          iVar24 = 0;
                          puVar31 = (uint *)0x0;
                          do {
                            local_18[(int)puVar31] =
                                 *(uint *)(*(int *)((int)pvVar17 + 0xc) + iVar24);
                            puVar31 = (uint *)((int)puVar31 + 1);
                            pvVar17 = local_14->array;
                            puVar12 = *(uint **)((int)pvVar17 + 4);
                            iVar24 = iVar24 + 0x28;
                          } while (puVar31 < puVar12);
                          if (puVar12 != (uint *)0x0) {
                            local_24 = (uint *)0x0;
                            do {
                              puVar14 = local_24;
                              puVar31 = (uint *)((int)local_24 + 1);
                              local_24 = puVar31;
                              if (puVar31 < puVar12) {
                                do {
                                  pcVar5 = &DAT_020c5084;
                                  if ((char *)local_18[(int)puVar14] != (char *)0x0) {
                                    pcVar5 = (char *)local_18[(int)puVar14];
                                  }
                                  pcVar22 = &DAT_020c5084;
                                  if ((char *)local_18[(int)puVar31] != (char *)0x0) {
                                    pcVar22 = (char *)local_18[(int)puVar31];
                                  }
                                  iVar24 = recovered_20022a0(pcVar5,pcVar22);
                                  if (0 < iVar24) {
                                    uVar6 = local_18[(int)puVar14];
                                    local_18[(int)puVar14] = local_18[(int)puVar31];
                                    local_18[(int)puVar31] = uVar6;
                                  }
                                  puVar31 = (uint *)((int)puVar31 + 1);
                                  puVar12 = *(uint **)((int)local_14->array + 4);
                                } while (puVar31 < puVar12);
                              }
                            } while (local_24 < puVar12);
                            if (puVar12 != (uint *)0x0) {
                              uVar6 = 0;
                              do {
                                local_78c.kind = 0;
                                local_78c.integer = 0;
                                local_78c.number = 0.0;
                                local_78c.text = (char *)0x0;
                                local_78c.storage = (void *)0x0;
                                local_78c.flag = 0;
                                local_78c.table = (void *)0x0;
                                local_78c.array = (void *)0x0;
                                local_78c.auxiliary = (void *)0x0;
                                uVar10 = recovered_207e340((uint *)&local_78c,
                                                           (char *)local_18[uVar6]);
                                uVar9 = extraout_EDX_04;
                                if ((char)uVar10 == '\0') {
LAB_02088d58:
                                  recovered_2043a90((uint *)&local_78c,uVar9);
                                  recovered_2001710(local_18);
                                  uVar6 = extraout_EDX_05;
                                  goto LAB_02088d71;
                                }
                                uVar10 = recovered_207f480((int)local_20->table,(int)&local_78c);
                                uVar9 = incoming_edx_09;
                                if ((char)uVar10 == '\0') goto LAB_02088d58;
                                recovered_2043a90((uint *)&local_78c,incoming_edx_09);
                                uVar6 = uVar6 + 1;
                              } while (uVar6 < *(uint *)((int)local_14->array + 4));
                            }
                          }
                        }
                        recovered_2001710(local_18);
                        return '\x01';
                      }
LAB_02088d71:
                      recovered_2043a90((uint *)local_20,uVar6);
                    }
                    pcVar5 = str_020cdfeb;
                  }
                  else {
                    pcVar5 = str_020cdfd6;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd847);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x1) {
                    if (local_14->kind == 8) {
                      if (local_14->array != (void *)0x0) {
                        uVar4 = recovered_207cf70((uint *)local_20,incoming_edx_07);
                        if (uVar4 != '\0') {
                          pvVar17 = local_14->array;
                          if (*(int *)((int)pvVar17 + 4) == 0) {
                            return '\x01';
                          }
                          uVar6 = 0;
                          iVar24 = 4;
                          while (uVar9 = recovered_207f480((int)local_20->table,
                                                           *(int *)((int)pvVar17 + 0xc) + iVar24),
                                (char)uVar9 != '\0') {
                            uVar6 = uVar6 + 1;
                            pvVar17 = local_14->array;
                            iVar24 = iVar24 + 0x28;
                            if (*(uint *)((int)pvVar17 + 4) <= uVar6) {
                              return '\x01';
                            }
                          }
                          recovered_2043a90((uint *)local_20,incoming_edx_08);
                        }
                        pcVar5 = str_020ce048;
                        goto LAB_02088215;
                      }
                    }
                    else if (local_14->kind == 7) {
                      ppVar15 = local_14;
                      goto LAB_0208832f;
                    }
                    pcVar5 = str_020ce027;
                  }
                  else {
                    pcVar5 = str_020ce00d;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd84e);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd853), uVar4 != '\0')
                   ) {
                  uVar6 = recovered_209a350((int *)local_1c,name,&local_14->kind,(int)local_18,
                                            (uint *)local_20);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,str_020cd85f);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd86c), uVar4 != '\0')
                   ) {
                  if (local_18 == (uint *)0x1) {
                    if (local_14->kind == 3) {
                      pcVar5 = &DAT_020c5084;
                      if (local_14->text != (char *)0x0) {
                        pcVar5 = local_14->text;
                      }
                      uVar8 = recovered_2002270(pcVar5);
                      uVar37 = recovered_2074810(pcVar5,uVar8);
                      pbVar18 = (byte *)uVar37;
                      if (pbVar18 != (byte *)0x0) {
                        PF_PART1(local_18, 0) = *pbVar18;
                        ppVar15 = local_20;
                        while( true ) {
                          pbVar1 = (byte *)uVar37;
                          local_20 = ppVar15;
                          if ((byte)local_18 == 0) break;
                          pbVar35 = pbVar1 + 1;
                          uVar4 = recovered_207a9c0(name,str_020cd85f);
                          uVar37 = CONCAT44(extraout_EDX_03,pbVar35);
                          if (uVar4 == '\0') {
                            if ((byte)((byte)local_18 + 0xbf) < 0x1a) {
                              PF_PART1(local_18, 0) = (byte)local_18 | 0x20;
                            }
                          }
                          else if ((byte)((byte)local_18 + 0x9f) < 0x1a) {
                            PF_PART1(local_18, 0) = (byte)local_18 - 0x20;
                          }
                          *pbVar1 = (byte)local_18;
                          PF_PART1(local_18, 0) = *pbVar35;
                          ppVar15 = local_20;
                        }
                        recovered_2043a90((uint *)ppVar15,(uint)(uVar37 >> 0x20));
                        ppVar15->kind = 3;
                        ppVar15->text = (char *)pbVar18;
                        return '\x01';
                      }
                      pcVar5 = str_020ce089;
                      goto LAB_02088215;
                    }
                  }
                  else {
                    pf_varargs_207a2e0__4__4__4_(local_1c,name,str_020cea9b,(uint)name,1,0x20c5084);
                  }
                  pcVar5 = str_020ce06c;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd879);
                if (uVar4 != '\0') {
                  local_78c.kind = 0;
                  local_2b4.kind = 0;
                  if ((((((uint)local_18 & 0xfffffffe) != 2) || (local_14->kind != 3)) ||
                      (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,0
                                                 ,&local_78c.kind), (char)uVar6 == '\0')) ||
                     (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,(uint)local_18,1,
                                                &local_2b4.kind), (char)uVar6 == '\0')) {
                    pcVar5 = str_020ce0b1;
                    goto LAB_02088215;
                  }
                  uVar11 = recovered_2002270((char *)local_78c.kind);
                  uVar8 = uVar11;
                  if (local_18 == (uint *)0x3) {
                    if ((5 < (uint)local_14[2].kind) ||
                       ((0x26U >> (local_14[2].kind & 0x1fU) & 1) == 0)) {
                      pcVar5 = str_020ce0d9;
                      goto LAB_02088215;
                    }
                    uVar8 = local_14[2].integer;
                  }
                  if (local_2b4.kind < 0) {
                    local_2b4.kind = local_2b4.kind + uVar11 + 1;
                  }
                  uVar8 = ((int)uVar8 >> 0x1f & uVar11 + 1) + uVar8;
                  uVar32 = uVar11;
                  if ((uint *)local_2b4.kind == (uint *)0x0) {
                    if (uVar8 != 0) {
                      uVar32 = uVar8;
                    }
LAB_02088e97:
                    local_2b4.kind = 1;
                    if ((int)uVar32 < (int)uVar11) goto LAB_02088ea4;
LAB_02088cfd:
                    iVar24 = uVar11 - local_2b4.kind;
                    if ((int)uVar11 < local_2b4.kind) goto LAB_02088eac;
                  }
                  else {
                    if (uVar8 != 0) {
                      uVar32 = uVar8;
                    }
                    if (local_2b4.kind < 1) {
                      goto LAB_02088e97;
                    }
                    if ((int)uVar11 <= (int)uVar32) goto LAB_02088cfd;
LAB_02088ea4:
                    iVar24 = uVar32 - local_2b4.kind;
                    if ((int)uVar32 < local_2b4.kind) {
LAB_02088eac:
                      puVar28 = &DAT_020c5084;
                      iVar24 = 0;
                      goto LAB_02088eb9;
                    }
                  }
                  puVar28 = (uchar *)(local_78c.kind + -1 + local_2b4.kind);
                  iVar24 = iVar24 + 1;
LAB_02088eb9:
                  uVar6 = recovered_2086a30((uint *)local_20,puVar28,iVar24);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,str_020cd884);
                if (uVar4 != '\0') {
                  local_2b4.kind = 0;
                  local_60 = (uint *)0x0;
                  local_28 = (uint *)0x1;
                  if ((((char *)((int)local_18 + -5) < (char *)0xfffffffd) || (local_14->kind != 3))
                     || ((local_14[1].kind != 3 ||
                         ((uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,
                                                     (uint)local_18,0,&local_2b4.kind),
                          (char)uVar6 == '\0' ||
                          (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,
                                                     (uint)local_18,1,(int *)&local_60),
                          (char)uVar6 == '\0')))))) {
                    pcVar5 = str_020ce0f8;
                    goto LAB_02088215;
                  }
                  if (local_18 < (uint *)0x3) {
LAB_02088e50:
                    bVar29 = 0;
                  }
                  else {
                    uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,(uint)local_18,2,
                                              (int *)&local_28);
                    if ((char)uVar6 == '\0') {
                      return '\0';
                    }
                    if (local_18 == (uint *)0x3) goto LAB_02088e50;
                    uVar6 = recovered_207d360(&local_14[3].kind,incoming_edx_10);
                    bVar29 = (byte)uVar6;
                  }
                  if ((int)local_28 < 1) {
                    local_28 = (uint *)0x1;
                  }
                  iVar24 = recovered_20022a0((char *)local_60,&DAT_020ce12d);
                  if (iVar24 == 0 && (bVar29 & 1) == 0) {
                    if ((uint *)local_2b4.kind == (uint *)0x0) {
                      return '\x01';
                    }
                    cVar19 = ((char *)((int)local_28 + -1))[local_2b4.kind];
                    local_78c.integer = (int)local_28;
                    if (cVar19 == '\0') {
                      return '\x01';
                    }
                    while (9 < (byte)(cVar19 - 0x30U)) {
                      cVar19 = *(char *)(local_2b4.kind + local_78c.integer);
                      local_78c.integer = local_78c.integer + 1;
                      if (cVar19 == '\0') {
                        return '\x01';
                      }
                    }
                    local_764 = (char *)(local_78c.integer + -1);
                    do {
                      pcVar5 = (char *)(local_2b4.kind + 1) + (int)local_764;
                      local_764 = local_764 + 1;
                    } while ((byte)(*pcVar5 - 0x30U) < 10);
                    local_78c.number = (float)local_78c.integer;
                    local_78c.kind = 1;
                    local_78c.text = (char *)0x0;
                    local_78c.storage = (void *)0x0;
                    local_78c.flag = 0;
                    local_78c.table = (void *)0x0;
                    local_78c.array = (void *)0x0;
                    local_78c.auxiliary = (void *)0x0;
                    local_2dc = local_764;
                    local_2d8 = (uint *)local_78c.integer;
                  }
                  else {
                    local_764 = recovered_20025d0((char *)(local_2b4.kind + -1) + (int)local_28,
                                                  (char *)local_60);
                    iVar24 = local_2b4.kind;
                    if (local_764 == (char *)0x0) {
                      return '\x01';
                    }
                    local_78c.integer = (int)(local_764 + (1 - local_2b4.kind));
                    local_78c.number = (float)local_78c.integer;
                    local_78c.kind = 1;
                    local_78c.text = (char *)0x0;
                    local_78c.storage = (void *)0x0;
                    local_78c.flag = 0;
                    local_78c.table = (void *)0x0;
                    local_78c.array = (void *)0x0;
                    local_78c.auxiliary = (void *)0x0;
                    local_2d0 = (uint *)local_78c.integer;
                    uVar8 = recovered_2002270((char *)local_60);
                    local_764 = local_764 + (uVar8 - iVar24);
                    local_2d4 = local_764;
                  }
                  local_768 = 1;
                  local_760 = (float)(int)local_764;
                  local_75c = 0;
                  local_758 = 0;
                  local_754 = 0;
                  local_750 = 0;
                  local_74c = 0;
                  local_748 = 0;
LAB_0208c3de:
                  iVar24 = 2;
LAB_0208c3ec:
                  uVar6 = recovered_20830f0((uint *)local_20,(int)&local_78c,iVar24);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,str_020cd890);
                if (uVar4 != '\0') {
                  local_2b4.kind = 0;
                  local_60 = (uint *)0x0;
                  local_28 = (uint *)0x1;
                  if ((((((uint)local_18 & 0xfffffffe) == 2) && (local_14->kind == 3)) &&
                      (local_14[1].kind == 3)) &&
                     ((uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,0
                                                 ,&local_2b4.kind), (char)uVar6 != '\0' &&
                      (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,1
                                                 ,(int *)&local_60), (char)uVar6 != '\0')))) {
                    if (local_18 == (uint *)0x3) {
                      uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,3,2,
                                                (int *)&local_28);
                      if ((char)uVar6 == '\0') goto LAB_0208ac89;
                      if ((int)local_28 < 1) {
                        local_28 = (uint *)0x1;
                      }
                    }
                    iVar24 = recovered_20022a0((char *)local_60,&DAT_020ce12d);
                    if (iVar24 == 0) {
                      local_24 = (uint *)0x1;
                      if (((uint *)local_2b4.kind != (uint *)0x0) &&
                         (cVar19 = ((char *)((int)local_28 + -1))[local_2b4.kind], cVar19 != '\0'))
                      {
                        pcVar5 = (char *)(local_2b4.kind + (int)local_28);
LAB_0208931a:
                        if (9 < (byte)(cVar19 - 0x30U)) goto code_r0x02089324;
                        uVar8 = 0;
                        pcVar22 = pcVar5;
                        do {
                          cVar19 = *pcVar22;
                          uVar8 = uVar8 + 1;
                          pcVar22 = pcVar22 + 1;
                        } while ((byte)(cVar19 - 0x30U) < 10);
                        puVar28 = (uchar *)(pcVar5 + -1);
                        goto LAB_02089959;
                      }
                      goto LAB_020875cb;
                    }
                    iVar25 = recovered_20022a0((char *)local_60,str_020ce15e);
                    iVar24 = local_2b4.kind;
                    if (iVar25 != 0) {
                      puVar28 = (uchar *)recovered_20025d0((char *)(local_2b4.kind + -1) +
                                                           (int)local_28,(char *)local_60);
                      if (puVar28 != (uchar *)0x0) {
                        uVar8 = recovered_2002270((char *)local_60);
LAB_02089959:
                        local_24 = (uint *)recovered_2086a30((uint *)local_20,puVar28,uVar8);
                        goto LAB_020875cb;
                      }
LAB_0208c663:
                      local_24 = (uint *)0x1;
                      goto LAB_020875cb;
                    }
                    local_30 = (uint *)0x0;
                    local_38 = (uint *)0x0;
                    local_64 = 0;
                    local_8c = 0;
                    local_78c.kind = 0;
                    local_78c.integer = 0;
                    local_78c.number = 0.0;
                    local_78c.text = (char *)0x0;
                    local_78c.storage = (void *)0x0;
                    local_78c.flag = 0;
                    local_78c.table = (void *)0x0;
                    local_78c.array = (void *)0x0;
                    local_78c.auxiliary = (void *)0x0;
                    local_768 = 0;
                    local_764 = (char *)0x0;
                    local_760 = 0.0;
                    local_75c = 0;
                    local_758 = 0;
                    local_754 = 0;
                    local_750 = 0;
                    local_74c = 0;
                    local_748 = 0;
                    uVar6 = recovered_209af90(local_2b4.kind,(int)((int)local_28 + -1),
                                              (int *)&local_30,(int *)&local_38,(int *)&local_64,
                                              (int *)&local_8c);
                    local_24 = (uint *)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
                    if ((char)uVar6 == '\0') goto LAB_020875cb;
                    uVar9 = recovered_2086a30((uint *)&local_78c,(uchar *)(iVar24 + (int)local_30),
                                              (int)local_38 - (int)local_30);
                    uVar6 = extraout_EDX_07;
                    if ((char)uVar9 == '\0') {
LAB_02089967:
                      recovered_2043a90((uint *)&local_78c,uVar6);
                      recovered_2043a90(&local_768,incoming_edx_19);
                    }
                    else {
                      uVar9 = recovered_2086a30(&local_768,(uchar *)(local_2b4.kind + local_64),
                                                local_8c - local_64);
                      uVar6 = extraout_EDX_08;
                      if ((char)uVar9 == '\0') goto LAB_02089967;
                      uVar6 = recovered_20830f0((uint *)local_20,(int)&local_78c,2);
                      local_18 = (uint *)CONCAT31(PF_PART3(local_18, 1),(char)uVar6);
                      recovered_2043a90((uint *)&local_78c,incoming_edx_13);
                      recovered_2043a90(&local_768,incoming_edx_14);
                      if ((byte)local_18 != '\0') goto LAB_020875cb;
                    }
                    pcVar5 = str_020ce16b;
                  }
                  else {
                    pcVar5 = str_020ce131;
                  }
LAB_0208ac7d:
                  pf_varargs_207a2e0___(local_1c,name,pcVar5);
LAB_0208ac89:
                  local_24 = (uint *)0x0;
LAB_020875cb:
                  return (uchar)local_24;
                }
                uVar4 = recovered_207a9c0(name,str_020cd89d);
                if (uVar4 != '\0') {
                  if (((local_18 == (uint *)0x2) && (local_14->kind == 3)) &&
                     (local_14[1].kind == 3)) {
                    local_18 = (uint *)local_14->text;
                    if (local_18 == (uint *)0x0) {
                      uVar6 = 1;
                    }
                    else {
                      pcVar5 = local_14[1].text;
                      if (pcVar5 != (char *)0x0) {
                        uVar4 = recovered_207cf70((uint *)local_20,incoming_edx_11);
                        if (uVar4 != '\0') {
                          iVar24 = recovered_20022a0(pcVar5,&DAT_020ce12d);
                          if (iVar24 == 0) {
                            cVar19 = (char)*local_18;
                            if (cVar19 == '\0') {
                              return '\x01';
                            }
                            local_24 = (uint *)((int)local_18 + 1);
                            iVar24 = 0;
                            while( true ) {
                              while (9 < (byte)(cVar19 - 0x30U)) {
                                cVar19 = *(char *)((int)local_18 + iVar24 + 1);
                                iVar24 = iVar24 + 1;
                                if (cVar19 == '\0') {
                                  return '\x01';
                                }
                              }
                              local_14 = (pf_kernel_value *)((int)local_24 + iVar24);
                              iVar25 = 0;
                              do {
                                iVar33 = iVar25;
                                iVar25 = iVar33 + 1;
                              } while ((byte)(*(char *)((int)&local_14->kind + iVar33) - 0x30U) < 10
                                      );
                              local_78c.kind = 0;
                              local_78c.integer = 0;
                              local_78c.number = 0.0;
                              local_78c.text = (char *)0x0;
                              local_78c.storage = (void *)0x0;
                              local_78c.flag = 0;
                              local_78c.table = (void *)0x0;
                              local_78c.array = (void *)0x0;
                              local_78c.auxiliary = (void *)0x0;
                              uVar9 = recovered_2086a30((uint *)&local_78c,
                                                        (uchar *)((int)local_18 + iVar24),iVar25);
                              uVar6 = extraout_EDX_12;
                              if ((char)uVar9 == '\0') break;
                              uVar9 = recovered_207f480((int)local_20->table,(int)&local_78c);
                              uVar6 = incoming_edx_15;
                              if ((char)uVar9 == '\0') break;
                              iVar24 = iVar24 + iVar25;
                              recovered_2043a90((uint *)&local_78c,incoming_edx_15);
                              cVar19 = *(char *)((int)&local_14->kind + iVar33);
                              if (cVar19 == '\0') {
                                return '\x01';
                              }
                            }
                          }
                          else {
                            iVar24 = recovered_20022a0(pcVar5,str_020ce15e);
                            if (iVar24 == 0) {
                              local_60 = (uint *)0x0;
                              local_28 = (uint *)0x0;
                              local_30 = (uint *)0x0;
                              local_38 = (uint *)0x0;
                              uVar6 = recovered_209af90((int)local_18,0,(int *)&local_60,
                                                        (int *)&local_28,(int *)&local_30,
                                                        (int *)&local_38);
                              local_24 = (uint *)CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1);
                              if ((char)uVar6 != '\0') {
                                do {
                                  local_2b4.kind = 0;
                                  local_2b4.integer = 0;
                                  local_2b4.number = 0.0;
                                  local_2b4.text = (char *)0x0;
                                  local_2b4.storage = (void *)0x0;
                                  local_2b4.flag = 0;
                                  local_2b4.table = (void *)0x0;
                                  local_2b4.array = (void *)0x0;
                                  local_2b4.auxiliary = (void *)0x0;
                                  local_78c.kind = 0;
                                  local_78c.integer = 0;
                                  local_78c.number = 0.0;
                                  local_78c.text = (char *)0x0;
                                  local_78c.storage = (void *)0x0;
                                  local_78c.flag = 0;
                                  local_78c.table = (void *)0x0;
                                  local_78c.array = (void *)0x0;
                                  local_78c.auxiliary = (void *)0x0;
                                  local_768 = 0;
                                  local_764 = (char *)0x0;
                                  local_760 = 0.0;
                                  local_75c = 0;
                                  local_758 = 0;
                                  local_754 = 0;
                                  local_750 = 0;
                                  local_74c = 0;
                                  local_748 = 0;
                                  uVar9 = recovered_2086a30((uint *)&local_78c,
                                                            (uchar *)((int)local_18 + (int)local_60)
                                                            ,(int)local_28 - (int)local_60);
                                  uVar6 = extraout_EDX_13;
                                  if ((char)uVar9 == '\0') {
LAB_02089b9e:
                                    recovered_2043a90((uint *)&local_78c,uVar6);
                                    recovered_2043a90(&local_768,incoming_edx_22);
                                    recovered_2043a90((uint *)&local_2b4,incoming_edx_23);
                                    recovered_2043a90((uint *)local_20,incoming_edx_24);
                                    pcVar5 = str_020ce1b5;
                                    goto LAB_0208ac7d;
                                  }
                                  uVar9 = recovered_2086a30(&local_768,
                                                            (uchar *)((int)local_18 + (int)local_30)
                                                            ,(int)local_38 - (int)local_30);
                                  uVar6 = extraout_EDX_14;
                                  if ((char)uVar9 == '\0') goto LAB_02089b9e;
                                  uVar9 = recovered_20830f0((uint *)&local_2b4,(int)&local_78c,2);
                                  uVar6 = extraout_EDX_15;
                                  if ((char)uVar9 == '\0') goto LAB_02089b9e;
                                  uVar9 = recovered_207f480((int)local_20->table,(int)&local_2b4);
                                  uVar6 = incoming_edx_16;
                                  if ((char)uVar9 == '\0') goto LAB_02089b9e;
                                  recovered_2043a90((uint *)&local_78c,incoming_edx_16);
                                  recovered_2043a90(&local_768,incoming_edx_17);
                                  recovered_2043a90((uint *)&local_2b4,incoming_edx_18);
                                  uVar6 = recovered_209af90((int)local_18,(int)local_38,
                                                            (int *)&local_60,(int *)&local_28,
                                                            (int *)&local_30,(int *)&local_38);
                                } while ((char)uVar6 != '\0');
                              }
                              goto LAB_020875cb;
                            }
                            if (*pcVar5 == '\0') {
                              return '\x01';
                            }
                            local_14 = (pf_kernel_value *)recovered_2002270(pcVar5);
                            local_78c.kind = 0;
                            local_78c.integer = 0;
                            local_78c.number = 0.0;
                            local_78c.text = (char *)0x0;
                            local_78c.storage = (void *)0x0;
                            local_78c.flag = 0;
                            local_78c.table = (void *)0x0;
                            local_78c.array = (void *)0x0;
                            local_78c.auxiliary = (void *)0x0;
                            puVar28 = (uchar *)recovered_20025d0((char *)local_18,pcVar5);
                            if (puVar28 == (uchar *)0x0) {
                              return '\x01';
                            }
                            while( true ) {
                              uVar9 = recovered_2086a30((uint *)&local_78c,puVar28,(int)local_14);
                              uVar6 = extraout_EDX_06;
                              if ((char)uVar9 == '\0') break;
                              uVar9 = recovered_207f480((int)local_20->table,(int)&local_78c);
                              uVar6 = incoming_edx_12;
                              if ((char)uVar9 == '\0') break;
                              recovered_2043a90((uint *)&local_78c,incoming_edx_12);
                              local_78c.kind = 0;
                              local_78c.integer = 0;
                              local_78c.number = 0.0;
                              local_78c.text = (char *)0x0;
                              local_78c.storage = (void *)0x0;
                              local_78c.flag = 0;
                              local_78c.table = (void *)0x0;
                              local_78c.array = (void *)0x0;
                              local_78c.auxiliary = (void *)0x0;
                              puVar28 = (uchar *)recovered_20025d0((char *)(puVar28 + (int)local_14)
                                                                   ,pcVar5);
                              if (puVar28 == (uchar *)0x0) {
                                return '\x01';
                              }
                            }
                          }
                          recovered_2043a90((uint *)&local_78c,uVar6);
                          recovered_2043a90((uint *)local_20,incoming_edx_21);
                        }
                        pcVar5 = str_020ce1b5;
                        goto LAB_02088215;
                      }
                      uVar6 = 2;
                    }
                    pf_varargs_207a2e0__4__4_(local_1c,name,str_020cead0,(uint)name,uVar6);
                  }
                  pcVar5 = str_020ce18f;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd8ab);
                if (uVar4 != '\0') {
                  local_2b4.kind = 0;
                  local_60 = (uint *)0x1;
                  local_28 = (uint *)0x1;
                  if (((local_18 == (uint *)0x0) || (local_14->kind != 3)) ||
                     (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,0,
                                                &local_2b4.kind), (char)uVar6 == '\0')) {
                    pcVar5 = str_020ce1d8;
                    goto LAB_0208ac7d;
                  }
                  puVar31 = (uint *)recovered_2002270((char *)local_2b4.kind);
                  local_24 = (uint *)CONCAT31((int3)((uint)puVar31 >> 8),1);
                  if ((int)puVar31 < 1) goto LAB_020875cb;
                  puVar12 = (uint *)0x1;
                  uVar6 = extraout_EDX_09;
                  if (local_18 == (uint *)0x1) {
LAB_02089b3c:
                    local_28 = puVar12;
LAB_02089b3f:
                    if ((int)puVar12 < 0) {
                      puVar12 = (uint *)((char *)((int)puVar31 + 1) + (int)puVar12);
                      local_60 = puVar12;
                    }
                    puVar14 = local_28;
                    if ((int)local_28 < 0) {
                      puVar14 = (uint *)((char *)((int)puVar31 + 1) + (int)local_28);
                    }
                    if ((int)puVar12 < 1) {
                      local_60 = (uint *)0x1;
                      puVar12 = (uint *)0x1;
                    }
                    local_28 = puVar31;
                    if ((int)puVar14 <= (int)puVar31) {
                      local_28 = puVar14;
                    }
                    if ((puVar31 < puVar12) || ((int)local_28 < (int)puVar12)) goto LAB_020875cb;
                    if (puVar12 == local_28) {
                      uVar6 = (uint)(byte)((char *)(local_2b4.kind + -1))[(int)puVar12];
                      fVar39 = (float)(byte)((char *)(local_2b4.kind + -1))[(int)puVar12];
                      local_20->kind = 1;
LAB_0208d0ab:
                      local_20->integer = uVar6;
                      local_20->number = fVar39;
                      local_20->text = (char *)0x0;
                      local_20->storage = (void *)0x0;
                      local_20->flag = 0;
                      local_20->table = (void *)0x0;
                      local_20->array = (void *)0x0;
                      local_20->auxiliary = (void *)0x0;
                      goto LAB_020875cb;
                    }
                    uVar4 = recovered_207cf70((uint *)local_20,uVar6);
                    if (uVar4 != '\0') {
                      *(undefined1 *)((int)local_20->table + 4) = 1;
                      if ((int)local_60 <= (int)local_28) {
                        pcVar5 = (char *)((int)local_60 + -1);
                        do {
                          local_78c.integer = (int)*(byte *)(local_2b4.kind + (int)pcVar5);
                          local_78c.text = (char *)0x0;
                          local_78c.storage = (void *)0x0;
                          local_78c.flag = 0;
                          local_78c.table = (void *)0x0;
                          local_78c.array = (void *)0x0;
                          local_78c.auxiliary = (void *)0x0;
                          local_78c.kind = 1;
                          local_ac = (ushort)*(byte *)(local_2b4.kind + (int)pcVar5);
                          local_78c.number = (float)local_ac;
                          uVar6 = recovered_207f480((int)local_20->table,(int)&local_78c);
                          if ((char)uVar6 == '\0') {
                            recovered_2043a90((uint *)local_20,incoming_edx_26);
                            goto LAB_0208a535;
                          }
                          pcVar5 = pcVar5 + 1;
                        } while ((int)pcVar5 < (int)local_28);
                      }
                      goto LAB_020875cb;
                    }
LAB_0208a535:
                    pcVar5 = str_020ce1fd;
                    goto LAB_0208ac7d;
                  }
                  uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,(uint)local_18,1,
                                            (int *)&local_60);
                  if ((char)uVar6 != '\0') {
                    if (local_18 < (uint *)0x3) {
                      puVar12 = local_60;
                      uVar6 = extraout_EDX_10;
                      goto LAB_02089b3c;
                    }
                    uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,(uint)local_18,2,
                                              (int *)&local_28);
                    if ((char)uVar6 == '\0') goto LAB_0208ac89;
                    puVar12 = local_60;
                    uVar6 = extraout_EDX_11;
                    goto LAB_02089b3f;
                  }
                  goto LAB_0208ac89;
                }
                uVar4 = recovered_207a9c0(name,str_020cd8b7);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x0) {
                    uVar6 = recovered_2086a30((uint *)local_20,&DAT_020c5084,0);
                    return (uchar)uVar6;
                  }
                  pcVar5 = recovered_2001650((ulong)((int)local_18 + 1));
                  ppVar15 = local_20;
                  if (pcVar5 == (char *)0x0) {
                    pcVar5 = str_020ce21f;
                  }
                  else {
                    if (local_14 != (pf_kernel_value *)0x0) {
                      local_14 = (pf_kernel_value *)&local_14->number;
                      puVar31 = (uint *)0x0;
                      do {
                        pvVar17 = local_14[-1].array;
                        if (pvVar17 == (void *)0x1) {
LAB_02089abd:
                          local_2e4 = local_14[-1].auxiliary;
                          fVar39 = (float)(int)local_2e4;
                        }
                        else {
                          if (pvVar17 != (void *)0x2) {
                            if (pvVar17 == (void *)0x5) goto LAB_02089abd;
                            break;
                          }
                          fVar39 = (float)local_14->kind;
                        }
                        local_a8 = in_FPUControlWord | 0xc00;
                        local_2e0 = (int)ROUND(fVar39);
                        pcVar5[(int)puVar31] = (char)local_2e0;
                        puVar31 = (uint *)((int)puVar31 + 1);
                        local_14 = local_14 + 1;
                        if (local_18 == puVar31) {
                          pcVar5[(int)local_18] = '\0';
                          recovered_2043a90((uint *)local_20,incoming_edx_20);
                          ppVar15->kind = 3;
                          ppVar15->text = pcVar5;
                          return '\x01';
                        }
                      } while( true );
                    }
                    recovered_2001710(pcVar5);
                    pcVar5 = str_020ce243;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd8c3);
                if (uVar4 != '\0') {
                  local_60 = (uint *)0x0;
                  if (((local_18 == (uint *)0x0) || (local_14->kind != 3)) ||
                     (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,0,
                                                (int *)&local_60), (char)uVar6 == '\0')) {
                    pcVar5 = str_020ce269;
                  }
                  else {
                    local_2b4.kind = 0;
                    local_2b4.integer = 0;
                    local_2b4.number = 0.0;
                    local_3c = (uint *)0x1;
                    local_24 = (uint *)0x0;
LAB_02089c52:
                    while( true ) {
                      ppVar15 = local_20;
                      if (*(char *)((int)local_60 + (int)local_24) != '%') break;
                      if (((char *)((int)local_60 + 1))[(int)local_24] != '%') {
                        pbVar18 = (byte *)((char *)((int)local_60 + 1) + (int)local_24);
                        local_28 = (uint *)0x0;
                        local_78c.kind = CONCAT31(PF_PART3(local_78c.kind, 1),0x25);
                        bVar29 = *pbVar18;
                        if (bVar29 == 0) {
                          puVar31 = (uint *)0x1;
LAB_0208a1e5:
                          *(char *)((int)&local_78c.kind + (int)puVar31) = '\0';
LAB_0208a1ed:
                          recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                          local_2b4.kind = 0;
                          local_2b4.integer = 0;
                          local_2b4.number = 0.0;
                          pcVar5 = str_020ce2b3;
                          goto LAB_02088215;
                        }
                        local_2c = (uint *)0x1;
                        while( true ) {
                          puVar31 = local_2c;
                          *(byte *)((int)&local_78c.kind + (int)local_2c) = bVar29;
                          bVar26 = (pbVar18 + -1)[(int)puVar31];
                          if ((byte)((bVar26 & 0xdf) + 0xbf) < 0x1a) break;
                          if (bVar26 == 0x25) {
                            ((undefined1 *)((int)&local_78c.kind + 1))[(int)local_2c] = 0;
                            goto switchD_02089d63_caseD_48;
                          }
                          puVar31 = (uint *)((int)local_2c + 1);
                          if ((uint *)0x1c < local_2c) goto LAB_0208a1e5;
                          bVar29 = pbVar18[(int)local_2c];
                          local_2c = puVar31;
                          if (bVar29 == 0) goto LAB_0208a1e5;
                        }
                        ((undefined1 *)((int)&local_78c.kind + 1))[(int)local_2c] = 0;
                        if (bVar26 == 0) goto LAB_0208a1ed;
                        if ((local_18 <= local_3c) && (bVar26 != 0x25)) {
                          recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                          local_2b4.kind = 0;
                          local_2b4.integer = 0;
                          local_2b4.number = 0.0;
                          pcVar5 = str_020ce2cf;
                          goto LAB_02088215;
                        }
                        switch((uintptr_t)(bVar26)) {
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                          fVar39 = recovered_207e0c0(&local_14[(int)local_3c].kind,(uint)bVar29);
                          local_88 = (double)fVar39;
                          iVar24 = recovered_20044f0((char *)0x0,0,(char *)&local_78c,(double)fVar39
                                                    );
                          if (iVar24 < 0) {
LAB_0208a2ac:
                            recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                            local_2b4.kind = 0;
                            local_2b4.integer = 0;
                            local_2b4.number = 0.0;
                            pcVar5 = str_020ce2e7;
                            goto LAB_02088215;
                          }
                          local_34 = recovered_2001650(iVar24 + 1U);
                          if (local_34 == (uint *)0x0) goto LAB_0208a34c;
                          recovered_20044f0((char *)local_34,iVar24 + 1U,(char *)&local_78c,local_88
                                           );
                          break;
                        default:
switchD_02089d63_caseD_48:
                          recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                          local_2b4.kind = 0;
                          local_2b4.integer = 0;
                          local_2b4.number = 0.0;
                          pcVar5 = str_020ce316;
                          goto LAB_02088215;
                        case 0x58:
                        case 99:
                        case 100:
                        case 0x69:
                        case 0x6f:
                        case 0x75:
                        case 0x78:
                          fVar39 = recovered_207e0c0(&local_14[(int)local_3c].kind,(uint)bVar29);
                          local_a6 = in_FPUControlWord | 0xc00;
                          local_2e8 = (int)ROUND(fVar39);
                          local_88 = pf_bits_double(CONCAT44(PF_PART4(local_88, 4),local_2e8));
                          iVar24 = recovered_20044f0((char *)0x0,0,(char *)&local_78c,local_2e8);
                          if (iVar24 < 0) goto LAB_0208a2ac;
                          local_34 = recovered_2001650(iVar24 + 1U);
                          if (local_34 == (uint *)0x0) goto LAB_0208a34c;
                          recovered_20044f0((char *)local_34,iVar24 + 1U,(char *)&local_78c,
                                            PF_PART4(local_88, 0));
                          break;
                        case 0x71:
                          uVar4 = recovered_2085fb0((uint)(local_14 + (int)local_3c),
                                                    (uint *)&local_28);
                          if ((uVar4 != '\0') &&
                             (uVar6 = recovered_209b060(&local_2b4.kind,(uchar *)local_28),
                             (char)uVar6 != '\0')) {
                            recovered_2001710(local_28);
                            goto LAB_02089f6b;
                          }
LAB_0208a344:
                          recovered_2001710(local_28);
                          goto LAB_0208a34c;
                        case 0x73:
                          uVar4 = recovered_2085fb0((uint)(local_14 + (int)local_3c),
                                                    (uint *)&local_28);
                          if (uVar4 == '\0') goto LAB_0208acfd;
                          iVar24 = recovered_20044f0((char *)0x0,0,(char *)&local_78c,local_28);
                          if (iVar24 < 0) {
                            recovered_2001710(local_28);
                            recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                            local_2b4.kind = 0;
                            local_2b4.integer = 0;
                            local_2b4.number = 0.0;
                            pcVar5 = str_020ce2fe;
                            goto LAB_02088215;
                          }
                          local_34 = recovered_2001650(iVar24 + 1U);
                          if (local_34 == (uint *)0x0) goto LAB_0208a344;
                          recovered_20044f0((char *)local_34,iVar24 + 1U,(char *)&local_78c,local_28
                                           );
                          recovered_2001710(local_28);
                        }
                        puVar31 = local_34;
                        uVar6 = recovered_2086400(&local_2b4.kind,(char *)local_34);
                        local_88 = pf_bits_double(CONCAT71(PF_PART7(local_88, 1),(char)uVar6));
                        recovered_2001710(puVar31);
                        if (PF_PART1(local_88, 0) != '\0') {
LAB_02089f6b:
                          local_24 = (uint *)((int)local_24 + (int)local_2c);
                          local_3c = (uint *)((int)local_3c + 1);
                          goto LAB_02089f74;
                        }
                        goto LAB_0208a34c;
                      }
                      uVar6 = recovered_20864b0(&local_2b4.kind,&DAT_020cd454,1);
                      if ((char)uVar6 == '\0') goto LAB_0208a34c;
                      local_24 = (uint *)((int)local_24 + 2);
                    }
                    if (*(char *)((int)local_60 + (int)local_24) != '\0') {
                      uVar6 = recovered_20864b0(&local_2b4.kind,
                                                (char *)((int)local_60 + (int)local_24),1);
                      if ((char)uVar6 == '\0') goto LAB_0208a34c;
LAB_02089f74:
                      local_24 = (uint *)((int)local_24 + 1);
                      goto LAB_02089c52;
                    }
                    recovered_2043a90((uint *)local_20,(uint)local_60);
                    ppVar15->kind = 3;
                    pcVar5 = (char *)(uintptr_t)pf_float_bits(local_2b4.number);
                    if ((char *)(uintptr_t)pf_float_bits(local_2b4.number) != (char *)0x0) goto LAB_0208afd3;
                    pcVar5 = recovered_2001650(1);
                    if (pcVar5 != (char *)0x0) goto LAB_0208afd0;
                    local_20->text = (char *)0x0;
LAB_0208a34c:
                    recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                    local_2b4.kind = 0;
                    local_2b4.integer = 0;
                    local_2b4.number = 0.0;
                    pcVar5 = str_020ce28d;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd8d1);
                if (uVar4 != '\0') {
                  local_2b4.kind = 0;
                  local_60 = (uint *)0x0;
                  local_28 = (uint *)0x0;
                  if ((((((uint)local_18 & 0xfffffffe) != 2) || (local_14->kind != 3)) ||
                      (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,0
                                                 ,&local_2b4.kind), (char)uVar6 == '\0')) ||
                     (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,(uint)local_18,1,
                                                (int *)&local_28), (char)uVar6 == '\0')) {
                    pcVar5 = str_020ce333;
                    goto LAB_02088215;
                  }
                  local_78c.kind = 0;
                  local_78c.integer = 0;
                  local_78c.number = 0.0;
                  puVar31 = (uint *)0x0;
                  if (local_18 == (uint *)0x3) {
                    uVar4 = recovered_2085fb0((uint)(local_14 + 2),(uint *)&local_60);
                    puVar31 = local_60;
                    if (uVar4 == '\0') {
                      recovered_2001710(local_60);
                      recovered_2001710((void *)0x0);
                      return '\0';
                    }
                  }
                  if ((int)local_28 < 1) {
LAB_0208a13d:
                    recovered_2001710(puVar31);
                    ppVar15 = local_20;
                    recovered_2043a90((uint *)local_20,incoming_edx_25);
                    ppVar15->kind = 3;
                    pcVar5 = (char *)(uintptr_t)pf_float_bits(local_78c.number);
                    if ((char *)(uintptr_t)pf_float_bits(local_78c.number) != (char *)0x0) goto LAB_0208afd3;
                    pcVar5 = recovered_2001650(1);
                    if (pcVar5 != (char *)0x0) {
LAB_0208afd0:
                      *pcVar5 = '\0';
LAB_0208afd3:
                      local_20->text = pcVar5;
                      return '\x01';
                    }
                    local_20->text = (char *)0x0;
                  }
                  else {
                    uVar6 = recovered_2086400(&local_78c.kind,(char *)local_2b4.kind);
                    if ((char)uVar6 != '\0') {
                      if (1 < (int)local_28) {
                        iVar24 = 1;
                        do {
                          if (((local_60 != (uint *)0x0) &&
                              (uVar6 = recovered_2086400(&local_78c.kind,(char *)local_60),
                              (char)uVar6 == '\0')) ||
                             (uVar6 = recovered_2086400(&local_78c.kind,(char *)local_2b4.kind),
                             (char)uVar6 == '\0')) goto LAB_0208a4e6;
                          iVar24 = iVar24 + 1;
                        } while (iVar24 < (int)local_28);
                      }
                      puVar31 = local_60;
                      goto LAB_0208a13d;
                    }
LAB_0208a4e6:
                    recovered_2001710(local_60);
                  }
                  recovered_2001710((void *)(uintptr_t)pf_float_bits(local_78c.number));
                  local_78c.kind = 0;
                  local_78c.integer = 0;
                  local_78c.number = 0.0;
                  pcVar5 = str_020ce361;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd8dc);
                if (uVar4 == '\0') goto LAB_0208a6fe;
                if ((((uint)local_18 & 0xfffffffe) != 2) || (1 < local_14->kind - 7U)) {
                  pcVar5 = str_020ce386;
                  goto LAB_02088215;
                }
                if (local_14->kind != 7) {
                  if (local_14->array == (void *)0x0) goto LAB_0208a6fe;
                  puVar31 = (uint *)recovered_20829e0((int)local_14->array,incoming_edx_27);
                  local_24 = (uint *)((int)puVar31 + 1);
                  local_60 = local_24;
                  if (local_18 != (uint *)0x2) {
                    local_60 = (uint *)0x0;
                  }
                  if ((local_18 == (uint *)0x3) &&
                     (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,3,1,
                                                (int *)&local_60), (char)uVar6 == '\0')) {
                    return '\0';
                  }
                  if ((int)local_60 < 1) {
                    local_60 = (uint *)0x1;
                  }
                  if ((int)local_24 < (int)local_60) {
                    local_60 = local_24;
                  }
                  else if (local_60 <= puVar31) {
                    do {
                      pf_varargs_20044f0__4_((char *)&local_78c,0x20,&DAT_020cd4af,(uint)puVar31);
                      pf_varargs_20044f0__4_
                                ((char *)&local_2b4,0x20,&DAT_020cd4af,(uint)((int)puVar31 + 1));
                      ppVar15 = local_14;
                      local_2c = (uint *)recovered_209b1b0((int)local_14->array,(char *)&local_78c,
                                                           '\0');
                      puVar12 = (uint *)recovered_209b1b0((int)ppVar15->array,(char *)&local_2b4,
                                                          '\x01');
                      if (((local_2c == (uint *)0x0) || (puVar12 == (uint *)0x0)) ||
                         (uVar6 = recovered_207e1d0(puVar12,local_2c), (char)uVar6 == '\0'))
                      goto LAB_0208a93a;
                      bVar36 = (int)local_60 < (int)puVar31;
                      puVar31 = (uint *)((int)puVar31 + -1);
                    } while (bVar36);
                  }
                  pf_varargs_20044f0__4_((char *)&local_78c,0x20,&DAT_020cd4af,(uint)local_60);
                  puVar31 = (uint *)recovered_209b1b0((int)local_14->array,(char *)&local_78c,'\x01'
                                                     );
                  if ((puVar31 == (uint *)0x0) ||
                     (uVar6 = recovered_207e1d0(puVar31,(uint *)(local_14 +
                                                                (int)((int)local_18 + -1))),
                     (char)uVar6 == '\0')) goto LAB_0208a93a;
                  fVar39 = (float)(int)local_24;
LAB_0208d781:
                  local_20->kind = 1;
                  local_20->integer = (int)local_24;
                  local_20->number = fVar39;
                  goto LAB_02088702;
                }
                if (local_14->table != (void *)0x0) {
                  if (local_18 == (uint *)0x2) {
                    uVar6 = recovered_207f480((int)local_14->table,(int)(local_14 + 1));
                    if ((char)uVar6 != '\0') {
                      local_60 = *(uint **)((int)local_14->table + 8);
                      local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                      goto LAB_0208819c;
                    }
                  }
                  else {
                    local_78c.kind = 0;
                    uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,3,1,&local_78c.kind
                                             );
                    if ((char)uVar6 == '\0') {
                      return '\0';
                    }
                    if (local_78c.kind < 1) {
                      local_78c.kind = 1;
                    }
                    puVar31 = (uint *)(*(int *)((int)local_14->table + 8) + 1);
                    if (puVar31 < (uint)local_78c.kind) {
                      local_78c.kind = (int)puVar31;
                    }
                    uVar6 = recovered_207f4d0((int)local_14->table,(uint)puVar31);
                    if ((char)uVar6 != '\0') {
                      pvVar17 = local_14->table;
                      if ((uint)local_78c.kind <= (uint *)(*(int *)((int)pvVar17 + 8) - 1U)) {
                        recovered_2001c30((void *)(*(int *)((int)pvVar17 + 0x10) +
                                                  local_78c.kind * 0x24),
                                          (void *)(*(int *)((int)pvVar17 + 0x10) + -0x24 +
                                                  local_78c.kind * 0x24),
                                          (*(int *)((int)pvVar17 + 8) - local_78c.kind) * 0x24);
                        iVar24 = *(int *)((int)local_14->table + 0x10);
                        *(undefined4 *)(iVar24 + -0x24 + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -0x20 + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -0x1c + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -0x18 + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -0x14 + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -0x10 + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -0xc + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -8 + local_78c.kind * 0x24) = 0;
                        *(undefined4 *)(iVar24 + -4 + local_78c.kind * 0x24) = 0;
                        pvVar17 = local_14->table;
                      }
                      uVar6 = recovered_207e1d0((uint *)(*(int *)((int)pvVar17 + 0x10) + -0x24 +
                                                        local_78c.kind * 0x24),
                                                (uint *)(local_14 + 2));
                      if ((char)uVar6 != '\0') {
                        local_60 = *(uint **)((int)local_14->table + 8);
                        local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                        goto LAB_0208819c;
                      }
                    }
                  }
LAB_0208a93a:
                  pcVar5 = str_020ce3b4;
                  goto LAB_02088215;
                }
LAB_0208a6fe:
                uVar4 = recovered_207a9c0(name,str_020cd8e9);
                if (uVar4 == '\0') goto LAB_0208aac7;
                if (((char *)((int)local_18 + -3) < (char *)0xfffffffe) || (1 < local_14->kind - 7U)
                   ) {
                  pcVar5 = str_020ce3d2;
                  goto LAB_02088215;
                }
                if (local_14->kind == 7) {
                  if (local_14->table != (void *)0x0) {
                    local_78c.kind = *(uint *)((int)local_14->table + 8);
                    local_24 = (uint *)0x1;
                    if (local_78c.kind == 0) goto LAB_020875cb;
                    if ((local_18 != (uint *)0x2) ||
                       (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,2,1,
                                                  &local_78c.kind), (char)uVar6 != '\0')) {
                      if ((0 < local_78c.kind) &&
                         ((uint)local_78c.kind <= *(uint *)((int)local_14->table + 8))) {
                        recovered_207a480((uint *)local_20,
                                          (uint *)(*(int *)((int)local_14->table + 0x10) + -0x24 +
                                                  local_78c.kind * 0x24));
                        pvVar17 = local_14->table;
                        uVar6 = *(uint *)((int)pvVar17 + 8);
                        if ((uint)local_78c.kind <= uVar6 && uVar6 - local_78c.kind != 0) {
                          recovered_2001c30((void *)(*(int *)((int)pvVar17 + 0x10) + -0x24 +
                                                    local_78c.kind * 0x24),
                                            (void *)(*(int *)((int)pvVar17 + 0x10) +
                                                    local_78c.kind * 0x24),
                                            (uVar6 - local_78c.kind) * 0x24);
                          pvVar17 = local_14->table;
                          uVar6 = *(uint *)((int)pvVar17 + 8);
                        }
                        iVar25 = uVar6 - 1;
                        *(int *)((int)pvVar17 + 8) = iVar25;
                        iVar24 = *(int *)((int)pvVar17 + 0x10);
                        *(undefined4 *)(iVar24 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 4 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 8 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0xc + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x10 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x14 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x18 + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x1c + iVar25 * 0x24) = 0;
                        *(undefined4 *)(iVar24 + 0x20 + iVar25 * 0x24) = 0;
                      }
                      goto LAB_020875cb;
                    }
                    goto LAB_0208ac89;
                  }
                }
                else if (local_14->array != (void *)0x0) {
                  local_60 = (uint *)recovered_20829e0((int)local_14->array,incoming_edx_28);
                  local_24 = (uint *)CONCAT31((int3)((uint)local_60 >> 8),1);
                  if ((int)local_60 < 1) goto LAB_020875cb;
                  local_2c = local_60;
                  if ((local_18 != (uint *)0x2) ||
                     (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,2,1,
                                                (int *)&local_60), (char)uVar6 != '\0')) {
                    if ((int)local_2c < (int)local_60 || (int)local_60 < 1) goto LAB_020875cb;
                    pf_varargs_20044f0__4_((char *)&local_78c,0x20,&DAT_020cd4af,(uint)local_60);
                    uVar6 = recovered_2082a70((int)local_14->array,(char *)&local_78c);
                    if ((-1 < (int)uVar6) &&
                       (uVar6 = recovered_207e1d0((uint *)local_20,
                                                  (uint *)(*(int *)((int)local_14->array + 0xc) + 4
                                                          + uVar6 * 0x28)), (char)uVar6 != '\0')) {
                      puVar31 = local_60;
                      if ((int)local_60 < (int)local_2c) {
                        do {
                          pf_varargs_20044f0__4_
                                    ((char *)&local_78c,0x20,&DAT_020cd4af,(uint)puVar31);
                          puVar31 = (uint *)((int)puVar31 + 1);
                          pf_varargs_20044f0__4_
                                    ((char *)&local_2b4,0x20,&DAT_020cd4af,(uint)puVar31);
                          puVar12 = (uint *)recovered_209b1b0((int)local_14->array,
                                                              (char *)&local_78c,'\x01');
                          puVar14 = (uint *)recovered_209b1b0((int)local_14->array,
                                                              (char *)&local_2b4,'\0');
                          if (((puVar12 == (uint *)0x0) || (puVar14 == (uint *)0x0)) ||
                             (uVar6 = recovered_207e1d0(puVar12,puVar14), (char)uVar6 == '\0'))
                          goto LAB_0208ac75;
                        } while (local_2c != puVar31);
                      }
                      pf_varargs_20044f0__4_((char *)&local_78c,0x20,&DAT_020cd4af,(uint)local_2c);
                      recovered_209a220((int)local_14->array,(char *)&local_78c);
                      goto LAB_020875cb;
                    }
LAB_0208ac75:
                    pcVar5 = str_020ce3f9;
                    goto LAB_0208ac7d;
                  }
                  goto LAB_0208ac89;
                }
LAB_0208aac7:
                uVar4 = recovered_207a9c0(name,str_020cd8f6);
                if (uVar4 != '\0') {
                  local_60 = (uint *)0x0;
                  local_28 = (uint *)0x0;
                  local_30 = (uint *)0x1;
                  local_2b4.kind = 0;
                  local_2b4.integer = 0;
                  local_2b4.number = 0.0;
                  if ((local_18 == (uint *)0x0) || (uVar6 = local_14->kind, 1 < uVar6 - 7)) {
                    recovered_2001710((void *)0x0);
                    pcVar5 = str_020ce407;
                    goto LAB_02088215;
                  }
                  uVar9 = extraout_EDX_16;
                  if (local_18 != (uint *)0x1) {
                    uVar4 = recovered_2085fb0((uint)(local_14 + 1),(uint *)&local_28);
                    if (uVar4 == '\0') {
LAB_0208acfd:
                      recovered_2001710(local_28);
                      recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                      return '\0';
                    }
                    uVar9 = extraout_EDX_17;
                    if ((uint *)0x2 < local_18) {
                      uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,(uint)local_18,2,
                                                (int *)&local_30);
                      uVar9 = extraout_EDX_18;
                      if ((char)uVar6 == '\0') goto LAB_0208acfd;
                    }
                    uVar6 = local_14->kind;
                  }
                  if (uVar6 == 8) {
                    if (local_14->array != (void *)0x0) {
                      iVar25 = recovered_20829e0((int)local_14->array,uVar9);
                      iVar24 = iVar25;
                      if ((uint *)0x3 < local_18) {
                        if ((5 < (uint)local_14[3].kind) ||
                           ((0x26U >> (local_14[3].kind & 0x1fU) & 1) == 0)) goto LAB_0208ae81;
                        iVar24 = local_14[3].integer;
                      }
                      if ((int)local_30 < 1) {
                        local_30 = (uint *)0x1;
                        if (iVar24 < iVar25) goto LAB_0208aedc;
LAB_0208ad66:
                        if (iVar25 < (int)local_30) goto LAB_0208af93;
                      }
                      else {
                        if (iVar25 <= iVar24) goto LAB_0208ad66;
LAB_0208aedc:
                        iVar25 = iVar24;
                        if (iVar24 < (int)local_30) goto LAB_0208af93;
                      }
                      puVar31 = local_30;
                      do {
                        pf_varargs_20044f0__4_((char *)&local_78c,0x20,&DAT_020cd4af,(uint)puVar31);
                        local_18 = (uint *)recovered_2082a70((int)local_14->array,(char *)&local_78c
                                                            );
                        if (-1 < (int)local_18) {
                          if ((local_28 != (uint *)0x0 && (int)local_30 < (int)puVar31) &&
                             (uVar6 = recovered_2086400(&local_2b4.kind,(char *)local_28),
                             (char)uVar6 == '\0')) goto LAB_0208b105;
                          uVar4 = recovered_2085fb0(*(int *)((int)local_14->array + 0xc) + 4 +
                                                    (int)local_18 * 0x28,(uint *)&local_60);
                          if ((uVar4 == '\0') ||
                             (uVar6 = recovered_2086400(&local_2b4.kind,(char *)local_60),
                             (char)uVar6 == '\0')) goto LAB_0208b0f7;
                          recovered_2001710(local_60);
                          local_60 = (uint *)0x0;
                        }
                        puVar31 = (uint *)((int)puVar31 + 1);
                      } while ((uint *)(iVar25 + 1) != puVar31);
                    }
                  }
                  else if ((uVar6 == 7) && (local_14->table != (void *)0x0)) {
                    piVar13 = (int *)((int)local_14->table + 8);
                    bVar36 = local_18 < &DAT_00000004;
                    piVar16 = &local_14[3].integer;
                    if (bVar36) {
                      piVar16 = piVar13;
                    }
                    local_18 = (uint *)*piVar16;
                    if ((!bVar36) &&
                       ((5 < (uint)local_14[3].kind ||
                        ((0x26U >> (local_14[3].kind & 0x1fU) & 1) == 0)))) {
LAB_0208ae81:
                      recovered_2001710(local_28);
                      recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
                      local_2b4.kind = 0;
                      local_2b4.integer = 0;
                      local_2b4.number = 0.0;
                      pcVar5 = str_020ce433;
                      goto LAB_02088215;
                    }
                    if ((int)local_30 < 1) {
                      local_30 = (uint *)0x1;
                    }
                    puVar31 = (uint *)*piVar13;
                    if ((int)puVar31 <= (int)local_18) {
                      local_18 = puVar31;
                    }
                    if ((int)local_30 <= (int)local_18) {
                      local_18 = (uint *)((int)local_18 + 1);
                      iVar24 = (int)local_30 * 0x24 + -0x24;
                      puVar31 = local_30;
                      do {
                        if ((local_28 != (uint *)0x0 && (int)local_30 < (int)puVar31) &&
                           (uVar6 = recovered_2086400(&local_2b4.kind,(char *)local_28),
                           (char)uVar6 == '\0')) goto LAB_0208b105;
                        uVar4 = recovered_2085fb0(*(int *)((int)local_14->table + 0x10) + iVar24,
                                                  (uint *)&local_60);
                        if ((uVar4 == '\0') ||
                           (uVar6 = recovered_2086400(&local_2b4.kind,(char *)local_60),
                           (char)uVar6 == '\0')) goto LAB_0208b0f7;
                        recovered_2001710(local_60);
                        local_60 = (uint *)0x0;
                        puVar31 = (uint *)((int)puVar31 + 1);
                        iVar24 = iVar24 + 0x24;
                      } while (local_18 != puVar31);
                    }
                  }
LAB_0208af93:
                  recovered_2001710(local_28);
                  ppVar15 = local_20;
                  recovered_2043a90((uint *)local_20,incoming_edx_30);
                  ppVar15->kind = 3;
                  pcVar5 = (char *)(uintptr_t)pf_float_bits(local_2b4.number);
                  if ((char *)(uintptr_t)pf_float_bits(local_2b4.number) != (char *)0x0) goto LAB_0208afd3;
                  pcVar5 = recovered_2001650(1);
                  if (pcVar5 == (char *)0x0) {
                    local_20->text = (char *)0x0;
                    goto LAB_0208b11f;
                  }
                  goto LAB_0208afd0;
                }
                uVar4 = recovered_207a9c0(name,str_020cd903);
                if (uVar4 == '\0') goto LAB_0208b158;
                if (((char *)((int)local_18 + -3) < (char *)0xfffffffe) || (1 < local_14->kind - 7U)
                   ) {
                  pcVar5 = str_020ce476;
                  goto LAB_02088215;
                }
                if (local_18 == (uint *)0x2) {
                  pcVar5 = str_020ce49d;
                  goto LAB_02088215;
                }
                if (local_14->kind != 7) {
                  if (local_14->array == (void *)0x0) goto LAB_0208b158;
                  local_24 = (uint *)recovered_20829e0((int)local_14->array,incoming_edx_29);
                  if ((int)local_24 < 2) goto switchD_0208ca6c_caseD_1;
                  puVar31 = recovered_2001650((int)local_24 * 0x24);
                  local_18 = puVar31;
                  if (puVar31 != (uint *)0x0) {
                    local_3c = (uint *)-(int)local_24;
                    uVar6 = 1;
                    puVar12 = extraout_EDX_19;
LAB_0208b031:
                    uVar9 = uVar6;
                    if ((char *)((int)local_3c + uVar9) != (char *)0x1) {
                      *puVar31 = 0;
                      puVar31[1] = 0;
                      puVar31[2] = 0;
                      puVar31[3] = 0;
                      puVar31[4] = 0;
                      puVar31[5] = 0;
                      puVar31[6] = 0;
                      puVar31[7] = 0;
                      puVar31[8] = 0;
                      pf_varargs_20044f0__4_((char *)&local_2b4,0x20,&DAT_020cd4af,uVar9);
                      uVar6 = recovered_2082a70((int)local_14->array,(char *)&local_2b4);
                      puVar12 = extraout_EDX_20;
                      if (-1 < (int)uVar6) goto code_r0x0208b0ab;
                      goto LAB_0208b0d0;
                    }
                    local_88 = pf_bits_double(CONCAT44(PF_PART4(local_88, 4),(char *)((int)local_24 + -1)));
                    local_b4 = local_18 + 9;
                    local_2c = (uint *)0x0;
                    do {
                      puVar31 = (uint *)((int)local_2c + 1);
                      if ((int)puVar31 < (int)local_24) {
                        local_b0 = local_18 + (int)local_2c * 9;
                        local_34 = local_b4;
                        local_2b8 = PF_PART4(local_88, 0);
                        local_2c = puVar31;
LAB_0208b1dc:
                        local_60 = (uint *)0x0;
                        uVar6 = recovered_209b3b0((int *)local_b0,local_34,(uint *)&local_60);
                        puVar31 = local_b0;
                        if ((char)uVar6 != '\0') goto code_r0x0208b203;
                        puVar31 = extraout_EDX_23;
                        puVar12 = local_18;
                        do {
                          recovered_2043a90(puVar12,(uint)puVar31);
                          puVar12 = puVar12 + 9;
                          local_24 = (uint *)((int)local_24 + -1);
                          puVar31 = extraout_EDX_27;
                        } while (local_24 != (uint *)0x0);
                        recovered_2001710(local_18);
                        pcVar5 = str_020ce4db;
                        goto LAB_02088215;
                      }
LAB_0208b245:
                      local_2c = puVar31;
                      local_88 = pf_bits_double(CONCAT44(PF_PART4(local_88, 4),PF_PART4(local_88, 0) + -1));
                      local_b4 = local_b4 + 9;
                    } while (local_2c != local_24);
                    uVar6 = 1;
                    puVar31 = local_18;
                    do {
                      if ((char *)((int)local_3c + uVar6) == (char *)0x1) {
                        puVar31 = local_18;
                        do {
                          recovered_2043a90(puVar31,(uint)puVar12);
                          puVar31 = puVar31 + 9;
                          local_24 = (uint *)((int)local_24 + -1);
                          puVar12 = extraout_EDX_28;
                        } while (local_24 != (uint *)0x0);
                        recovered_2001710(local_18);
                        goto switchD_0208ca6c_caseD_1;
                      }
                      pf_varargs_20044f0__4_((char *)&local_2b4,0x20,&DAT_020cd4af,uVar6);
                      puVar14 = (uint *)recovered_209b1b0((int)local_14->array,(char *)&local_2b4,
                                                          '\x01');
                      puVar12 = extraout_EDX_24;
                      if (puVar14 == (uint *)0x0) break;
                      uVar9 = recovered_207e1d0(puVar14,puVar31);
                      uVar6 = uVar6 + 1;
                      puVar31 = puVar31 + 9;
                      puVar12 = extraout_EDX_25;
                    } while ((char)uVar9 != '\0');
                    puVar31 = local_18;
                    do {
                      recovered_2043a90(puVar31,(uint)puVar12);
                      puVar31 = puVar31 + 9;
                      local_24 = (uint *)((int)local_24 + -1);
                      puVar12 = extraout_EDX_26;
                    } while (local_24 != (uint *)0x0);
                    goto LAB_0208b2cb;
                  }
                  pcVar5 = str_020ce500;
                  goto LAB_02088215;
                }
                pvVar17 = local_14->table;
                if (pvVar17 != (void *)0x0) {
                  puVar31 = *(uint **)((int)pvVar17 + 8);
                  if (puVar31 != (uint *)0x0) {
                    local_18 = (uint *)0x0;
                    local_2c = (uint *)0x24;
                    do {
                      puVar12 = (uint *)((int)local_18 + 1);
                      if (puVar12 < puVar31) {
                        local_34 = (uint *)((int)local_18 * 9);
                        local_24 = local_2c;
                        local_3c = puVar12;
                        local_18 = puVar12;
                        do {
                          local_2b4.kind = 0;
                          uVar6 = recovered_209b3b0((int *)(*(int *)((int)pvVar17 + 0x10) +
                                                           (int)local_34 * 4),
                                                    (uint *)(*(int *)((int)pvVar17 + 0x10) +
                                                            (int)local_24),(uint *)&local_2b4);
                          if ((char)uVar6 == '\0') {
                            pcVar5 = str_020ce4db;
                            goto LAB_02088215;
                          }
                          if (0 < local_2b4.kind) {
                            iVar24 = *(int *)((int)local_14->table + 0x10);
                            piVar16 = (int *)(iVar24 + (int)local_34 * 4);
                            piVar13 = piVar16;
                            ppVar15 = &local_78c;
                            for (iVar25 = 9; iVar25 != 0; iVar25 = iVar25 + -1) {
                              ppVar15->kind = *piVar13;
                              piVar13 = piVar13 + (uint)bVar29 * -2 + 1;
                              ppVar15 = (pf_kernel_value *)
                                        ((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
                            }
                            piVar13 = (int *)(iVar24 + (int)local_24);
                            for (iVar25 = 9; iVar25 != 0; iVar25 = iVar25 + -1) {
                              *piVar16 = *piVar13;
                              piVar13 = piVar13 + (uint)bVar29 * -2 + 1;
                              piVar16 = piVar16 + (uint)bVar29 * -2 + 1;
                            }
                            ppVar15 = &local_78c;
                            piVar16 = (int *)(*(int *)((int)local_14->table + 0x10) + (int)local_24)
                            ;
                            for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                              *piVar16 = ppVar15->kind;
                              ppVar15 = (pf_kernel_value *)
                                        ((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
                              piVar16 = piVar16 + (uint)bVar29 * -2 + 1;
                            }
                          }
                          local_3c = (uint *)((int)local_3c + 1);
                          pvVar17 = local_14->table;
                          puVar31 = *(uint **)((int)pvVar17 + 8);
                          local_24 = local_24 + 9;
                          puVar12 = local_18;
                        } while (local_3c < puVar31);
                      }
                      local_18 = puVar12;
                      local_2c = local_2c + 9;
                    } while (local_18 < puVar31);
                  }
switchD_0208ca6c_caseD_1:
                  ppVar15 = local_14;
LAB_0208860e:
                  uVar6 = recovered_207e1d0((uint *)local_20,(uint *)ppVar15);
                  return (uchar)uVar6;
                }
LAB_0208b158:
                uVar4 = recovered_207a9c0(name,str_020cd90e);
                if (uVar4 != '\0') {
                  context = local_1c;
                  out = local_20;
LAB_020870b3:
                  uVar6 = recovered_208e090(context,name,(uint *)local_14,(int)local_18,(uint *)out)
                  ;
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,str_020c51c8);
                if (uVar4 != '\0') {
                  local_78c.kind = 0;
                  if (local_18 != (uint *)0x0) {
                    uVar4 = recovered_2085fb0((uint)local_14,(uint *)&local_78c);
                    puVar31 = (uint *)local_78c.kind;
                    if (uVar4 != '\0') {
                      pf_varargs_207a2e0__4_(local_1c,name,&DAT_020c5119,local_78c.kind);
                      recovered_2001710((void *)local_78c.kind);
                      return '\0';
                    }
LAB_0208c9d7:
                    recovered_2001710(puVar31);
                    return '\0';
                  }
                  pcVar5 = str_020c51c8;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd915);
                if (uVar4 != '\0') {
                  local_2b4.kind = 0;
                  local_2b4.integer = 0;
                  local_2b4.number = 0.0;
                  local_2b4.text = (char *)0x0;
                  local_2b4.storage = (void *)0x0;
                  local_2b4.flag = 0;
                  local_2b4.table = (void *)0x0;
                  local_2b4.array = (void *)0x0;
                  local_2b4.auxiliary = (void *)0x0;
                  if (local_18 == (uint *)0x0) {
                    pcVar5 = str_020ce522;
                    goto LAB_02088215;
                  }
                  DAT_0223dc1d = 0;
                  DAT_0223dc1c = 0;
                  uVar7 = DAT_0223dc18;
                  iVar24 = DAT_0223dc18;
                  DAT_0223dc18 = iVar24 + 1;
                  uVar7 = DAT_0223dc18;
                  uVar7 = DAT_0223dc18;
                  uVar7 = DAT_0223dc18;
                  ppVar15 = (pf_kernel_value *)0x0;
                  if (local_18 != (uint *)0x1) {
                    ppVar15 = local_14 + 1;
                  }
                  piVar16 = recovered_2085370(local_1c,&local_14->kind,(float *)ppVar15,
                                              (float *)((int)local_18 + -1),(float *)&local_2b4);
                  iVar24 = DAT_0223dc18;
                  if (iVar24 != 0) {
                    DAT_0223dc18 = iVar24 + -1;
                  }
                  bVar26 = DAT_0223dc1c;
                  bVar27 = (bVar26 ^ 1) & (byte)piVar16;
                  local_78c.number = 1.0;
                  if (bVar27 == 0) {
                    local_78c.number = 0.0;
                  }
                  local_78c.kind = 5;
                  local_78c.integer = (int)(uint)bVar27;
                  local_78c.text = (char *)0x0;
                  local_78c.storage = (void *)0x0;
                  local_78c.flag = 0;
                  local_78c.table = (void *)0x0;
                  local_78c.array = (void *)0x0;
                  local_78c.auxiliary = (void *)0x0;
                  local_768 = 0;
                  local_764 = (char *)0x0;
                  local_760 = 0.0;
                  local_75c = 0;
                  local_758 = 0;
                  local_754 = 0;
                  local_750 = 0;
                  local_74c = 0;
                  local_748 = 0;
                  if (((~(byte)piVar16 | bVar26) & 1) == 0) {
                    DAT_0223dc1d = 0;
                    DAT_0223dc1c = 0;
                    if ((uint *)local_2b4.kind == (uint *)0x0) {
                      recovered_2043a90((uint *)&local_2b4,(uint)(uint)bVar27);
                      iVar24 = 1;
                      goto LAB_0208c3ec;
                    }
                    ppVar15 = &local_2b4;
                    puVar31 = &local_768;
                    for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                      *puVar31 = ppVar15->kind;
                      ppVar15 = (pf_kernel_value *)((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
                      puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                    }
                    uVar6 = recovered_20830f0((uint *)local_20,(int)&local_78c,2);
                    local_18 = (uint *)CONCAT31(PF_PART3(local_18, 1),(char)uVar6);
                    recovered_2043a90((uint *)&local_2b4,incoming_edx_34);
LAB_0208b6c2:
                    if ((byte)local_18 != '\0') {
                      return '\x01';
                    }
                  }
                  else {
                    pcVar5 = &DAT_0223dc1d;
                    cVar19 = DAT_0223dc1d;
                    if (cVar19 == '\0') {
                      pcVar5 = str_020ce542;
                    }
                    if ((bVar26 & 1) == 0) {
                      pcVar5 = str_020ce542;
                    }
                    uVar6 = recovered_207e340(&local_768,pcVar5);
                    if ((char)uVar6 != '\0') {
                      uVar6 = recovered_20830f0((uint *)local_20,(int)&local_78c,2);
                      local_18 = (uint *)CONCAT31(PF_PART3(local_18, 1),(char)uVar6);
                      recovered_2043a90((uint *)&local_2b4,incoming_edx_32);
                      recovered_2043a90(&local_768,incoming_edx_33);
                      DAT_0223dc1d = 0;
                      DAT_0223dc1c = 0;
                      goto LAB_0208b6c2;
                    }
                    recovered_2043a90((uint *)&local_2b4,incoming_edx_31);
                    DAT_0223dc1d = 0;
                    DAT_0223dc1c = 0;
                  }
                  pcVar5 = str_020ce54f;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cb03d);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd91b), uVar4 != '\0')
                   ) {
                  local_78c.kind = 0;
                  if (((char *)((int)local_18 + -3) < (char *)0xfffffffe) ||
                     ((local_14->kind != 3 ||
                      (uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,(uint)local_18,0
                                                 ,&local_78c.kind), (char)uVar6 == '\0')))) {
                    pcVar5 = str_020ce579;
                    goto LAB_02088215;
                  }
                  if ((local_18 == (uint *)0x2) && (local_14[1].kind == 3)) {
                    puVar31 = (uint *)local_14[1].text;
                    if ((puVar31 != (uint *)0x0) && ((char)*puVar31 != '\0')) {
                      name = (char *)puVar31;
                    }
                  }
                  puVar31 = (uint *)&DAT_020c5084;
                  if ((uint *)local_78c.kind != (uint *)0x0) {
                    puVar31 = (uint *)local_78c.kind;
                  }
                  puVar12 = (uint *)recovered_2002270((char *)puVar31);
LAB_0208b7ab:
                  uVar6 = recovered_209b4c0((uint *)local_20,(uint)name,(int)puVar31,(uint)puVar12);
                  if ((char)uVar6 != '\0') {
                    return '\x01';
                  }
                  pcVar5 = str_020ce5a6;
LAB_0208bb54:
                  uVar6 = recovered_209b5a0((uint)local_20,pcVar5);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,str_020cd926);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd92f), uVar4 != '\0')
                   ) {
                  local_60 = (uint *)0x0;
                  local_28 = (uint *)0x0;
                  local_30 = (uint *)0x0;
                  if (local_18 != (uint *)0x1) goto LAB_0208d17c;
                  uVar6 = recovered_208e420((int *)local_1c,name,(int)local_14,1,0,(int *)&local_60)
                  ;
                  if ((char)uVar6 == '\0') {
                    return '\0';
                  }
                  uVar6 = recovered_2027f10((int)local_60,(uint *)&local_28,(uint *)&local_30);
                  if ((char)uVar6 == '\0') {
                    puVar31 = (uint *)&DAT_020c5084;
                    if (local_60 != (uint *)0x0) {
                      puVar31 = local_60;
                    }
                    pcVar5 = (char *)&local_78c;
                    pf_varargs_20044f0__4_(pcVar5,0x130,str_020ce5c9,(uint)puVar31);
                    goto LAB_0208bb54;
                  }
                  if ((&DAT_00000004 <= local_30) &&
                     (iVar24 = recovered_2001ff0(local_28,&DAT_020ce5e8,4), iVar24 == 0)) {
                    local_38 = (uint *)0x0;
                    local_64 = 0;
                    local_8c = 0;
                    local_2b4.kind = CONCAT22(PF_PART2(local_2b4.kind, 2),1);
                    local_2b4.integer = 0;
                    local_2b4.number = 0.0;
                    local_2b4.text = (char *)0x0;
                    local_2b4.storage = (void *)0x0;
                    local_2b4.flag = 0;
                    local_2b4.table = (void *)0x0;
                    local_2b4.array = (void *)0x0;
                    local_2b4.auxiliary = (void *)0x0;
                    local_290 = 0;
                    local_28c = 0;
                    local_288 = 0;
                    pcVar5 = (char *)&local_78c;
                    uVar6 = recovered_209b6b0(local_28,local_30,(uint *)&local_2b4,pcVar5,0x80);
                    if ((char)uVar6 == '\0') {
                      recovered_209bc20((ushort *)&local_2b4,incoming_edx_35);
                    }
                    else {
                      uVar6 = recovered_209bd20((int)&local_2b4,(uint *)&local_38,&local_64,
                                                &local_8c,pcVar5,0x80);
                      recovered_209bc20((ushort *)&local_2b4,incoming_edx_36);
                      if ((char)uVar6 == '\0') {
                        recovered_20747c0(local_38,local_64);
                      }
                      else {
                        uVar6 = recovered_209c310((uint *)local_20,(uint)local_60,(int)local_38,
                                                  local_64);
                        recovered_20747c0(local_38,local_64);
                        pcVar5 = str_020ce5a6;
                        if ((char)uVar6 != '\0') {
                          return '\x01';
                        }
                      }
                    }
                    goto LAB_0208bb54;
                  }
                  name = (char *)local_60;
                  puVar12 = local_30;
                  puVar31 = local_28;
                  goto LAB_0208b7ab;
                }
                uVar4 = recovered_207a9c0(name,str_020cd938);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd940), uVar4 != '\0')
                   ) {
                  local_78c.kind = 0;
                  local_78c.integer = 0;
                  local_78c.number = 0.0;
                  local_78c.text = (char *)0x0;
                  local_78c.storage = (void *)0x0;
                  local_78c.flag = 0;
                  local_78c.table = (void *)0x0;
                  local_78c.array = (void *)0x0;
                  local_78c.auxiliary = (void *)0x0;
                  local_2b4.kind = 0;
                  local_2b4.integer = 0;
                  local_2b4.number = 0.0;
                  local_2b4.text = (char *)0x0;
                  local_2b4.storage = (void *)0x0;
                  local_2b4.flag = 0;
                  local_2b4.table = (void *)0x0;
                  local_2b4.array = (void *)0x0;
                  local_2b4.auxiliary = (void *)0x0;
                  uVar4 = recovered_2086bc0(local_1c,str_020cd92f,local_14,(ulong)local_18,
                                            &local_78c);
                  uVar6 = extraout_EDX_29;
                  if (uVar4 == '\0') {
LAB_0208b95b:
                    recovered_2043a90((uint *)&local_78c,uVar6);
                    return '\0';
                  }
                  if ((((local_78c.table != (void *)0x0 && local_78c.kind == 7) &&
                       (*(char *)((int)local_78c.table + 4) == '\x01')) &&
                      (1 < *(uint *)((int)local_78c.table + 8))) &&
                     ((piVar16 = *(int **)((int)local_78c.table + 0x10), *piVar16 == 0 &&
                      (piVar16[9] == 3)))) {
                    pcVar5 = str_020ce5ed;
                    if ((char *)piVar16[0xc] != (char *)0x0) {
                      pcVar5 = (char *)piVar16[0xc];
                    }
                    pf_varargs_207a2e0__4_(local_1c,name,&DAT_020c5119,(uint)pcVar5);
                    uVar6 = extraout_EDX_30;
                    goto LAB_0208b95b;
                  }
                  piVar16 = recovered_2085370(local_1c,&local_78c.kind,(float *)0x0,(float *)0x0,
                                              (float *)&local_2b4);
                  recovered_2043a90((uint *)&local_78c,incoming_edx_37);
                  ppVar15 = local_20;
                  if ((char)piVar16 == '\0') {
                    recovered_2043a90((uint *)&local_2b4,incoming_edx_38);
                    return '\0';
                  }
                  recovered_2043a90((uint *)local_20,incoming_edx_38);
                  ppVar30 = &local_2b4;
                  goto LAB_020882f0;
                }
                uVar4 = recovered_207a9c0(name,str_020cd947);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd956), uVar4 != '\0')
                   ) {
                  if (local_18 == (uint *)0x0) goto LAB_02088702;
                  pcVar5 = str_020ce608;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd965);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x0) {
                    cVar19 = DAT_0223dd1d;
                    if (cVar19 == '\x01') {
                      DAT_0223dd1e = 1;
                    }
                    else {
                      recovered_209c3f0(in_EDX);
                    }
                    goto switchD_0208ca6c_caseD_4;
                  }
                  pcVar5 = str_020ce62c;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd96a);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x1) {
                    uVar4 = recovered_207cf70((uint *)local_20,incoming_edx_39);
                    if (uVar4 == '\0') {
LAB_0208c271:
                      pcVar5 = str_020ce65f;
                    }
                    else {
                      if (local_14->kind == 8) {
                        pvVar17 = local_14->array;
                        if (pvVar17 != (void *)0x0) {
                          if (*(int *)((int)pvVar17 + 4) == 0) {
                            return '\x01';
                          }
                          local_18 = (uint *)0x0;
                          local_24 = (uint *)0x0;
                          while( true ) {
                            local_2b4.kind = 0;
                            local_2b4.integer = 0;
                            local_2b4.number = 0.0;
                            local_2b4.text = (char *)0x0;
                            local_2b4.storage = (void *)0x0;
                            local_2b4.flag = 0;
                            local_2b4.table = (void *)0x0;
                            local_2b4.array = (void *)0x0;
                            local_2b4.auxiliary = (void *)0x0;
                            local_60 = (uint *)0x0;
                            local_5c = 0;
                            local_58 = 0;
                            local_54 = 0;
                            local_50 = 0;
                            local_4c = 0;
                            local_48 = 0;
                            local_44 = 0;
                            local_40 = 0;
                            uVar9 = recovered_207e340((uint *)&local_60,
                                                      *(char **)(*(int *)((int)pvVar17 + 0xc) +
                                                                (int)local_18));
                            uVar6 = extraout_EDX_33;
                            if ((char)uVar9 == '\0') break;
                            ppuVar34 = &local_60;
                            ppVar15 = &local_78c;
                            for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                              ppVar15->kind = (int)*ppuVar34;
                              ppuVar34 = ppuVar34 + (uint)bVar29 * -2 + 1;
                              ppVar15 = (pf_kernel_value *)
                                        ((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
                            }
                            puVar31 = (uint *)(*(int *)((int)local_14->array + 0xc) + 4 +
                                              (int)local_18);
                            puVar12 = &local_768;
                            for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                              *puVar12 = *puVar31;
                              puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                              puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
                            }
                            uVar9 = recovered_20830f0((uint *)&local_2b4,(int)&local_78c,2);
                            uVar6 = extraout_EDX_34;
                            if ((char)uVar9 == '\0') {
LAB_0208c256:
                              recovered_2043a90((uint *)&local_60,uVar6);
                              uVar6 = extraout_EDX_36;
                              goto LAB_0208c25e;
                            }
                            uVar9 = recovered_207f480((int)local_20->table,(int)&local_2b4);
                            uVar6 = incoming_edx_45;
                            if ((char)uVar9 == '\0') goto LAB_0208c256;
                            recovered_2043a90((uint *)&local_60,incoming_edx_45);
                            recovered_2043a90((uint *)&local_2b4,incoming_edx_46);
                            local_24 = (uint *)((int)local_24 + 1);
                            pvVar17 = local_14->array;
                            local_18 = local_18 + 10;
                            if (*(uint **)((int)pvVar17 + 4) <= local_24) {
                              return '\x01';
                            }
                          }
                          goto LAB_0208c269;
                        }
                      }
                      else if ((local_14->kind == 7) &&
                              (pvVar17 = local_14->table, pvVar17 != (void *)0x0)) {
                        if (*(int *)((int)pvVar17 + 8) == 0) {
                          return '\x01';
                        }
                        local_24 = (uint *)0x0;
                        local_18 = (uint *)0x0;
                        while( true ) {
                          local_2b4.kind = 0;
                          local_2b4.integer = 0;
                          local_2b4.number = 0.0;
                          local_2b4.text = (char *)0x0;
                          local_2b4.storage = (void *)0x0;
                          local_2b4.flag = 0;
                          local_2b4.table = (void *)0x0;
                          local_2b4.array = (void *)0x0;
                          local_2b4.auxiliary = (void *)0x0;
                          local_78c.integer = (int)local_18 + 1;
                          local_78c.number = (float)local_78c.integer;
                          local_78c.kind = 1;
                          local_78c.text = (char *)0x0;
                          local_78c.storage = (void *)0x0;
                          local_78c.flag = 0;
                          local_78c.table = (void *)0x0;
                          local_78c.array = (void *)0x0;
                          local_78c.auxiliary = (void *)0x0;
                          puVar31 = (uint *)(*(int *)((int)pvVar17 + 0x10) + (int)local_24);
                          puVar12 = &local_768;
                          local_2ec = (uint *)local_78c.integer;
                          local_18 = (uint *)local_78c.integer;
                          for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                            *puVar12 = *puVar31;
                            puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                            puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
                          }
                          uVar9 = recovered_20830f0((uint *)&local_2b4,(int)&local_78c,2);
                          uVar6 = extraout_EDX_31;
                          if ((char)uVar9 == '\0') break;
                          uVar9 = recovered_207f480((int)local_20->table,(int)&local_2b4);
                          uVar6 = incoming_edx_41;
                          if ((char)uVar9 == '\0') break;
                          recovered_2043a90((uint *)&local_2b4,incoming_edx_41);
                          pvVar17 = local_14->table;
                          local_24 = local_24 + 9;
                          if (*(uint **)((int)pvVar17 + 8) <= local_18) {
                            return '\x01';
                          }
                        }
LAB_0208c25e:
                        recovered_2043a90((uint *)&local_2b4,uVar6);
                        uVar6 = extraout_EDX_37;
LAB_0208c269:
                        recovered_2043a90((uint *)local_20,uVar6);
                        goto LAB_0208c271;
                      }
                      recovered_2043a90((uint *)local_20,incoming_edx_40);
                      pcVar5 = str_020ce682;
                    }
                  }
                  else {
                    pcVar5 = str_020ce646;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd970);
                if (uVar4 != '\0') {
                  if (local_18 != (uint *)0x1) {
                    pcVar5 = str_020ce6a2;
                    goto LAB_02088215;
                  }
                  uVar4 = recovered_207cf70((uint *)local_20,incoming_edx_42);
                  if (uVar4 == '\0') {
LAB_0208c421:
                    pcVar5 = str_020ce6bc;
                  }
                  else {
                    if (local_14->kind == 8) {
                      if (local_14->array != (void *)0x0) {
                        iVar24 = recovered_20829e0((int)local_14->array,incoming_edx_43);
                        if (iVar24 < 1) {
                          return '\x01';
                        }
                        local_24 = (uint *)-iVar24;
                        local_18 = (uint *)0x1;
                        do {
                          local_2b4.kind = 0;
                          local_2b4.integer = 0;
                          local_2b4.number = 0.0;
                          local_2b4.text = (char *)0x0;
                          local_2b4.storage = (void *)0x0;
                          local_2b4.flag = 0;
                          local_2b4.table = (void *)0x0;
                          local_2b4.array = (void *)0x0;
                          local_2b4.auxiliary = (void *)0x0;
                          pf_varargs_20044f0__4_
                                    ((char *)&local_60,0x20,&DAT_020cd4af,(uint)local_18);
                          uVar6 = recovered_2082a70((int)local_14->array,(char *)&local_60);
                          if (-1 < (int)uVar6) {
                            local_2f4 = local_18;
                            local_78c.number = (float)(int)local_18;
                            local_78c.kind = 1;
                            local_78c.integer = (int)local_18;
                            local_78c.text = (char *)0x0;
                            local_78c.storage = (void *)0x0;
                            local_78c.flag = 0;
                            local_78c.table = (void *)0x0;
                            local_78c.array = (void *)0x0;
                            local_78c.auxiliary = (void *)0x0;
                            puVar31 = (uint *)(*(int *)((int)local_14->array + 0xc) + 4 +
                                              uVar6 * 0x28);
                            puVar12 = &local_768;
                            for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                              *puVar12 = *puVar31;
                              puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                              puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
                            }
                            uVar9 = recovered_20830f0((uint *)&local_2b4,(int)&local_78c,2);
                            uVar6 = extraout_EDX_35;
                            if ((char)uVar9 == '\0') goto LAB_0208c40e;
                            uVar9 = recovered_207f480((int)local_20->table,(int)&local_2b4);
                            uVar6 = incoming_edx_47;
                            if ((char)uVar9 == '\0') goto LAB_0208c40e;
                            recovered_2043a90((uint *)&local_2b4,incoming_edx_47);
                          }
                          pcVar5 = (char *)((int)local_24 + 1) + (int)local_18;
                          local_18 = (uint *)((int)local_18 + 1);
                          if (pcVar5 == (char *)0x1) {
                            return '\x01';
                          }
                        } while( true );
                      }
                    }
                    else if ((local_14->kind == 7) &&
                            (pvVar17 = local_14->table, pvVar17 != (void *)0x0)) {
                      if (*(int *)((int)pvVar17 + 8) == 0) {
                        return '\x01';
                      }
                      local_24 = (uint *)0x0;
                      local_18 = (uint *)0x0;
                      while( true ) {
                        local_2b4.kind = 0;
                        local_2b4.integer = 0;
                        local_2b4.number = 0.0;
                        local_2b4.text = (char *)0x0;
                        local_2b4.storage = (void *)0x0;
                        local_2b4.flag = 0;
                        local_2b4.table = (void *)0x0;
                        local_2b4.array = (void *)0x0;
                        local_2b4.auxiliary = (void *)0x0;
                        local_78c.integer = (int)local_18 + 1;
                        local_78c.number = (float)local_78c.integer;
                        local_78c.kind = 1;
                        local_78c.text = (char *)0x0;
                        local_78c.storage = (void *)0x0;
                        local_78c.flag = 0;
                        local_78c.table = (void *)0x0;
                        local_78c.array = (void *)0x0;
                        local_78c.auxiliary = (void *)0x0;
                        puVar31 = (uint *)(*(int *)((int)pvVar17 + 0x10) + (int)local_24);
                        puVar12 = &local_768;
                        local_2f0 = (uint *)local_78c.integer;
                        local_18 = (uint *)local_78c.integer;
                        for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                          *puVar12 = *puVar31;
                          puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                          puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
                        }
                        uVar9 = recovered_20830f0((uint *)&local_2b4,(int)&local_78c,2);
                        uVar6 = extraout_EDX_32;
                        if ((char)uVar9 == '\0') break;
                        uVar9 = recovered_207f480((int)local_20->table,(int)&local_2b4);
                        uVar6 = incoming_edx_44;
                        if ((char)uVar9 == '\0') break;
                        recovered_2043a90((uint *)&local_2b4,incoming_edx_44);
                        pvVar17 = local_14->table;
                        local_24 = local_24 + 9;
                        if (*(uint **)((int)pvVar17 + 8) <= local_18) {
                          return '\x01';
                        }
                      }
LAB_0208c40e:
                      recovered_2043a90((uint *)&local_2b4,uVar6);
                      recovered_2043a90((uint *)local_20,incoming_edx_48);
                      goto LAB_0208c421;
                    }
                    recovered_2043a90((uint *)local_20,incoming_edx_43);
                    pcVar5 = str_020ce6e0;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd977);
                if (uVar4 != '\0') {
                  if ((char *)((int)local_18 + -3) < (char *)0xfffffffe) {
                    pcVar5 = str_020ce701;
                    goto LAB_02088215;
                  }
                  if (local_14->kind == 8) {
                    pvVar17 = local_14->array;
                    if (pvVar17 == (void *)0x0) goto LAB_0208c6ab;
                    local_60 = (uint *)0x0;
                    local_2b4.kind = 0;
                    local_2b4.integer = 0;
                    local_2b4.number = 0.0;
                    local_2b4.text = (char *)0x0;
                    local_2b4.storage = (void *)0x0;
                    local_2b4.flag = 0;
                    local_2b4.table = (void *)0x0;
                    local_2b4.array = (void *)0x0;
                    local_2b4.auxiliary = (void *)0x0;
                    uVar6 = 0;
                    ppVar15 = extraout_ECX_01;
                    if ((local_18 == (uint *)0x2) && (ppVar15 = local_14, local_14[1].kind != 0)) {
                      uVar4 = recovered_2085e30((uint *)(local_14 + 1),(uint *)&local_60);
                      if (uVar4 != '\0') {
                        uVar6 = recovered_2082a70((int)local_14->array,(char *)local_60);
                        recovered_2001710(local_60);
                        if ((int)uVar6 < 0) goto LAB_0208c663;
                        uVar6 = uVar6 + 1;
                        pvVar17 = local_14->array;
                        ppVar15 = extraout_ECX_02;
                        goto LAB_0208c5da;
                      }
                      recovered_2001710(local_60);
                    }
                    else {
LAB_0208c5da:
                      local_24 = (uint *)CONCAT31((int3)((uint)ppVar15 >> 8),1);
                      if (*(uint *)((int)pvVar17 + 4) <= uVar6) goto LAB_020875cb;
                      local_18 = (uint *)(uVar6 * 5);
                      uVar6 = recovered_207e340((uint *)&local_2b4,
                                                *(char **)(*(int *)((int)pvVar17 + 0xc) +
                                                          uVar6 * 0x28));
                      if ((char)uVar6 == '\0') {
                        recovered_2043a90((uint *)&local_2b4,incoming_edx_49);
                      }
                      else {
                        ppVar15 = &local_2b4;
                        ppVar30 = &local_78c;
                        for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                          ppVar30->kind = ppVar15->kind;
                          ppVar15 = (pf_kernel_value *)((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
                          ppVar30 = (pf_kernel_value *)((int)ppVar30 + ((uint)bVar29 * -2 + 1) * 4);
                        }
                        puVar31 = (uint *)(*(int *)((int)local_14->array + 0xc) + 4 +
                                          (int)local_18 * 8);
                        puVar12 = &local_768;
                        for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                          *puVar12 = *puVar31;
                          puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                          puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
                        }
                        uVar6 = recovered_20830f0((uint *)local_20,(int)&local_78c,2);
                        local_18 = (uint *)CONCAT31(PF_PART3(local_18, 1),(char)uVar6);
                        recovered_2043a90((uint *)&local_2b4,incoming_edx_50);
                        if ((byte)local_18 != '\0') goto LAB_020875cb;
                      }
                      pf_varargs_207a2e0___(local_1c,name,str_020ce71f);
                    }
                    local_24 = (uint *)0x0;
                    goto LAB_020875cb;
                  }
                  if ((local_14->kind != 7) || (pvVar17 = local_14->table, pvVar17 == (void *)0x0))
                  {
LAB_0208c6ab:
                    pcVar5 = str_020ce748;
                    goto LAB_02088215;
                  }
                  local_78c.integer = 1;
                  if ((local_18 == (uint *)0x2) && (local_14[1].kind != 0)) {
                    if (local_14[1].kind != 1) {
                      return '\x01';
                    }
                    if (local_14[1].integer < 0) {
                      return '\x01';
                    }
                    local_78c.integer = local_14[1].integer + 1;
                  }
                  if (*(uint **)((int)pvVar17 + 8) < (uint)local_78c.integer) {
                    return '\x01';
                  }
                  local_78c.number = (float)local_78c.integer;
                  local_78c.kind = 1;
                  local_78c.text = (char *)0x0;
                  local_78c.storage = (void *)0x0;
                  local_78c.flag = 0;
                  local_78c.table = (void *)0x0;
                  local_78c.array = (void *)0x0;
                  local_78c.auxiliary = (void *)0x0;
                  puVar31 = (uint *)(*(int *)((int)pvVar17 + 0x10) + -0x24 +
                                    local_78c.integer * 0x24);
                  puVar12 = &local_768;
                  local_2f8 = (uint *)local_78c.integer;
                  for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
                    *puVar12 = *puVar31;
                    puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
                    puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
                  }
                  goto LAB_0208c3de;
                }
                uVar4 = recovered_207a9c0(name,str_020cd97c);
                if (uVar4 != '\0') {
                  if ((local_18 < (uint *)0x2) || (local_14->kind != 1)) {
                    pcVar5 = str_020ce767;
                  }
                  else {
                    puVar31 = (uint *)local_14->integer;
                    if (0 < (int)puVar31) {
                      if (((local_18 == (uint *)0x2) && (local_14[1].kind == 7)) &&
                         (pvVar17 = local_14[1].table, pvVar17 != (void *)0x0)) {
                        puVar12 = (uint *)((int)puVar31 + -1);
                        puVar14 = *(uint **)((int)pvVar17 + 8);
                        iVar24 = (int)puVar14 - (int)puVar12;
                        if (puVar14 < puVar12 || iVar24 == 0) {
                          return '\x01';
                        }
                        ppVar15 = (pf_kernel_value *)
                                  ((int)puVar12 * 0x24 + *(int *)((int)pvVar17 + 0x10));
                        if (puVar31 != puVar14) goto LAB_0208c50d;
                      }
                      else {
                        iVar24 = (int)local_18 - (int)puVar31;
                        if (local_18 < puVar31 || iVar24 == 0) {
                          return '\x01';
                        }
                        ppVar15 = local_14 + (int)puVar31;
                        if ((uint *)((int)puVar31 + 1) != local_18) {
LAB_0208c50d:
                          uVar6 = recovered_20830f0((uint *)local_20,(int)ppVar15,iVar24);
                          return (uchar)uVar6;
                        }
                      }
                      goto LAB_0208832c;
                    }
                    pcVar5 = str_020ce792;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd983);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd989), uVar4 != '\0')
                   ) {
                  local_2b4.kind = 0;
                  if (local_18 != (uint *)0x1) goto LAB_0208d17c;
                  uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,1,0,&local_2b4.kind);
                  if ((char)uVar6 == '\0') {
                    return '\0';
                  }
                  if (-1 < local_2b4.kind) {
                    if ((uint *)local_2b4.kind != (uint *)0x0) {
                      puVar31 = (uint *)0x0;
                      do {
                        iVar24 = 0;
                        do {
                          iVar24 = iVar24 + 1;
                        } while (iVar24 != 6000);
                        puVar31 = (uint *)((int)puVar31 + 1);
                      } while (puVar31 != (uint *)local_2b4.kind);
                    }
                    goto LAB_020886eb;
                  }
                  pcVar5 = str_020ce7ac;
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd98f);
                if (uVar4 != '\0') {
                  lVar38 = recovered_209c890();
                  recovered_209c560((uint)lVar38,(uint)((ulonglong)lVar38 >> 0x20),
                                    (char *)&local_78c);
                  out = local_20;
LAB_02087ae9:
                  uVar6 = recovered_207e340((uint *)out,(char *)&local_78c);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020cd994);
                if (uVar4 != '\0') {
                  uVar6 = recovered_209c920((uint *)local_20,incoming_edx_51);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,&DAT_020c547f);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x0) {
                    recovered_209c9c0();
                    recovered_2027720(in_CL_00);
                    goto LAB_020886eb;
                  }
                  goto LAB_02087fbf;
                }
                uVar4 = recovered_207a9c0(name,str_020cd998);
                if (uVar4 != '\0') {
                  if (local_18 == (uint *)0x0) {
                    uVar6 = recovered_20081a0();
                    uVar7 = Ram0223dd20;
                    uVar7 = Ram0223dd20;
                    iVar24 = Ram0223dd20;
                    local_60 = (uint *)((uVar6 - iVar24) * 0x37);
                    local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                    goto LAB_0208819c;
                  }
                  goto LAB_02087fbf;
                }
                uVar4 = recovered_207a9c0(name,str_020cd9a2);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd9a9), uVar4 != '\0')
                   ) {
                  if (local_18 == (uint *)0x2) {
                    local_78c.kind = 0;
                    local_2b4.kind = 0;
                    uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,2,0,&local_78c.kind
                                             );
                    if ((char)uVar6 == '\0') {
                      return '\0';
                    }
                    uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,2,1,&local_2b4.kind
                                             );
                    if ((char)uVar6 == '\0') {
                      return '\0';
                    }
                    if (local_78c.kind <= local_2b4.kind) {
                      iVar24 = DAT_020de324;
                      uVar6 = iVar24 * 0x19660d + 0x3c6ef35f;
                      DAT_020de324 = uVar6;
                      iVar24 = uVar6 % (uint)(local_2b4.kind + (1 - local_78c.kind)) +
                               local_78c.kind;
LAB_0208ca0c:
                      local_20->kind = 1;
                      local_20->integer = iVar24;
                      local_20->number = (float)iVar24;
                      goto LAB_02088702;
                    }
                    pcVar5 = str_020ce7ee;
                  }
                  else if (local_18 == (uint *)0x1) {
                    local_78c.kind = 0;
                    uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,1,0,&local_78c.kind
                                             );
                    if ((char)uVar6 == '\0') {
                      return '\0';
                    }
                    if (0 < local_78c.kind) {
                      iVar24 = DAT_020de324;
                      uVar6 = iVar24 * 0x19660d + 0x3c6ef35f;
                      DAT_020de324 = uVar6;
                      iVar24 = uVar6 % (uint)local_78c.kind + 1;
                      goto LAB_0208ca0c;
                    }
                    pcVar5 = str_020ce7d2;
                  }
                  else {
                    if (local_18 == (uint *)0x0) {
                      iVar24 = DAT_020de324;
                      uVar6 = iVar24 * 0x19660d + 0x3c6ef35f;
                      DAT_020de324 = uVar6;
                      local_2b4.kind = (int)pf_float_bits((float)(((float)uVar6 * _DAT_020c5058)));
                      local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                      goto LAB_0208d80b;
                    }
                    pcVar5 = str_020ce811;
                  }
                  goto LAB_02088215;
                }
                uVar4 = recovered_207a9c0(name,str_020cd9b5);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd9be), uVar4 != '\0')
                   ) {
                  local_78c.kind = 0;
                  if (local_18 == (uint *)0x1) {
                    uVar4 = recovered_2085fb0((uint)local_14,(uint *)&local_78c);
                    puVar31 = (uint *)local_78c.kind;
                    if (uVar4 != '\0') {
                      local_20->kind = 3;
                      local_20->integer = 0;
                      local_20->text = (char *)local_78c.kind;
                      return '\x01';
                    }
                  }
                  else {
                    pf_varargs_207a2e0__4__4__4_(local_1c,name,str_020cea9b,(uint)name,1,0x20c5084);
                    puVar31 = (uint *)0x0;
                  }
                  goto LAB_0208c9d7;
                }
                uVar4 = recovered_207a9c0(name,str_020cd9c7);
                if ((uVar4 != '\0') || (uVar4 = recovered_207a9c0(name,str_020cd9d0), uVar4 != '\0')
                   ) {
                  local_2b4.kind = 0;
                  local_60 = (uint *)0x0;
                  if ((char *)((int)local_18 + -3) < (char *)0xfffffffe) {
                    pcVar5 = str_020ce835;
                    goto LAB_02088215;
                  }
                  switch((uintptr_t)(local_14->kind)) {
                  case 1:
                  case 2:
                  case 6:
                    goto switchD_0208ca6c_caseD_1;
                  case 3:
                    goto switchD_0208ca6c_caseD_3;
                  default:
switchD_0208ca6c_caseD_4:
                    local_20->kind = 0;
                    goto LAB_020886f4;
                  case 5:
                    bVar36 = local_14->integer != 0;
                    local_60 = (uint *)(uint)bVar36;
                    local_2b4.kind = (int)(uint *)0x3f800000;
                    if (!bVar36) {
                      local_2b4.kind = (int)(uint *)0x0;
                    }
                    goto LAB_0208819c;
                  }
                }
                uVar4 = recovered_207a9c0(name,str_020cd9d9);
                if ((uVar4 != '\0') ||
                   (uVar4 = recovered_207a9c0(name,&DAT_020cd9e0), uVar4 != '\0')) {
                  context = local_1c;
                  out = local_20;
LAB_020872c2:
                  uVar6 = recovered_208e1f0(context,name,&local_14->kind,(int)local_18,(uint *)out);
                  return (uchar)uVar6;
                }
                uVar4 = recovered_207a9c0(name,str_020cd9e5);
                if (uVar4 == '\0') {
                  uVar4 = recovered_207a9c0(name,str_020cd9f0);
                  if (uVar4 != '\0') {
                    if (local_18 == (uint *)0x1) {
                      if (local_14 == (pf_kernel_value *)0x0) {
                        return '\0';
                      }
                      uVar6 = local_14->kind;
                      if ((uVar6 == 1) || (uVar6 == 5)) {
                        local_330 = local_14->integer;
                        local_18 = (uint *)(uintptr_t)pf_float_bits((float)local_330);
                      }
                      else {
                        if (uVar6 != 2) {
                          return '\0';
                        }
                        local_18 = (uint *)(uintptr_t)pf_float_bits(local_14->number);
                      }
                      fVar40 = recovered_20031d0(pf_bits_float((uintptr_t)local_18));
                      fVar39 = fVar40 + 1.0;
                      if (pf_bits_float((uintptr_t)local_18) <= fVar40) {
                        fVar39 = fVar40;
                      }
                      local_60 = (uint *)(int)ROUND(fVar39);
                      local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                      goto LAB_0208819c;
                    }
                    goto LAB_0208d17c;
                  }
                  uVar4 = recovered_207a9c0(name,str_020cd9fa);
                  if (uVar4 == '\0') {
                    uVar4 = recovered_207a9c0(name,str_020cda03);
                    if ((uVar4 != '\0') ||
                       (uVar4 = recovered_207a9c0(name,str_020cda0c), uVar4 != '\0')) {
                      local_78c.kind = 0;
                      local_78c.integer = 0;
                      local_78c.number = 0.0;
                      local_78c.text = (char *)0x0;
                      local_78c.storage = (void *)0x0;
                      local_78c.flag = 0;
                      local_78c.table = (void *)0x0;
                      local_78c.array = (void *)0x0;
                      local_78c.auxiliary = (void *)0x0;
                      uVar4 = recovered_207a9c0(name,str_020cda0c);
                      local_24 = (uint *)CONCAT31(PF_PART3(local_24, 1),uVar4);
                      if (local_18 == (uint *)0x0) {
                        pcVar5 = str_020ce863;
                      }
                      else {
                        uVar6 = recovered_207e1d0((uint *)&local_78c,(uint *)local_14);
                        if ((char)uVar6 != '\0') {
                          uVar6 = extraout_EDX_38;
                          if (local_18 != (uint *)0x1) {
                            local_18 = (uint *)((int)local_18 + -1);
                            local_14 = local_14 + 1;
                            do {
                              local_2b4.kind = 0;
                              uVar6 = recovered_209b3b0(&local_14->kind,(uint *)&local_78c,
                                                        (uint *)&local_2b4);
                              if ((char)uVar6 == '\0') {
                                pcVar5 = str_020ce8a3;
                                uVar6 = extraout_EDX_39;
LAB_0208d1ad:
                                recovered_2043a90((uint *)&local_78c,uVar6);
                                goto LAB_02088215;
                              }
                              bVar36 = local_2b4.kind < 1;
                              if ((char)local_24 == '\0') {
                                bVar36 = -1 < local_2b4.kind;
                              }
                              uVar6 = extraout_EDX_39;
                              if (!bVar36) {
                                uVar9 = recovered_207e1d0((uint *)&local_78c,(uint *)local_14);
                                uVar6 = extraout_EDX_40;
                                if ((char)uVar9 == '\0') {
                                  pcVar5 = str_020ce882;
                                  goto LAB_0208d1ad;
                                }
                              }
                              local_14 = local_14 + 1;
                              local_18 = (uint *)((int)local_18 + -1);
                            } while (local_18 != (uint *)0x0);
                            local_18 = (uint *)0x0;
                          }
                          goto LAB_020882e0;
                        }
                        pcVar5 = str_020ce882;
                      }
                      goto LAB_02088215;
                    }
                    uVar4 = recovered_207a9c0(name,str_020cda15);
                    local_24 = (uint *)CONCAT31(PF_PART3(local_24, 1),uVar4);
                    if (((uVar4 != '\0') ||
                        (uVar4 = recovered_207a9c0(name,str_020cda1e), uVar4 != '\0')) ||
                       (uVar4 = recovered_207a9c0(name,str_020cda27), uVar4 != '\0')) {
                      if (local_18 == (uint *)0x1) {
                        if (local_14 == (pf_kernel_value *)0x0) {
                          return '\0';
                        }
                        uVar6 = local_14->kind;
                        if (5 < uVar6) {
                          return '\0';
                        }
                        if ((0x26U >> (uVar6 & 0x1f) & 1) == 0) {
                          return '\0';
                        }
                        if ((char)local_24 == '\0') {
                          uVar4 = recovered_207a9c0(name,str_020cda1e);
                          fVar39 = 0.0;
                          if ((uVar6 == 1) || (uVar6 == 5)) {
                            local_34c = local_14->integer;
                            fVar39 = (float)local_34c;
                          }
                          else if (uVar6 == 2) {
                            fVar39 = local_14->number;
                          }
                          if (uVar4 == '\0') {
                            local_2b4.kind = (int)pf_float_bits((float)(((fVar39 * _DAT_020c504c) / _DAT_020c5050)));
                            local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                          }
                          else {
                            dVar41 = recovered_209ed60(fVar39);
                            local_2b4.kind = (int)pf_float_bits((float)((float)dVar41));
                            local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                          }
                        }
                        else {
                          fVar39 = 0.0;
                          if ((uVar6 == 1) || (uVar6 == 5)) {
                            local_340 = local_14->integer;
                            fVar39 = (float)local_340;
                          }
                          else if (uVar6 == 2) {
                            fVar39 = local_14->number;
                          }
                          dVar41 = recovered_209ecc0(fVar39);
                          local_2b4.kind = (int)pf_float_bits((float)((float)dVar41));
                          local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                        }
                        goto LAB_0208d80b;
                      }
                      goto LAB_0208d17c;
                    }
                    uVar4 = recovered_207a9c0(name,str_020cda30);
                    ppVar15 = local_14;
                    if (uVar4 == '\0') {
                      uVar4 = recovered_207a9c0(name,str_020cda39);
                      ppVar15 = local_14;
                      if (uVar4 == '\0') {
                        uVar4 = recovered_207a9c0(name,str_020cda43);
                        if ((uVar4 == '\0') &&
                           (uVar4 = recovered_207a9c0(name,str_020cda53), uVar4 == '\0')) {
                          uVar4 = recovered_207a9c0(name,str_020cda63);
                          if (uVar4 == '\0') {
                            uVar4 = recovered_207a9c0(name,str_020cda6c);
                            if (uVar4 == '\0') {
                              uVar4 = recovered_207a9c0(name,str_020cda78);
                              if (uVar4 == '\0') {
                                uVar4 = recovered_207a9c0(name,str_020cda81);
                                if (uVar4 == '\0') {
                                  uVar4 = recovered_207a9c0(name,str_020cda89);
                                  if (uVar4 != '\0') {
                                    cVar19 = '\0';
LAB_0208d85f:
                                    uVar4 = recovered_209ef80((int *)local_1c,name,&local_14->kind,
                                                              (int)local_18,(uint *)local_20,cVar19)
                                    ;
                                    return uVar4;
                                  }
                                  uVar4 = recovered_207a9c0(name,str_020cda91);
                                  if (uVar4 != '\0') {
                                    cVar19 = '\x01';
                                    goto LAB_0208d85f;
                                  }
                                  uVar4 = recovered_207a9c0(name,str_020cda9a);
                                  if (uVar4 != '\0') {
                                    uVar6 = recovered_209f3f0((int *)local_1c,name,&local_14->kind,
                                                              (uint)local_18,(uint *)local_20);
                                    return (uchar)uVar6;
                                  }
                                  uVar4 = recovered_207a9c0(name,str_020cdaa9);
                                  if (uVar4 != '\0') {
                                    uVar6 = recovered_209f600((int *)local_1c,name,&local_14->kind,
                                                              (uint)local_18,(uint *)local_20);
                                    return (uchar)uVar6;
                                  }
                                  uVar4 = recovered_207a9c0(name,str_020cdab9);
                                  if (uVar4 != '\0') {
                                    uVar6 = recovered_209f7b0((int *)local_1c,name,&local_14->kind,
                                                              (int)local_18,(uint *)local_20);
                                    return (uchar)uVar6;
                                  }
                                  pcVar5 = str_020cea3e;
                                }
                                else {
                                  if (local_18 == (uint *)0x0) {
                                    lVar38 = recovered_209c890();
                                    local_60 = (uint *)lVar38;
                                    local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                                    goto LAB_0208819c;
                                  }
                                  pcVar5 = str_020cea21;
                                }
                              }
                              else {
                                if (local_18 == (uint *)0x0) {
                                  uVar6 = recovered_20081a0();
                                  uVar7 = Ram0223dd20;
                                  uVar7 = Ram0223dd20;
                                  iVar24 = Ram0223dd20;
                                  local_2b4.kind = (int)pf_float_bits((float)(((float)(uVar6 - iVar24) / _DAT_020c5048)));
                                  local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                                  goto LAB_0208d80b;
                                }
                                pcVar5 = str_020cea03;
                              }
                            }
                            else {
                              local_78c.kind = 0;
                              local_2b4.kind = 1;
                              if (((((uint)local_18 & 0xfffffffe) == 2) && (local_14->kind == 3)) &&
                                 (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,
                                                            (uint)local_18,1,&local_78c.kind),
                                 (char)uVar6 != '\0')) {
                                if ((local_18 == (uint *)0x3) &&
                                   (uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,3,2
                                                              ,&local_2b4.kind), (char)uVar6 == '\0'
                                   )) {
                                  return '\0';
                                }
                                if ((uint *)local_78c.kind != (uint *)0x0) {
                                  local_24 = (uint *)local_2b4.kind;
                                  if (local_2b4.kind < 1) {
                                    local_24 = (uint *)0x1;
                                  }
                                  pcVar5 = &DAT_020c5084;
                                  if (local_14->text != (char *)0x0) {
                                    pcVar5 = local_14->text;
                                  }
                                  bVar29 = ((char *)((int)local_24 + -1))[(int)pcVar5];
                                  if (bVar29 != 0) {
                                    puVar31 = (uint *)0x0;
                                    do {
                                      if ((!SBORROW1('\0',bVar29 & 0xc0)) &&
                                         (puVar31 = (uint *)((int)puVar31 + 1),
                                         puVar31 == (uint *)local_78c.kind)) {
                                        fVar39 = (float)(int)local_24;
                                        goto LAB_0208d781;
                                      }
                                      bVar29 = pcVar5[(int)local_24];
                                      local_24 = (uint *)((int)local_24 + 1);
                                    } while (bVar29 != 0);
                                  }
                                }
                                goto switchD_0208ca6c_caseD_4;
                              }
                              pcVar5 = str_020ce9d5;
                            }
                          }
                          else {
                            if (local_18 == (uint *)0x1) {
                              if (local_14->kind == 3) {
                                pbVar18 = &DAT_020c5084;
                                if ((byte *)local_14->text != (byte *)0x0) {
                                  pbVar18 = (byte *)local_14->text;
                                }
                                bVar29 = *pbVar18;
                                if (bVar29 == 0) {
                                  local_24 = (uint *)0x0;
                                }
                                else {
                                  local_24 = (uint *)0x0;
                                  do {
                                    pbVar18 = pbVar18 + 1;
                                    local_24 = (uint *)((int)local_24 +
                                                       (uint)!SBORROW1('\0',bVar29 & 0xc0));
                                    bVar29 = *pbVar18;
                                  } while (bVar29 != 0);
                                }
                                fVar39 = (float)(int)local_24;
                                goto LAB_0208d781;
                              }
                            }
                            else {
                              pf_varargs_207a2e0__4__4__4_
                                        (local_1c,name,str_020cea9b,(uint)name,1,0x20c5084);
                            }
                            pcVar5 = str_020ce9b2;
                          }
                        }
                        else {
                          local_78c.kind = 0;
                          if (local_18 == (uint *)0x1) {
                            uVar6 = recovered_209a070((int *)local_1c,name,(int)local_14,1,0,
                                                      &local_78c.kind);
                            if ((char)uVar6 == '\0') {
                              return '\0';
                            }
                            DAT_020de324 = local_78c.kind;
                            goto switchD_0208ca6c_caseD_4;
                          }
                          pcVar5 = str_020ce994;
                        }
                      }
                      else if ((((local_18 == (uint *)0x0) ||
                                (fVar39 = recovered_207e0c0(&local_14->kind,incoming_edx_53),
                                ppVar15 == (pf_kernel_value *)0x0 || local_18 != (uint *)0x1)) ||
                               (5 < (uint)local_14->kind)) ||
                              ((0x26U >> (local_14->kind & 0x1fU) & 1) == 0)) {
                        pcVar5 = str_020ce948;
                      }
                      else {
                        if (0.0 <= fVar39) {
                          dVar41 = recovered_209eee0(fVar39);
                          local_2b4.kind = (int)pf_float_bits((float)((float)dVar41));
                          local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                          goto LAB_0208d80b;
                        }
                        pcVar5 = str_020ce96d;
                      }
                    }
                    else if (((local_18 == (uint *)0x0) ||
                             (fVar39 = recovered_207e0c0(&local_14->kind,incoming_edx_52),
                             ppVar15 == (pf_kernel_value *)0x0 ||
                             (char *)((int)local_18 + -3) < (char *)0xfffffffe)) ||
                            ((5 < (uint)local_14->kind ||
                             ((0x26U >> (local_14->kind & 0x1fU) & 1) == 0)))) {
                      pcVar5 = str_020ce8c0;
                    }
                    else if (fVar39 <= 0.0) {
                      pcVar5 = str_020ce8df;
                    }
                    else {
                      if (local_18 == (uint *)0x1) {
                        dVar41 = recovered_209ee00(fVar39);
                        local_2b4.kind = (int)pf_float_bits((float)((float)dVar41));
                        local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                        goto LAB_0208d80b;
                      }
                      uVar6 = local_14[1].kind;
                      if (uVar6 == 1) {
LAB_0208d3aa:
                        local_358 = local_14[1].integer;
                        local_18 = (uint *)(uintptr_t)pf_float_bits((float)local_358);
                      }
                      else {
                        if (uVar6 != 2) {
                          if (uVar6 != 5) {
                            pcVar5 = str_020ce901;
                            goto LAB_02088215;
                          }
                          goto LAB_0208d3aa;
                        }
                        local_18 = (uint *)(uintptr_t)pf_float_bits(local_14[1].number);
                      }
                      if (0.0 < pf_bits_float((uintptr_t)local_18) && pf_bits_float((uintptr_t)local_18) != 1.0) {
                        dVar41 = recovered_209ee00(fVar39);
                        local_14 = (pf_kernel_value *)(uintptr_t)pf_float_bits((float)dVar41);
                        dVar41 = recovered_209ee00(pf_bits_float((uintptr_t)local_18));
                        local_2b4.kind = (int)pf_float_bits((float)((pf_bits_float((uintptr_t)local_14) / (float)dVar41)));
                        local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
                        goto LAB_0208d80b;
                      }
                      pcVar5 = str_020ce91f;
                    }
                    goto LAB_02088215;
                  }
                  if (local_18 != (uint *)0x1) goto LAB_0208d17c;
                  if (local_14 == (pf_kernel_value *)0x0) {
                    return '\0';
                  }
                  uVar6 = local_14->kind;
                  if ((uVar6 == 1) || (uVar6 == 5)) {
                    uVar6 = local_14->integer >> 0x1f;
                    local_60 = (uint *)((local_14->integer ^ uVar6) - uVar6);
                    local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                    goto LAB_0208819c;
                  }
                  if (uVar6 != 2) {
                    return '\0';
                  }
                  puVar31 = (uint *)(uintptr_t)pf_float_bits(local_14->number);
                  local_2b4.kind = (int)pf_float_bits((float)(-pf_bits_float((uintptr_t)puVar31)));
                  if (-pf_bits_float((uintptr_t)puVar31) <= pf_bits_float((uintptr_t)puVar31)) {
                    local_2b4.kind = (int)puVar31;
                  }
                  local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
LAB_0208d80b:
                  local_20->kind = 2;
                  goto LAB_020881a5;
                }
                if (local_18 == (uint *)0x1) {
                  if (local_14 == (pf_kernel_value *)0x0) {
                    return '\0';
                  }
                  uVar6 = local_14->kind;
                  if ((uVar6 == 1) || (uVar6 == 5)) {
                    local_324 = local_14->integer;
                    fVar39 = (float)local_324;
                  }
                  else {
                    if (uVar6 != 2) {
                      return '\0';
                    }
                    fVar39 = local_14->number;
                  }
                  fVar39 = recovered_20031d0(fVar39);
                  local_60 = (uint *)(int)ROUND(fVar39);
                  local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                  goto LAB_0208819c;
                }
                goto LAB_0208d17c;
              }
              if (((local_18 == (uint *)0x2) && (local_14->kind == 7)) &&
                 (local_14->table != (void *)0x0)) {
                uVar6 = recovered_207f480((int)local_14->table,(int)(local_14 + 1));
                if ((char)uVar6 != '\0') {
                  local_60 = *(uint **)((int)local_14->table + 8);
                  local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
                  goto LAB_0208819c;
                }
                pcVar5 = str_020cddbf;
              }
              else {
                pcVar5 = str_020cdda5;
              }
LAB_02088215:
              context = local_1c;
LAB_02087a80:
              recovered_207a2e0(context,name,pcVar5);
              return '\0';
            }
LAB_02087ff8:
            if (local_18 == (uint *)0x1) {
              uVar9 = local_14->kind;
              if (uVar9 == 3) {
                if (local_14->text == (char *)0x0) goto LAB_020881da;
                local_60 = (uint *)recovered_2002270(local_14->text);
                local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
              }
              else if (uVar9 == 8) {
                if (local_14->array == (void *)0x0) goto LAB_020881da;
                local_60 = (uint *)recovered_20829e0((int)local_14->array,uVar6);
                local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
              }
              else {
                if ((uVar9 != 7) || (local_14->table == (void *)0x0)) {
LAB_020881da:
                  pcVar5 = str_020cdd7e;
                  goto LAB_02088215;
                }
                local_60 = *(uint **)((int)local_14->table + 8);
                local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
              }
LAB_0208819c:
              local_20->kind = 1;
LAB_020881a5:
              local_20->integer = (int)local_60;
              local_20->number = pf_bits_float((uint)local_2b4.kind);
              local_20->text = (char *)0x0;
              local_20->storage = (void *)0x0;
              local_20->flag = 0;
              local_20->table = (void *)0x0;
              local_20->array = (void *)0x0;
              local_20->auxiliary = (void *)0x0;
              return '\x01';
            }
LAB_0208d17c:
            vararg2 = &DAT_020c5084;
            uVar6 = 1;
          }
          else {
            if (local_18 == (uint *)0x0) {
              uVar4 = recovered_207cf70((uint *)local_20,incoming_edx_01);
              return uVar4;
            }
LAB_02087fbf:
            vararg2 = &DAT_020ceab4;
            uVar6 = 0;
          }
          context = local_1c;
          goto LAB_02087a38;
        }
        if (count == 0) goto LAB_02087a4b;
      }
    }
  }
  else {
    if (bVar26 == 0x61) {
LAB_02086c42:
      cVar19 = name[1];
      if (cVar19 == '\0') {
        pcVar22 = str_020cd90e + 1;
      }
      else {
        if (cVar19 != 's') {
          if ((byte)(cVar19 + 0x9fU) < 0x1a) {
            cVar19 = cVar19 + -0x20;
          }
          if (cVar19 != 'S') goto LAB_02086fa5;
        }
        cVar19 = name[2];
        if (cVar19 == '\0') {
          pcVar22 = str_020cd90e + 2;
        }
        else {
          if (cVar19 != 's') {
            if ((byte)(cVar19 + 0x9fU) < 0x1a) {
              cVar19 = cVar19 + -0x20;
            }
            if (cVar19 != 'S') goto LAB_02086fa5;
          }
          cVar19 = name[3];
          if (cVar19 == '\0') {
            pcVar22 = str_020cd90e + 3;
          }
          else {
            if (cVar19 != 'e') {
              if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                cVar19 = cVar19 + -0x20;
              }
              if (cVar19 != 'E') goto LAB_02086fa5;
            }
            cVar19 = name[4];
            if (cVar19 == '\0') {
              pcVar22 = str_020cd90e + 4;
            }
            else {
              if (cVar19 != 'r') {
                if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                  cVar19 = cVar19 + -0x20;
                }
                if (cVar19 != 'R') goto LAB_02086fa5;
              }
              cVar19 = name[5];
              if (cVar19 == '\0') {
                pcVar22 = str_020cd90e + 5;
              }
              else {
                if (cVar19 != 't') {
                  if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                    cVar19 = cVar19 + -0x20;
                  }
                  if (cVar19 != 'T') goto LAB_02086fa5;
                }
                if (name[6] != '\0') goto LAB_02086fa5;
                pcVar22 = str_020cd90e + 6;
              }
            }
          }
        }
      }
      if (*pcVar22 == '\0') {
        goto LAB_020870b3;
      }
    }
    else if ((byte)(bVar26 + 0x9f) < 0x1a) {
      if (bVar26 == 0x61) goto LAB_02086c42;
    }
    else if (bVar26 == 0x41) goto LAB_02086c42;
LAB_02086fa5:
    if (bVar26 == 0x74) {
LAB_02086fc5:
      bVar26 = name[1];
      pcVar23 = (char *)(uint)bVar26;
      if (pcVar23 == (char *)0x0) {
        pcVar22 = str_020cd9d9 + 1;
LAB_02087118:
        if (*pcVar22 == '\0') goto LAB_020872c2;
      }
      else {
        if (pcVar23 == (char *)0x79) {
LAB_02086fda:
          bVar26 = name[2];
          pcVar22 = (char *)(uint)bVar26;
          if (pcVar22 == (char *)0x0) {
            pcVar22 = str_020cd9d9 + 2;
          }
          else {
            if (pcVar22 != (char *)0x70) {
              pcVar5 = (char *)(uint)CONCAT11(bVar26 + 0x9f,(char)pcVar5);
              if ((byte)(bVar26 + 0x9f) < 0x1a) {
                pcVar22 = (char *)(uint)(byte)(bVar26 - 0x20);
              }
              if ((char)pcVar22 != 'P') goto LAB_02087121;
            }
            bVar26 = name[3];
            pcVar22 = (char *)(uint)bVar26;
            if (pcVar22 == (char *)0x0) {
              pcVar22 = str_020cd9d9 + 3;
            }
            else {
              if (pcVar22 != (char *)0x65) {
                pcVar5 = (char *)(uint)CONCAT11(bVar26 + 0x9f,(char)pcVar5);
                if ((byte)(bVar26 + 0x9f) < 0x1a) {
                  pcVar22 = (char *)(uint)(byte)(bVar26 - 0x20);
                }
                if ((char)pcVar22 != 'E') goto LAB_02087121;
              }
              bVar26 = name[4];
              pcVar22 = (char *)(uint)bVar26;
              if (pcVar22 == (char *)0x0) {
                pcVar22 = str_020cd9d9 + 4;
              }
              else {
                if (pcVar22 != (char *)0x4f) {
                  pcVar5 = (char *)(uint)CONCAT11(bVar26 + 0x9f,(char)pcVar5);
                  if ((byte)(bVar26 + 0x9f) < 0x1a) {
                    pcVar22 = (char *)(uint)(byte)(bVar26 - 0x20);
                  }
                  if ((char)pcVar22 != 'O') goto LAB_02087121;
                }
                bVar26 = name[5];
                pcVar22 = (char *)(uint)bVar26;
                if (pcVar22 == (char *)0x0) {
                  pcVar22 = str_020cd9d9 + 5;
                }
                else {
                  if (pcVar22 != (char *)0x66) {
                    pcVar5 = (char *)(uint)CONCAT11(bVar26 + 0x9f,(char)pcVar5);
                    if ((byte)(bVar26 + 0x9f) < 0x1a) {
                      pcVar22 = (char *)(uint)(byte)(bVar26 - 0x20);
                    }
                    if ((char)pcVar22 != 'F') goto LAB_02087121;
                  }
                  if (name[6] != '\0') goto LAB_02087121;
                  pcVar22 = str_020cd9d9 + 6;
                }
              }
            }
          }
          goto LAB_02087118;
        }
        pcVar22 = pcVar23;
        if ((byte)(bVar26 + 0x9f) < 0x1a) {
          bVar26 = bVar26 - 0x20;
          pcVar22 = (char *)(uint)bVar26;
        }
        if (bVar26 == 0x59) goto LAB_02086fda;
      }
LAB_02087121:
      cVar19 = (char)pcVar5;
      if (cVar19 != 't') {
        pcVar22 = (char *)CONCAT31((int3)((uint)pcVar5 >> 8),cVar19 + -0x61);
        bVar20 = cVar19 - 0x20;
        goto LAB_0208712f;
      }
LAB_02087143:
      cVar21 = (char)pcVar23;
      cVar19 = DAT_020cd9e1;
      if (cVar21 != '\0') {
        pcVar22 = pcVar23;
        if (pcVar23 != (char *)0x79) {
          pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
          if ((byte)(cVar21 + 0x9fU) < 0x1a) {
            pcVar23 = (char *)(uint)(byte)(cVar21 - 0x20);
          }
          if ((char)pcVar23 != 'Y') goto LAB_020871ca;
        }
        cVar21 = name[2];
        cVar19 = DAT_020cd9e2;
        if (cVar21 != '\0') {
          if (cVar21 != 'p') {
            pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
            if ((byte)(cVar21 + 0x9fU) < 0x1a) {
              cVar21 = cVar21 + -0x20;
            }
            if (cVar21 != 'P') goto LAB_020871ca;
          }
          cVar21 = name[3];
          cVar19 = DAT_020cd9e3;
          if (cVar21 != '\0') {
            if (cVar21 != 'e') {
              pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
              if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                cVar21 = cVar21 + -0x20;
              }
              if (cVar21 != 'E') goto LAB_020871ca;
            }
            cVar19 = DAT_020cd9e4;
            if (name[4] != '\0') goto LAB_020871ca;
          }
        }
      }
      if (cVar19 == '\0') goto LAB_020872c2;
    }
    else {
      pcVar22 = (char *)(uint)(byte)(bVar26 + 0x9f);
      bVar20 = bVar26 - 0x20;
      bVar27 = bVar20;
      if (0x19 < (byte)(bVar26 + 0x9f)) {
        bVar27 = bVar26;
      }
      pcVar5 = (char *)(uint)CONCAT11(bVar27,bVar26);
      if (bVar27 == 0x54) goto LAB_02086fc5;
LAB_0208712f:
      pcVar23 = (char *)(uint)bVar20;
      if (0x19 < (byte)pcVar22) {
        pcVar23 = pcVar5;
      }
      if ((char)pcVar23 == 'T') {
        pcVar23 = (char *)(uint)(byte)name[1];
        goto LAB_02087143;
      }
    }
LAB_020871ca:
    cVar19 = (char)pcVar5;
    if (cVar19 == 'p') {
LAB_020871d2:
      cVar21 = name[1];
      if (cVar21 == '\0') {
        pcVar23 = str_020cd6cf + 1;
      }
      else {
        if (cVar21 != 'r') {
          pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
          if ((byte)(cVar21 + 0x9fU) < 0x1a) {
            cVar21 = cVar21 + -0x20;
          }
          if (cVar21 != 'R') goto LAB_02087304;
        }
        cVar21 = name[2];
        if (cVar21 == '\0') {
          pcVar23 = str_020cd6cf + 2;
        }
        else {
          if (cVar21 != 'i') {
            pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
            if ((byte)(cVar21 + 0x9fU) < 0x1a) {
              cVar21 = cVar21 + -0x20;
            }
            if (cVar21 != 'I') goto LAB_02087304;
          }
          cVar21 = name[3];
          if (cVar21 == '\0') {
            pcVar23 = str_020cd6cf + 3;
          }
          else {
            if (cVar21 != 'n') {
              pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
              if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                cVar21 = cVar21 + -0x20;
              }
              if (cVar21 != 'N') goto LAB_02087304;
            }
            cVar21 = name[4];
            if (cVar21 == '\0') {
              pcVar23 = str_020cd6cf + 4;
            }
            else {
              if (cVar21 != 't') {
                pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
                if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                  cVar21 = cVar21 + -0x20;
                }
                if (cVar21 != 'T') goto LAB_02087304;
              }
              if (name[5] != '\0') goto LAB_02087304;
              pcVar23 = str_020cd6cf + 5;
            }
          }
        }
      }
      if (*pcVar23 == '\0') {
        local_20 = out;
        local_24 = (uint *)recovered_208e290((uint)values,count,(uchar *)&local_2b4);
        if ((char)local_24 == '\0') {
          pf_varargs_207a2e0___(context,name,str_020cdc37);
          goto LAB_020875cb;
        }
        uVar6 = 0;
        ppVar15 = &local_2b4;
        while( true ) {
          do {
            ppVar30 = (pf_kernel_value *)((int)&ppVar15->kind + 1);
            uVar4 = (uchar)ppVar15->kind;
            ppVar15 = ppVar30;
          } while (uVar4 == '\r');
          if (uVar4 == '\0') break;
          if (uVar4 == '\n') {
            recovered_20a11d0((uchar *)&local_78c,uVar6,'\x01','\x01');
            uVar6 = 0;
          }
          else if (uVar6 + 1 < 0x400) {
            *(uchar *)((int)&local_78c.kind + uVar6) = uVar4;
            uVar6 = uVar6 + 1;
          }
        }
        recovered_20a11d0((uchar *)&local_78c,uVar6,'\x01','\x01');
        cVar19 = DAT_021408e9;
        uVar4 = extraout_CL;
        if (cVar19 == '\x01') {
          uVar6 = recovered_2042790();
          uVar4 = extraout_CL_00;
          if ((((char)uVar6 == '\0') || (iVar24 = DAT_0214b108, iVar24 == 0)) ||
             (iVar24 = DAT_0214b10c, iVar24 == 0)) goto LAB_02087585;
        }
        else {
LAB_02087585:
          recovered_2027720(uVar4);
        }
        local_20->kind = 1;
        local_20->integer = 0;
        local_20->number = 0.0;
        local_20->text = (char *)0x0;
        local_20->storage = (void *)0x0;
        local_20->flag = 0;
        local_20->table = (void *)0x0;
        local_20->array = (void *)0x0;
        local_20->auxiliary = (void *)0x0;
        goto LAB_020875cb;
      }
    }
    else if ((byte)(cVar19 + 0x9fU) < 0x1a) {
      if (cVar19 == 'p') goto LAB_020871d2;
    }
    else if (cVar19 == 'P') goto LAB_020871d2;
LAB_02087304:
    if (cVar19 == 'c') {
LAB_02087308:
      cVar21 = name[1];
      cVar2 = DAT_020cd6d6;
      if (cVar21 != '\0') {
        if (cVar21 != 'l') {
          pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
          if ((byte)(cVar21 + 0x9fU) < 0x1a) {
            cVar21 = cVar21 + -0x20;
          }
          if (cVar21 != 'L') goto LAB_02087430;
        }
        cVar21 = name[2];
        cVar2 = DAT_020cd6d7;
        if (cVar21 != '\0') {
          if (cVar21 != 's') {
            pcVar22 = (char *)(uint)(byte)(cVar21 + 0x9fU);
            if ((byte)(cVar21 + 0x9fU) < 0x1a) {
              cVar21 = cVar21 + -0x20;
            }
            if (cVar21 != 'S') goto LAB_02087430;
          }
          cVar2 = DAT_020cd6d8;
          if (name[3] != '\0') goto LAB_02087430;
        }
      }
      if (cVar2 == '\0') {
        if (1 < count) {
LAB_0208752b:
          pcVar5 = str_020cdc5f;
          goto LAB_02087a80;
        }
        if (count == 1) {
          if ((5 < (uint)values->kind) || ((0x26U >> (values->kind & 0x1fU) & 1) == 0))
          goto LAB_0208752b;
          uVar6 = recovered_207d360(&values->kind,(uint)pcVar22);
          uVar3 = (undefined1)uVar6;
        }
        else {
          uVar3 = 0;
        }
        DAT_020de175 = uVar3;
        DAT_021306f8 = 0;
        DAT_021408e9 = 0;
        DAT_0215bc84 = 0;
        DAT_0214b11d = 0;
        recovered_209f910();
        recovered_2027720(in_CL);
        out->kind = 1;
        out->integer = 0;
        out->number = 0.0;
        goto LAB_020877ab;
      }
    }
    else if ((byte)(cVar19 + 0x9fU) < 0x1a) {
      if (cVar19 == 'c') goto LAB_02087308;
    }
    else if (cVar19 == 'C') goto LAB_02087308;
LAB_02087430:
    if (cVar19 != 't') {
      if ((byte)(cVar19 + 0x9fU) < 0x1a) {
        if (cVar19 == 't') goto LAB_02087438;
      }
      else if (cVar19 == 'T') goto LAB_02087438;
LAB_02087666:
      if (cVar19 == 's') {
LAB_0208766e:
        cVar21 = name[1];
        if (cVar21 == '\0') {
          pcVar22 = str_020cb8e7 + 1;
        }
        else {
          if (cVar21 != 'e') {
            if ((byte)(cVar21 + 0x9fU) < 0x1a) {
              cVar21 = cVar21 + -0x20;
            }
            if (cVar21 != 'E') goto LAB_02087838;
          }
          cVar21 = name[2];
          if (cVar21 == '\0') {
            pcVar22 = str_020cb8e7 + 2;
          }
          else {
            if (cVar21 != 'r') {
              if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                cVar21 = cVar21 + -0x20;
              }
              if (cVar21 != 'R') goto LAB_02087838;
            }
            cVar21 = name[3];
            if (cVar21 == '\0') {
              pcVar22 = str_020cb8e7 + 3;
            }
            else {
              if (cVar21 != 'i') {
                if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                  cVar21 = cVar21 + -0x20;
                }
                if (cVar21 != 'I') goto LAB_02087838;
              }
              cVar21 = name[4];
              if (cVar21 == '\0') {
                pcVar22 = str_020cb8e7 + 4;
              }
              else {
                if (cVar21 != 'a') {
                  if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                    cVar21 = cVar21 + -0x20;
                  }
                  if (cVar21 != 'A') goto LAB_02087838;
                }
                cVar21 = name[5];
                if (cVar21 == '\0') {
                  pcVar22 = str_020cb8e7 + 5;
                }
                else {
                  if (cVar21 != 'l') {
                    if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                      cVar21 = cVar21 + -0x20;
                    }
                    if (cVar21 != 'L') goto LAB_02087838;
                  }
                  if (name[6] != '\0') goto LAB_02087838;
                  pcVar22 = str_020cb8e7 + 6;
                }
              }
            }
          }
        }
        if (*pcVar22 == '\0') {
          local_20 = out;
          uVar6 = recovered_208e290((uint)values,count,(uchar *)&local_78c);
          if ((uchar)uVar6 != '\0') {
            recovered_20122e0((char *)&local_78c);
            recovered_20122e0(&DAT_020c526d);
            local_20->kind = 1;
            local_20->integer = 0;
            local_20->number = 0.0;
            local_20->text = (char *)0x0;
            local_20->storage = (void *)0x0;
            local_20->flag = 0;
            local_20->table = (void *)0x0;
            local_20->array = (void *)0x0;
            local_20->auxiliary = (void *)0x0;
            return (uchar)uVar6;
          }
          pcVar5 = str_020cdca9;
          goto LAB_020879a6;
        }
      }
      else if ((byte)(cVar19 + 0x9fU) < 0x1a) {
        if (cVar19 == 's') goto LAB_0208766e;
      }
      else if (cVar19 == 'S') goto LAB_0208766e;
LAB_02087838:
      if (cVar19 == 'i') {
LAB_02087858:
        cVar19 = name[1];
        if (cVar19 == '\0') {
          pcVar22 = str_020cd6d9 + 1;
        }
        else {
          if (cVar19 != 'n') {
            if ((byte)(cVar19 + 0x9fU) < 0x1a) {
              cVar19 = cVar19 + -0x20;
            }
            if (cVar19 != 'N') goto LAB_020879ca;
          }
          cVar19 = name[2];
          if (cVar19 == '\0') {
            pcVar22 = str_020cd6d9 + 2;
          }
          else {
            if (cVar19 != 'p') {
              if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                cVar19 = cVar19 + -0x20;
              }
              if (cVar19 != 'P') goto LAB_020879ca;
            }
            cVar19 = name[3];
            if (cVar19 == '\0') {
              pcVar22 = str_020cd6d9 + 3;
            }
            else {
              if (cVar19 != 'u') {
                if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                  cVar19 = cVar19 + -0x20;
                }
                if (cVar19 != 'U') goto LAB_020879ca;
              }
              cVar19 = name[4];
              if (cVar19 == '\0') {
                pcVar22 = str_020cd6d9 + 4;
              }
              else {
                if (cVar19 != 't') {
                  if ((byte)(cVar19 + 0x9fU) < 0x1a) {
                    cVar19 = cVar19 + -0x20;
                  }
                  if (cVar19 != 'T') goto LAB_020879ca;
                }
                if (name[5] != '\0') goto LAB_020879ca;
                pcVar22 = str_020cd6d9 + 5;
              }
            }
          }
        }
        if (*pcVar22 == '\0') {
          if (count < 2) {
            if (count != 1) {
              DAT_0214b11d = 0;
              recovered_2027720((uchar)pcVar22);
              recovered_2029350(&DAT_0214b11d,0x200,(char *)0x0,'\0','\0');
              uVar6 = recovered_207e340((uint *)out,&DAT_0214b11d);
              return (uchar)uVar6;
            }
            local_2b4.kind = 0;
            uVar6 = recovered_208e420(context,name,(int)values,1,0,&local_2b4.kind);
            if ((char)uVar6 == '\0') {
              return '\0';
            }
            uVar4 = recovered_207a9c0((char *)local_2b4.kind,str_020cdd0f);
            if (uVar4 == '\0') {
              pcVar5 = str_020cdd17;
              goto LAB_02087a80;
            }
            recovered_208e490((uchar *)&local_78c,incoming_edx);
            goto LAB_02087ae9;
          }
          pcVar5 = str_020cdcd2;
          goto LAB_02087a80;
        }
      }
      else {
        if ((byte)(cVar19 + 0x9fU) < 0x1a) {
          pcVar22 = (char *)(uint)(byte)(cVar19 - 0x20);
        }
        else {
          pcVar22 = pcVar5;
        }
        if ((char)pcVar22 == 'I') goto LAB_02087858;
      }
LAB_020879ca:
      iVar24 = 0;
      pcVar22 = pcVar5;
      do {
        iVar25 = iVar24;
        if (iVar25 == 0xd) goto LAB_02086d27;
        cVar19 = str_020cd6df[iVar25];
        uVar3 = SUB41(pcVar5,0);
        pcVar5 = (char *)(uint)CONCAT11(cVar19,uVar3);
        cVar21 = (char)pcVar22;
        if (cVar21 != cVar19) {
          if ((byte)(cVar21 + 0x9fU) < 0x1a) {
            cVar21 = cVar21 + -0x20;
          }
          pcVar22 = (char *)(uint)CONCAT11(cVar19 + 0x9fU,cVar21);
          if ((byte)(cVar19 + 0x9fU) < 0x1a) {
            pcVar5 = (char *)(uint)CONCAT11(cVar19 + -0x20,uVar3);
          }
          if (cVar21 != (char)((uint)pcVar5 >> 8)) goto LAB_02086d27;
        }
        pcVar22 = (char *)(uint)(byte)name[iVar25 + 1];
        iVar24 = iVar25 + 1;
      } while (name[iVar25 + 1] != 0);
      cVar19 = str_020cd6df[iVar25 + 1];
      goto joined_r0x02086d21;
    }
LAB_02087438:
    cVar21 = name[1];
    if (cVar21 == '\0') {
      pcVar22 = &DAT_020c5354;
    }
    else {
      if (cVar21 != 'a') {
        if ((byte)(cVar21 + 0x9fU) < 0x1a) {
          cVar21 = cVar21 + -0x20;
        }
        if (cVar21 != 'A') goto LAB_02087666;
      }
      cVar21 = name[2];
      if (cVar21 == '\0') {
        pcVar22 = &DAT_020c5355;
      }
      else {
        if (cVar21 != 'y') {
          if ((byte)(cVar21 + 0x9fU) < 0x1a) {
            cVar21 = cVar21 + -0x20;
          }
          if (cVar21 != 'Y') goto LAB_02087666;
        }
        cVar21 = name[3];
        if (cVar21 == '\0') {
          pcVar22 = &DAT_020c5356;
        }
        else {
          if (cVar21 != 'g') {
            if ((byte)(cVar21 + 0x9fU) < 0x1a) {
              cVar21 = cVar21 + -0x20;
            }
            if (cVar21 != 'G') goto LAB_02087666;
          }
          cVar21 = name[4];
          if (cVar21 == '\0') {
            pcVar22 = &DAT_020c5357;
          }
          else {
            if (cVar21 != 'a') {
              if ((byte)(cVar21 + 0x9fU) < 0x1a) {
                cVar21 = cVar21 + -0x20;
              }
              if (cVar21 != 'A') goto LAB_02087666;
            }
            if (name[5] != '\0') goto LAB_02087666;
            pcVar22 = &DAT_020c5358;
          }
        }
      }
    }
    if (*pcVar22 != '\0') goto LAB_02087666;
    if (count == 0) {
      iVar24 = recovered_202ca80(1);
      if (iVar24 == 0) {
        pcVar5 = str_020cdc93;
        goto LAB_02087a80;
      }
      goto LAB_02087797;
    }
  }
  vararg2 = &DAT_020ceab4;
  uVar6 = 0;
LAB_02087a38:
  pf_varargs_207a2e0__4__4__4_(context,name,str_020cea9b,(uint)name,uVar6,(uint)vararg2);
  return '\0';
code_r0x02089324:
  cVar19 = *pcVar5;
  pcVar5 = pcVar5 + 1;
  if (cVar19 == '\0') goto LAB_020875cb;
  goto LAB_0208931a;
LAB_0208b0f7:
  recovered_2001710(local_60);
LAB_0208b105:
  recovered_2001710(local_28);
LAB_0208b11f:
  recovered_2001710((void *)(uintptr_t)pf_float_bits(local_2b4.number));
  local_2b4.kind = 0;
  local_2b4.integer = 0;
  local_2b4.number = 0.0;
  pcVar5 = str_020ce454;
  goto LAB_02088215;
code_r0x0208b0ab:
  uVar10 = recovered_207e1d0(puVar31,(uint *)(*(int *)((int)local_14->array + 0xc) + 4 +
                                             uVar6 * 0x28));
  puVar31 = puVar31 + 9;
  uVar6 = uVar9 + 1;
  puVar12 = extraout_EDX_21;
  if ((char)uVar10 == '\0') goto LAB_0208b0d0;
  goto LAB_0208b031;
LAB_0208b0d0:
  puVar31 = local_18;
  do {
    recovered_2043a90(puVar31,(uint)puVar12);
    puVar31 = puVar31 + 9;
    uVar9 = uVar9 - 1;
    puVar12 = extraout_EDX_22;
  } while (uVar9 != 0);
LAB_0208b2cb:
  recovered_2001710(local_18);
  pcVar5 = str_020ce500;
  goto LAB_02088215;
code_r0x0208b203:
  puVar12 = extraout_EDX_23;
  if (0 < (int)local_60) {
    puVar12 = local_b0;
    ppVar15 = &local_78c;
    for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
      ppVar15->kind = *puVar12;
      puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
      ppVar15 = (pf_kernel_value *)((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
    }
    puVar12 = local_34;
    for (iVar24 = 9; iVar24 != 0; iVar24 = iVar24 + -1) {
      *puVar31 = *puVar12;
      puVar12 = puVar12 + (uint)bVar29 * -2 + 1;
      puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
    }
    ppVar15 = &local_78c;
    puVar31 = local_34;
    for (iVar24 = 9; puVar12 = local_34, iVar24 != 0; iVar24 = iVar24 + -1) {
      *puVar31 = ppVar15->kind;
      ppVar15 = (pf_kernel_value *)((int)ppVar15 + ((uint)bVar29 * -2 + 1) * 4);
      puVar31 = puVar31 + (uint)bVar29 * -2 + 1;
    }
  }
  local_34 = local_34 + 9;
  local_2b8 = local_2b8 + -1;
  puVar31 = local_2c;
  if (local_2b8 == 0) goto LAB_0208b245;
  goto LAB_0208b1dc;
switchD_0208ca6c_caseD_3:
  pcVar5 = local_14->text;
  if (pcVar5 == (char *)0x0) goto switchD_0208ca6c_caseD_4;
  if (local_18 != (uint *)0x2) {
    pcVar5 = recovered_20024f0(pcVar5,'.');
    if ((pcVar5 == (char *)0x0) &&
       (uVar4 = recovered_2083290((long)local_14->text,(int *)&local_60), uVar4 != '\0')) {
      local_2b4.kind = (int)pf_float_bits((float)((float)(int)local_60));
      goto LAB_0208819c;
    }
    ppVar15 = local_14;
    pcVar22 = recovered_20024f0(local_14->text,'.');
    pcVar5 = ppVar15->text;
    if (pcVar22 != (char *)0x0) {
LAB_0208d015:
      uVar4 = recovered_2083500(pcVar5,(float *)&local_2b4);
      if (uVar4 != '\0') {
        local_60 = (uint *)(int)ROUND(pf_bits_float((uint)local_2b4.kind));
        goto LAB_0208d80b;
      }
      goto switchD_0208ca6c_caseD_4;
    }
    local_78c.kind = 0;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      goto LAB_0208d015;
    }
    uVar6 = recovered_206e6c0((uint)pcVar5,(uint *)&local_78c);
    if (((byte)uVar6 & local_78c.kind < 0) == 0) {
      pcVar5 = local_14->text;
      goto LAB_0208d015;
    }
    local_20->kind = 6;
    local_20->integer = local_78c.kind;
    goto LAB_020886fb;
  }
  local_78c.kind = 10;
  local_24 = (uint *)recovered_209a070((int *)local_1c,name,(int)local_14,2,1,&local_78c.kind);
  if ((char)local_24 == '\0') goto LAB_020875cb;
  if (local_78c.kind - 0x25U < 0xffffffdd) {
LAB_0208cb30:
    local_18 = (uint *)0x0;
    uVar6 = 0;
    fVar39 = 0.0;
  }
  else {
    local_18 = (uint *)0x0;
    iVar24 = 1;
    if (*pcVar5 == '+') {
      bVar36 = false;
    }
    else if (*pcVar5 == '-') {
      bVar36 = true;
    }
    else {
      bVar36 = false;
      iVar24 = 0;
    }
    bVar29 = pcVar5[iVar24];
    uVar6 = 0;
    fVar39 = 0.0;
    if (bVar29 != 0) {
      pbVar18 = (byte *)(pcVar5 + iVar24 + 1);
      uVar37 = 0;
      do {
        if ((byte)(bVar29 + 0x9f) < 0x1a) {
          bVar29 = bVar29 - 0x20;
        }
        iVar24 = -0x30;
        if ((9 < (byte)(bVar29 - 0x30U)) && (iVar24 = -0x37, 0x19 < (byte)(bVar29 + 0xbf)))
        goto LAB_0208cb30;
        fVar39 = 0.0;
        local_18 = (uint *)0x0;
        if ((uint)local_78c.kind <= (uint)bVar29 + iVar24) {
          uVar6 = 0;
          goto LAB_0208d0a3;
        }
        uVar37 = (uVar37 & 0xffffffff) * (ulonglong)(uint)local_78c.kind +
                 CONCAT44((int)(uVar37 >> 0x20) * local_78c.kind,(uint)bVar29 + iVar24);
        uVar9 = (uint)uVar37;
        uVar6 = 0;
        fVar39 = 0.0;
        if ((int)(uVar37 >> 0x20) != 0) goto LAB_0208d0a3;
        bVar29 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar29 != 0);
      if (bVar36) {
        local_18 = (uint *)0x0;
        uVar6 = 0;
        fVar39 = 0.0;
        if (uVar9 < 0x80000001) {
          local_18 = (uint *)0x1;
          if (uVar37 == 0x80000000) {
            uVar6 = 0x80000000;
            fVar39 = _DAT_020c5054;
          }
          else {
            fVar39 = (float)(int)-uVar9;
            uVar6 = -uVar9;
          }
        }
      }
      else {
        fVar39 = 0.0;
        if (0x7fffffff >= uVar9) {
          fVar39 = (float)(int)uVar9;
        }
        local_18 = (uint *)((uint)(0x7fffffff < uVar9) * 5 + 1);
        uVar6 = uVar9;
      }
    }
  }
LAB_0208d0a3:
  local_20->kind = (int)local_18;
  goto LAB_0208d0ab;
}
#undef DAT_00000004
#undef DAT_020c5048
#undef DAT_020c504c
#undef DAT_020c5050
#undef DAT_020c5054
#undef DAT_020c5058
#undef DAT_020c5084
#undef DAT_020c5119
#undef DAT_020c526d
#undef DAT_020c5354
#undef DAT_020c5355
#undef DAT_020c5356
#undef DAT_020c5357
#undef DAT_020c5358
#undef DAT_020c547f
#undef DAT_020cb03d
#undef DAT_020cb0c2
#undef DAT_020cd454
#undef DAT_020cd4af
#undef DAT_020cd6d6
#undef DAT_020cd6d7
#undef DAT_020cd6d8
#undef DAT_020cd78b
#undef DAT_020cd790
#undef DAT_020cd795
#undef DAT_020cd79a
#undef DAT_020cd79e
#undef DAT_020cd7a9
#undef DAT_020cd7bb
#undef DAT_020cd7cf
#undef DAT_020cd7dc
#undef DAT_020cd805
#undef DAT_020cd814
#undef DAT_020cd821
#undef DAT_020cd825
#undef DAT_020cd829
#undef DAT_020cd842
#undef DAT_020cd84e
#undef DAT_020cd965
#undef DAT_020cd977
#undef DAT_020cd98f
#undef DAT_020cd994
#undef DAT_020cd9e0
#undef DAT_020cd9e1
#undef DAT_020cd9e2
#undef DAT_020cd9e3
#undef DAT_020cd9e4
#undef DAT_020ce12d
#undef DAT_020ce5e8
#undef DAT_020ceab4
#undef DAT_020de175
#undef DAT_020de324
#undef DAT_021306f8
#undef DAT_021408e9
#undef DAT_0214b108
#undef DAT_0214b10c
#undef DAT_0214b11d
#undef DAT_0215bc84
#undef DAT_0223dc18
#undef DAT_0223dc1c
#undef DAT_0223dc1d
#undef DAT_0223dd1d
#undef DAT_0223dd1e
#undef DAT_0223dd20
#undef Ram0223dd20
#undef _DAT_020c5048
#undef _DAT_020c504c
#undef _DAT_020c5050
#undef _DAT_020c5054
#undef _DAT_020c5058
#undef str_020c51c8
#undef str_020ca028
#undef str_020cb850
#undef str_020cb8e7
#undef str_020cbdae
#undef str_020cd6cf
#undef str_020cd6d9
#undef str_020cd6df
#undef str_020cd6ed
#undef str_020cd6fb
#undef str_020cd708
#undef str_020cd716
#undef str_020cd729
#undef str_020cd738
#undef str_020cd743
#undef str_020cd750
#undef str_020cd75d
#undef str_020cd76b
#undef str_020cd77e
#undef str_020cd7a3
#undef str_020cd7ae
#undef str_020cd7b5
#undef str_020cd7c1
#undef str_020cd7c9
#undef str_020cd7d4
#undef str_020cd7e1
#undef str_020cd7e7
#undef str_020cd7f1
#undef str_020cd7f9
#undef str_020cd7ff
#undef str_020cd809
#undef str_020cd819
#undef str_020cd82d
#undef str_020cd833
#undef str_020cd839
#undef str_020cd847
#undef str_020cd853
#undef str_020cd85f
#undef str_020cd86c
#undef str_020cd879
#undef str_020cd884
#undef str_020cd890
#undef str_020cd89d
#undef str_020cd8ab
#undef str_020cd8b7
#undef str_020cd8c3
#undef str_020cd8d1
#undef str_020cd8dc
#undef str_020cd8e9
#undef str_020cd8f6
#undef str_020cd903
#undef str_020cd90e
#undef str_020cd915
#undef str_020cd91b
#undef str_020cd926
#undef str_020cd92f
#undef str_020cd938
#undef str_020cd940
#undef str_020cd947
#undef str_020cd956
#undef str_020cd96a
#undef str_020cd970
#undef str_020cd97c
#undef str_020cd983
#undef str_020cd989
#undef str_020cd998
#undef str_020cd9a2
#undef str_020cd9a9
#undef str_020cd9b5
#undef str_020cd9be
#undef str_020cd9c7
#undef str_020cd9d0
#undef str_020cd9d9
#undef str_020cd9e5
#undef str_020cd9f0
#undef str_020cd9fa
#undef str_020cda03
#undef str_020cda0c
#undef str_020cda15
#undef str_020cda1e
#undef str_020cda27
#undef str_020cda30
#undef str_020cda39
#undef str_020cda43
#undef str_020cda53
#undef str_020cda63
#undef str_020cda6c
#undef str_020cda78
#undef str_020cda81
#undef str_020cda89
#undef str_020cda91
#undef str_020cda9a
#undef str_020cdaa9
#undef str_020cdab9
#undef str_020cdc37
#undef str_020cdc5f
#undef str_020cdc93
#undef str_020cdca9
#undef str_020cdcd2
#undef str_020cdd0f
#undef str_020cdd17
#undef str_020cdd49
#undef str_020cdd76
#undef str_020cdd7e
#undef str_020cdda5
#undef str_020cddbf
#undef str_020cdddb
#undef str_020cddfb
#undef str_020cde1f
#undef str_020cde45
#undef str_020cde57
#undef str_020cde79
#undef str_020cde9b
#undef str_020cdea6
#undef str_020cdec4
#undef str_020cdedd
#undef str_020cdefd
#undef str_020cdf1a
#undef str_020cdf44
#undef str_020cdf64
#undef str_020cdf86
#undef str_020cdfb3
#undef str_020cdfd6
#undef str_020cdfeb
#undef str_020ce00d
#undef str_020ce027
#undef str_020ce048
#undef str_020ce06c
#undef str_020ce089
#undef str_020ce0b1
#undef str_020ce0d9
#undef str_020ce0f8
#undef str_020ce131
#undef str_020ce15e
#undef str_020ce16b
#undef str_020ce18f
#undef str_020ce1b5
#undef str_020ce1d8
#undef str_020ce1fd
#undef str_020ce21f
#undef str_020ce243
#undef str_020ce269
#undef str_020ce28d
#undef str_020ce2b3
#undef str_020ce2cf
#undef str_020ce2e7
#undef str_020ce2fe
#undef str_020ce316
#undef str_020ce333
#undef str_020ce361
#undef str_020ce386
#undef str_020ce3b4
#undef str_020ce3d2
#undef str_020ce3f9
#undef str_020ce407
#undef str_020ce433
#undef str_020ce454
#undef str_020ce476
#undef str_020ce49d
#undef str_020ce4db
#undef str_020ce500
#undef str_020ce522
#undef str_020ce542
#undef str_020ce54f
#undef str_020ce579
#undef str_020ce5a6
#undef str_020ce5c9
#undef str_020ce5ed
#undef str_020ce608
#undef str_020ce62c
#undef str_020ce646
#undef str_020ce65f
#undef str_020ce682
#undef str_020ce6a2
#undef str_020ce6bc
#undef str_020ce6e0
#undef str_020ce701
#undef str_020ce71f
#undef str_020ce748
#undef str_020ce767
#undef str_020ce792
#undef str_020ce7ac
#undef str_020ce7d2
#undef str_020ce7ee
#undef str_020ce811
#undef str_020ce835
#undef str_020ce863
#undef str_020ce882
#undef str_020ce8a3
#undef str_020ce8c0
#undef str_020ce8df
#undef str_020ce901
#undef str_020ce91f
#undef str_020ce948
#undef str_020ce96d
#undef str_020ce994
#undef str_020ce9b2
#undef str_020ce9d5
#undef str_020cea03
#undef str_020cea21
#undef str_020cea3e
#undef str_020cea9b
#undef str_020cead0
#undef str_020ceaf0
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_78c
#undef local_768
#undef local_764
#undef local_760
#undef local_75c
#undef local_758
#undef local_754
#undef local_750
#undef local_74c
#undef local_748
#undef local_358
#undef vararg2
#undef local_34c
#undef local_340
#undef local_330
#undef local_324
#undef local_2f8
#undef local_2f4
#undef local_2f0
#undef local_2ec
#undef local_2e8
#undef local_2e4
#undef local_2e0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_2b8
#undef local_2b4
#undef local_290
#undef local_28c
#undef local_288
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
#undef local_a6
#undef local_8c
#undef local_88
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
