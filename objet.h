#ifndef FONCTIONS_H_
#define FONCTIONS_H_
#include <SDL/SDL_image.h>

/**
* @struct objet
* @brief struct for objet
*/
typedef struct objet
{
SDL_Rect position;/*!< Rectangle*/
SDL_Surface *image;/*!< Surface. */
}objet;



void init_objet (objet *o,int x,int y,char *objetname);
void afficher_objet(objet o,SDL_Surface *screen);



#endif
