#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

typedef struct enemi
	{
		SDL_Rect positionennemi ; 
		SDL_Surface *image; 
	} enemi ;



void init_ennemi(enemi *e) ;
void loadimg(enemi *e);
void updateennemi(enemi *e,int test);
void displayennemi(enemi e,SDL_Surface *ecran,int test);
void ennemi_freeennemi(enemi *e) ;





#endif
