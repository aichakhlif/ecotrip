#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "defs.h"
#include "player.h"
#include "background.h"
#include <stdio.h>

int loadImages(player * A)
{
	int i;
	char buf[50];
	char buf0[]="../images/image";
	char bmp[]=".bmp";
	for(i=0; i<4; i++) {
		sprintf(buf,"%s%d%s",buf0,i,bmp);
		A->image[i] = SDL_LoadBMP(buf);
		if (A->image[i]== NULL) {
			printf("Unable to load  Voiture bitmap:\n");
			return (-1);
		}
		// set the color of Voiture background (white color) as transparent
		SDL_SetColorKey( A->image[i], SDL_SRCCOLORKEY, SDL_MapRGB(A->image[i]->format, 255, 255, 255) );
	}
	return(0);
}

void initplayer(player *A)
{
	A->direction=0;
	A->position.x=0;
	A->position.y=SCREEN_H - A->image[0]->h;
	A->position.w=A->image[0]->w;
	A->position.h=A->image[0]->h;
	A->score=0;
	A->vie=5;
	A->velocity=0; //velocity=0
	A->acceleration=0;
	A->Mass=70;
	A->moving=0;
}

void moveplayer(player *A,Background *B,Uint32 dt)
{A->position.x+=0.002*dt+0.5*dt*dt*A->acceleration;

		//Partie 1
}

void freeplayer(player *A)
{
	int i;
	for(i=0; i<4; i++)
		SDL_FreeSurface(A->image[i]);
}
