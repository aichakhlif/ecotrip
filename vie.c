#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "vie.h"



void initialiservie(vie *v)
{
v->posvie.x=0;
v->posvie.y=0;
v->posgameo.x=250;
v->posgameo.y=250;
v->vie0= IMG_Load("vie0.png");
v->vie1= IMG_Load("vie1.png");
v->vie2= IMG_Load("vie2.png");
v->vie3= IMG_Load("vie3.png");
v->vie3= IMG_Load("gameo.png");
//int viee=0;
}

void affichervie0( vie v, SDL_Surface *screen)
{
SDL_BlitSurface(v.vie0,NULL,screen,&v.posvie);
}
void affichervie1( vie v, SDL_Surface *screen)
{
SDL_BlitSurface(v.vie1,NULL,screen,&v.posvie);
}
void affichervie2( vie v, SDL_Surface *screen)
{
SDL_BlitSurface(v.vie2,NULL,screen,&v.posvie);
}
void affichervie3( vie v, SDL_Surface *screen)
{
SDL_BlitSurface(v.vie3,NULL,screen,&v.posvie);
}
void affichergameo( vie v, SDL_Surface *screen)
{
SDL_BlitSurface(v.gameo,NULL,screen,&v.posgameo);
}

    
    
    

