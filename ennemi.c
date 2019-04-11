#include "ennemi.h"
#include "scrol.h"
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>


void init_ennemi(enemi *e) 
{
 (e->positionennemi.x)=750;
 (e->positionennemi.y)=200;
 
 
 
}

void loadimg(enemi *e)
{
	
        e->image=IMG_Load("shark.png");
	
        
}


void updateennemi(enemi *e,int test)
{
fprintf(stderr,"fil update test %d\n",test);
 if(test==1)


e->positionennemi.x += 20;



if(test==2)

e->positionennemi.x -= 20;

if(test==3)

e->positionennemi.y += 20;

if(test==4)

e->positionennemi.y -= 20;






}



void displayennemi(enemi e,SDL_Surface *ecran,int test)
{
fprintf(stderr,"9bal test %d\n",test);
if(test==1)
{
SDL_BlitSurface(e.image,NULL,ecran,&(e.positionennemi));
}
else  if(test==2)
{
SDL_BlitSurface(e.image,NULL,ecran,&(e.positionennemi));
}
 
else if(test==3)
{
SDL_BlitSurface(e.image,NULL,ecran,&(e.positionennemi));
}
 
else 
{
SDL_BlitSurface(e.image,NULL,ecran,&(e.positionennemi));
}

}



					








void ennemi_freeennemi(enemi *e) 
{

SDL_FreeSurface(e->image);



}











     



