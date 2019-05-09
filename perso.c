
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"

void initialiser_perso(perssonage *p)
{
p->image= IMG_Load("zeineb.png");
p->camera[0].x=43;
p->camera[0].y=255;
p->camera[0].w=250;
p->camera[0].h=110;
p->camera[1].x=394;
p->camera[1].y=243;
p->camera[1].w=250;
p->camera[1].h=110;
p->camera[2].x=754;
p->camera[2].y=259;
p->camera[2].w=250;
p->camera[2].h=110;
p->camera[3].x=1193;
p->camera[3].y=255;
p->camera[3].w=280;
p->camera[3].h=110;
p->camera[4].x=1594;
p->camera[4].y=259;
p->camera[4].w=390;
p->camera[4].h=110;
p->position.x=50;
p->position.y=200;
p->frame =0;

}

void afficherperso(perssonage h, SDL_Surface *screen)
{
    SDL_BlitSurface(h.image,&h.camera[h.frame],screen,&h.position);
}
void animate_Perso(perssonage* p)
{

p->frame ++;SDL_Delay(100);
if ((p->frame)>4)
(p->frame)=0;



}
