#ifndef ENNEMY_H_
#define ENNEMY_H_
#include <stdio.h>
//#include <stdlib.h>
#include <SDL/SDL.h>
//#include "objet.h"
#include <SDL/SDL_image.h>
//#include <SDL/SDL_mixer.h>
//#include <SDL/SDL_ttf.h>
/**
* @struct ennemy
* @brief struct for ennemy
*/
typedef struct ennemy{
SDL_Rect position;/*!< Rectangle*/
SDL_Rect camera[3];/*!< Rectangle*/
SDL_Surface *image;/*!< Surface. */
int frame;
}ennemy;





void init_ennemy(ennemy *e);
void afficher_ennemy(ennemy e,SDL_Surface *screen);
void deplacer_ennemy (ennemy *e);
void animate_ennemy(ennemy *e);





#endif
