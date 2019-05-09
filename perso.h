#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct perssonage

{SDL_Rect position;
SDL_Rect camera[5];
SDL_Surface *image;
int frame;



}
perssonage;

void initialiser_perso(perssonage *p);
void afficherperso(perssonage h, SDL_Surface *screen);
void animate_Perso(perssonage* p);
#endif // COLLISION_H_INCLUDED
