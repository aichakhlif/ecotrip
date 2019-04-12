#include "icarus.h"
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>


void init_perso(perso *p1) 
{
 (p1->positionperso.x)=20;
 (p1->positionperso.y)=200;
 (p1->val1)=0 ;
 (p1->val2)=3 ;
 
 
}

void loadimg(perso *p1)
{
	
        (p1->pers[0])=IMG_Load("perso0.png");
	(p1->pers[1])=IMG_Load("perso1.png");
	(p1->pers[2])=IMG_Load("perso2.png");
	(p1->pers[3])=IMG_Load("perso3.png");
	(p1->pers[4])=IMG_Load("perso4.png");
	(p1->pers[5])=IMG_Load("perso5.png");
        
}

void displayperso(perso p1,SDL_Surface *ecran,int test)
{

if(test==1)
{
SDL_BlitSurface(p1.pers[p1.val2],NULL,ecran,&(p1.positionperso));
fprintf(stderr,"%d\n",p1.val2);
}
else  if(test==2)
{
SDL_BlitSurface(p1.pers[p1.val1],NULL,ecran,&(p1.positionperso));
fprintf(stderr,"%d\n",p1.val1);
}
 
else if(test==3)
{
SDL_BlitSurface(p1.pers[p1.val1],NULL,ecran,&(p1.positionperso));
}
 
else 
{
SDL_BlitSurface(p1.pers[p1.val1],NULL,ecran,&(p1.positionperso));
}

}

