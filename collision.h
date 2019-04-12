#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

#include "background.h"
#include "personnage.h"
SDL_Color GetPixel (SDL_Surface *pSurface , int x , int y);
void update_points_de_collision(perssonage* hero);
int collision_player_map_droite(background* acteurs , perssonage* hero);
int collision_player_map_gauche(background* acteurs , perssonage* hero);
int collision_player_map_top(background* acteurs , perssonage* hero);
int collision_player_map_bas(background* acteurs , perssonage* hero);

#endif // COLLISION_H_INCLUDED
