#ifndef ENNEMI_H_INCLUDED
#define ENNEMI_H_INCLUDED
#include "scrol.h"
#include "ennemi.h"

SDL_Color GetPixel(SDL_Surface* pSurface, int x, int y);
int collision_p1(SDL_Surface *back2,enemi e,scrol s);

#endif

