/* Pooka's Free Software License. Recovered fixed-point cube and CPU rasterizer. */
#include "render.h"
uint32_t gCubeWindowWidth=360,gCubeWindowHeight=260;
static const int32_t vertices[8][3]={{-72,-72,-72},{72,-72,-72},{72,72,-72},{-72,72,-72},{-72,-72,72},{72,-72,72},{72,72,72},{-72,72,72}};
static const int16_t sine[64]={0,1606,3196,4756,6270,7723,9102,10394,11585,12665,13623,14449,15137,15679,16069,16305,16384,16305,16069,15679,15137,14449,13623,12665,11585,10394,9102,7723,6270,4756,3196,1606,0,-1606,-3196,-4756,-6270,-7723,-9102,-10394,-11585,-12665,-13623,-14449,-15137,-15679,-16069,-16305,-16384,-16305,-16069,-15679,-15137,-14449,-13623,-12665,-11585,-10394,-9102,-7723,-6270,-4756,-3196,-1606};
static const CubeFace triangles[12]={{{0,1,2},0,0xff3048ffU,0},{{0,2,3},0,0xff3048ffU,0},{{4,7,6},0,0xff8a20ffU,0},{{4,6,5},0,0xff8a20ffU,0},{{0,4,5},0,0xffe24affU,0},{{0,5,1},0,0xffe24affU,0},{{3,2,6},0,0x2ed96bffU,0},{{3,6,7},0,0x2ed96bffU,0},{{1,5,6},0,0x24a0ffffU,0},{{1,6,2},0,0x24a0ffffU,0},{{0,3,7},0,0x8f5bffffU,0},{{0,7,4},0,0x8f5bffffU,0}};
static const uint8_t edges[12][2]={{0,1},{1,2},{2,3},{3,0},{4,5},{5,6},{6,7},{7,4},{0,4},{1,5},{2,6},{3,7}};

static int32_t fixed(int32_t value,int32_t factor) {return (int32_t)(((int64_t)value*factor)/16384);}
void cube_project(uint32_t frame,CubeVertex out[8]) {
    int32_t sx=sine[frame&63],cx=sine[(frame+16)&63];
    int32_t sy=sine[(frame*2)&63],cy=sine[(frame*2+16)&63];
    int32_t sz=sine[(frame*3)&63],cz=sine[(frame*3+16)&63];
    for(unsigned i=0;i<8;i++) {
        int32_t x=vertices[i][0],y=vertices[i][1],z=vertices[i][2];
        int32_t a=fixed(y,cx)-fixed(z,sx),b=fixed(y,sx)+fixed(z,cx);
        int32_t c=fixed(x,cy)+fixed(b,sy),d=fixed(b,cy)-fixed(x,sy);
        int32_t e=fixed(c,cz)-fixed(a,sz),f=fixed(a,cz)+fixed(c,sz);
        out[i].x=e*188/(d+300)+(int32_t)gCubeWindowWidth/2;
        out[i].y=(int32_t)gCubeWindowHeight/2-f*188/(d+300);out[i].depth=d;
    }
}
void cube_faces(const CubeVertex vertices[8],CubeFace out[12]) {
    for(unsigned i=0;i<12;i++) {
        out[i]=triangles[i];out[i].depth=0;
        for(unsigned j=0;j<3;j++)out[i].depth+=vertices[out[i].indices[j]].depth;
    }
    for(unsigned i=1;i<12;i++) {
        CubeFace value=out[i];unsigned j=i;
        while(j && value.depth>out[j-1].depth){out[j]=out[j-1];--j;}out[j]=value;
    }
}
static void pixel(uint8_t *pixels,int32_t x,int32_t y,uint32_t rgba) {
    if(!pixels||x<0||y<0||x>=(int32_t)gCubeWindowWidth||y>=(int32_t)gCubeWindowHeight)return;
    uint8_t *p=pixels+((uint32_t)y*gCubeWindowWidth+(uint32_t)x)*4;
    p[0]=rgba>>24;p[1]=rgba>>16;p[2]=rgba>>8;p[3]=rgba;
}
static int64_t edge(const CubeVertex *a,const CubeVertex *b,int32_t x,int32_t y) {
    return (int64_t)(b->y-a->y)*(x-a->x)-(int64_t)(b->x-a->x)*(y-a->y);
}
void drawCubeCpu(uint8_t *pixels,const CubeVertex vertices[8],const CubeFace faces[12]) {
    if(pixels)for(uint32_t y=0;y<gCubeWindowHeight;y++)for(uint32_t x=0;x<gCubeWindowWidth;x++)pixel(pixels,x,y,0x10131aff);
    for(unsigned i=0;i<12;i++) {
        const CubeVertex *a=&vertices[faces[i].indices[0]],*b=&vertices[faces[i].indices[1]],*c=&vertices[faces[i].indices[2]];
        int32_t left=a->x,right=a->x,top=a->y,bottom=a->y;
        if(b->x<left)left=b->x;if(c->x<left)left=c->x;
        if(b->x>right)right=b->x;if(c->x>right)right=c->x;
        if(b->y<top)top=b->y;if(c->y<top)top=c->y;
        if(b->y>bottom)bottom=b->y;if(c->y>bottom)bottom=c->y;
        if(left<0)left=0;if(top<0)top=0;
        if(right>=(int32_t)gCubeWindowWidth)right=(int32_t)gCubeWindowWidth-1;
        if(bottom>=(int32_t)gCubeWindowHeight)bottom=(int32_t)gCubeWindowHeight-1;
        for(int32_t y=top;y<=bottom;y++)for(int32_t x=left;x<=right;x++) {
            int64_t e0=edge(a,b,x,y),e1=edge(b,c,x,y),e2=edge(c,a,x,y);
            if((e0>=0&&e1>=0&&e2>=0)||(e0<=0&&e1<=0&&e2<=0))pixel(pixels,x,y,faces[i].rgba);
        }
    }
}
void cube_edges(uint8_t *pixels,const CubeVertex vertices[8]) {
    for(unsigned i=0;i<12;i++) {
        int32_t x=vertices[edges[i][0]].x,y=vertices[edges[i][0]].y;
        int32_t endX=vertices[edges[i][1]].x,endY=vertices[edges[i][1]].y;
        int32_t dx=endX-x;if(dx<0)dx=-dx;
        int32_t dy=endY-y;if(dy>0)dy=-dy;
        int32_t sx=x<endX?1:-1,sy=y<endY?1:-1,error=dx+dy;
        for(;;) {
            pixel(pixels,x,y,0x08090dff);if(x==endX&&y==endY)break;
            int32_t doubled=error*2;
            if(doubled>=dy){error+=dy;x+=sx;}if(doubled<=dx){error+=dx;y+=sy;}
        }
    }
}
