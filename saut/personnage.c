

#define STAT_SOL 0
#define STAT_AIR 1

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "personnage.h"

void initialiser_perso(Sprite* Sp)
{
  Sp->personnage = IMG_Load("hero2.bmp");
SDL_SetColorKey(Sp->personnage, SDL_SRCCOLORKEY, SDL_MapRGB(Sp->personnage->format, 255, 255, 255));

    Sp->x = 150.0f;
    Sp->y = 250.0f;
    Sp->status = STAT_SOL;
    Sp->vx = Sp->vy = 0.0f;


  

}

void afficherperso(Sprite Sp, SDL_Surface *screen)
{
     Sp.R.x = (Sint16)Sp.x;
     Sp.R.y = (Sint16)Sp.y;
     Sp.R.w = 20;
     Sp.R.h = 40;

SDL_BlitSurface(Sp.personnage,NULL,screen,&Sp.R);
}
