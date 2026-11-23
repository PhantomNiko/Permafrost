/* Native outline storage: line segments, contour state and floating bounds.
 * Pooka's Free Software License. */
#ifndef PF_OUTLINE110_H
#define PF_OUTLINE110_H
static void pf_outline_bounds110(long *outline,const double *point){
 double *bounds=(double *)(outline+12);
 if(!((unsigned char *)outline)[13]){
  bounds[0]=bounds[1]=point[0];bounds[2]=bounds[3]=point[1];
  ((unsigned char *)outline)[13]=1;return;
 }
 if(point[0]<bounds[0])bounds[0]=point[0];
 if(bounds[1]<point[0])bounds[1]=point[0];
 if(point[1]<bounds[2])bounds[2]=point[1];
 if(bounds[3]<point[1])bounds[3]=point[1];
}
static void pf_outline_edge110(long *outline,const double *first,const double *last){
 unsigned long count=(unsigned long)outline[1],capacity=(unsigned long)outline[2];
 if(count==capacity){
  unsigned long next=count?count*2:4;
  if(count<next){
   double *data=recovered_2069810(next*32);const double *old=(const double *)(uintptr_t)outline[0];
   for(unsigned long i=0;i<count*4;i++)data[i]=old[i];
   recovered_2069870((void *)old);outline[0]=(long)data;outline[2]=(long)next;
  }
 }
 double *edge=(double *)(uintptr_t)outline[0]+count*4;
 edge[0]=first[0];edge[1]=first[1];edge[2]=last[0];edge[3]=last[1];outline[1]=(long)(count+1);
}
#endif
