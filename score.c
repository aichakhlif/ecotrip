#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "score.h"

void initialiserscore(score *s)
{
s->posscore.x=450;
s->posscore.y=19;
int scoree=0;
char scoret[20]="";

}

void afficherscore( score s, SDL_Surface *screen)
{
SDL_BlitSurface(s.texte2,NULL,screen,&s.posscore);
}

void scoref(score *s)
{
TTF_Init();
TTF_Font *police = NULL;
SDL_Color couleurNoire = {0, 0, 0};

/* Chargement de la police */
police = TTF_OpenFont("HelloFirstieBigGulp.ttf", 25);
if(!police) {
    printf("TTF_OpenFont: %s\n", TTF_GetError());
}

   s->scoree++;
   SDL_Delay(100);

sprintf(s->scoret,"score: %d ", s->scoree);
SDL_FreeSurface(s->texte2); 
s->texte2 = TTF_RenderText_Blended(police,s->scoret,couleurNoire);

TTF_CloseFont(police);
TTF_Quit();

}
