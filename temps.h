#ifndef TEMPS_H_INCLUDED
#define TEMPS_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct temps 
{
SDL_Rect postemps;
int tempsActuel;
SDL_Surface *texte;
int tempsPrecedent, compteur;
char tempst[20];
}temps;

void initialisertemps(temps *t);
void affichertemps( temps t, SDL_Surface *screen);
void tempsf(temps *t);

#endif // TEMPS_H_INCLUDED
