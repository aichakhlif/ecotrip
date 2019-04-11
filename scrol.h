#ifndef SCROL_H_INCLUDED
#define SCROL_H_INCLUDED
#include "ennemi.h"
#include<stdio.h>
#include<stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
typedef struct scrol
{
SDL_Rect positioncamera ; 
SDL_Surface *camera; 
} scrol;
void init_camera(scrol *s) ; 
void set_camera(scrol *s);





#endif
