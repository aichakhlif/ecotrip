#include <stdio.h>
#include "SDL/SDL.h"
#include "ennemy.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
/**
* @file ennemy.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2015
*
* Testing program for ennemy deplacement and animation
*
*/

void init_ennemy(ennemy *e)
{

e->camera[0].x=233;
e->camera[0].y=263;
e->camera[0].w=223;
e->camera[0].h=150;
e->camera[1].x=530;
e->camera[1].y=262;
e->camera[1].w=223;
e->camera[1].h=150;
e->camera[2].x=822;
e->camera[2].y=247;
e->camera[2].w=233;
e->camera[2].h=150;
e->position.x=900;
e->position.y=200;
e->frame =0;
}





void afficher_ennemy(ennemy e,SDL_Surface *screen)
{
  
SDL_BlitSurface(e.image,&e.camera[e.frame],screen,&e.position);
}


void deplacer_ennemy (ennemy *e)
{
int signe1 = (rand()%2)*2-1; // te genere -1 ou 1
e->position.x += signe1*8;
if ((e->position.x>320)||(e->position.x<270))
e->position.x-=signe1*8;
}

void animate_ennemy(ennemy *e)
{

e->frame ++;
if ((e->frame)>2)
(e->frame)=0;
//SDL_Delay(10);

}



