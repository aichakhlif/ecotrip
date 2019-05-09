#ifndef MYWORK_H_INCLUDED
#define MYWORK_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


typedef struct
{
SDL_Surface* e;
SDL_Surface* imageFond;
SDL_Rect positionFond;
SDL_Surface* imagemini;
SDL_Rect posmini;
SDL_Surface* imagenokta;
SDL_Rect posnokta;
}ecran;

typedef struct
{
SDL_Surface* personnage;
SDL_Rect posPer;
SDL_Event event ;
int continuer;
}perso;


void init_positions(ecran *e,perso *p);
void init_affich(ecran *e,perso *p);
void key_event ( perso *p,ecran *e);
#endif // MYWORK_H_INCLUDED

