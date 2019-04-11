#include <stdio.h>
#include "SDL/SDL.h"
#include "ennemy.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>


void init_ennemy(ennemy *e)
{
e->image= IMG_Load("s.png");
e->camera[0].x=250;
e->camera[0].y=550;
e->camera[0].w=250;
e->camera[0].h=200;
e->camera[1].x=900;
e->camera[1].y=550;
e->camera[1].w=300;
e->camera[1].h=200;
e->camera[2].x=1590;
e->camera[2].y=550;
e->camera[2].w=200;
e->camera[2].h=200;
e->position.x=300;
e->position.y=150;
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
e->position.x-=signe1*1;
}

void animate_ennemy(ennemy *e)
{

e->frame ++;
if ((e->frame)>2)
(e->frame)=0;
SDL_Delay(200);

}



