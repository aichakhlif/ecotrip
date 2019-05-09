#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct 

{

SDL_Surface *personnage;

    int status;
    float x,y;
    float vx,vy;
SDL_Rect R;


}
Sprite;


void initialiser_perso(Sprite* Sp);
void afficherperso(Sprite Sp , SDL_Surface *screen);

#endif // COLLISION_H_INCLUDED
