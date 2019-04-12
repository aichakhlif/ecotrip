#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

typedef struct perso
{
SDL_Rect positionperso ; 
int val1; 
int val2;
SDL_Surface *pers[6]; 
} perso ;
 

void init_perso(perso *p1) ;
void loadimg(perso *p1);
void updateperso(perso *p1,int test);
void displayperso(perso p1,SDL_Surface *ecran,int test);
void perso_freeperso1(perso *p1) ;





#endif
