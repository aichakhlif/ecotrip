#ifndef SCOR_H_INCLUDED
#define SCOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

typedef struct mvt
{
  SDL_Surface *walk[7]; 
  SDL_Surface *back[7]; 
}mvt;
void walk_anim(SDL_Surface *walk[]);
void walk_back_anim(SDL_Surface *back[]);
#endif
