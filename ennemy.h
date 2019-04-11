#ifndef ENNEMY_H_
#define ENNEMY_H_
#include <stdio.h>
//#include <stdlib.h>
#include <SDL/SDL.h>
//#include "objet.h"
#include "ennemy.h"
#include <SDL/SDL_image.h>
//#include <SDL/SDL_mixer.h>
//#include <SDL/SDL_ttf.h>
typedef struct ennemy{
SDL_Rect position;
SDL_Rect camera[3];
SDL_Surface *image;
int frame;
}ennemy;





void init_ennemy(ennemy *e);
void afficher_ennemy(ennemy e,SDL_Surface *screen);
void deplacer_ennemy (ennemy *e);
void animate_ennemy(ennemy *e);





#endif
