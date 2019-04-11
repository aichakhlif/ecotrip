#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "temps.h"




void initialisertemps(temps *t)
{

t->postemps.x = 250;
t->postemps.y = 19;
int tempsActuel = 0, tempsPrecedent = 0, compteur = 0;
char tempst[20]="";

}

void affichertemps( temps t, SDL_Surface *screen)
{
SDL_BlitSurface(t.texte,NULL,screen,&t.postemps);
}

//****************************fonction temps
void tempsf(temps *t)
{
TTF_Init();
TTF_Font *police = NULL;
SDL_Color couleurNoire = {0, 0, 0};

/* Chargement de la police */
police = TTF_OpenFont("HelloFirstieBigGulp.ttf", 25);
if(!police) {
    printf("TTF_OpenFont: %s\n", TTF_GetError());
}

t->tempsActuel = SDL_GetTicks();

if ( ((t->tempsActuel) - (t->tempsPrecedent)) >30 ) 
  {

t->compteur += 30; 
sprintf(t->tempst, "Temps : %d s", t->compteur / 1000);
SDL_FreeSurface(t->texte); 
t->texte = TTF_RenderText_Blended(police,t->tempst,couleurNoire);
t->tempsPrecedent = t->tempsActuel;
  }
TTF_CloseFont(police);
TTF_Quit();
}


