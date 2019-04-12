#include"scrolling.h"
#include"animation.h"
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#define WIDTH 8000
#define HEIGHT 600

void init_camera(scrol *s)  
{
//s->bleu
//s1-orange
        s->positioncamera.x=1000;
        s->positioncamera.y=600;
        s->positioncamera.w=1000;
        s->positioncamera.h=600;
	
}


void set_camera_left(scrol *s,perso *p1,int test)
{
if(test==1)
{
if (s->positioncamera.x>(p1->positionperso.x-p1->positionperso.w*.5)-(WIDTH*.5))
{
s->positioncamera.x -=40;
s->positioncamera.y+=10;
}
else
{ 
s->positioncamera.x -=40; 
s->positioncamera.y+=10;
} 
}}



void set_camera_right(scrol *s,perso *p1,int test)
{
if (test==2)
{
if (s->positioncamera.x>(p1->positionperso.x-p1->positionperso.w*.5)-(WIDTH*.5))
{
s->positioncamera.x +=40;
s->positioncamera.y-=10;
}
else 
{
s->positioncamera.x +=40;
s->positioncamera.y-=10;

} 
}
}



void set_camera_up(scrol *s,perso *p1,int test)
{
if (test==3)
{
if (s->positioncamera.x>(p1->positionperso.y-p1->positionperso.h*.5)-(HEIGHT*.5))
{

s->positioncamera.x -=40;
s->positioncamera.y-=40;
}
else
{
s->positioncamera.x -=40;
s->positioncamera.y-=40;
} 
}
}


void set_camera_down(scrol *s,perso *p1,int test)
{
if (test==4)
{
if (s->positioncamera.x>(p1->positionperso.y-p1->positionperso.h*.5)-(HEIGHT*.5))
{
s->positioncamera.x +=40;
s->positioncamera.y+=40;
}
else
{
s->positioncamera.x +=40;
s->positioncamera.y+=40; 
}
}
}









     
