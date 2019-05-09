#ifndef Voiture_H
#define Voiture_H
#include <SDL/SDL.h>
#include "background.h"

		

		
struct player{
	SDL_Rect position;
	SDL_Surface * image[5];
	int score;
	int vie;
	
	int direction; //0:right 1:left 2:up
	int moving; //0:not moving 1:moving
	float Mass;

	double velocity;
	double acceleration;
};
typedef struct player player;

int loadImages(player * A);

void initplayer(player *A);

void moveplayer(player *A,Background *B,Uint32 dt);


void freeplayer(player *A);

#endif
