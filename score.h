#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct score
{
SDL_Rect posscore;
SDL_Surface *texte2;
char scoret[20];
int scoree;
}score;


void initialiserscore(score *s);
void afficherscore( score s, SDL_Surface *screen);
void scoref(score *s);
#endif // SCORE_H_INCLUDED
