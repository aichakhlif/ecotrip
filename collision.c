#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include "SDL/SDL_mixer.h"
#include "collision.h"
#include "scrolling.h"


SDL_Color GetPixel(SDL_Surface* pSurface, int x, int y)
{
  SDL_Color color;
  Uint32 col = 0;
  //determine position
  char* pPosition = (char*) pSurface->pixels;
  //offset by y
  pPosition += (pSurface->pitch * y);
  //offset by x
  pPosition += (pSurface->format->BytesPerPixel * x);
  //copy pixel data
  memcpy (&col, pPosition, pSurface->format->BytesPerPixel);
  //convert color
  SDL_GetRGB (col, pSurface->format, &color.r , &color.g, &color.b);
  return (color);
}


int collision_p1(SDL_Surface *back,perso p1,scrol s)
{
	int verif=0;
	int i;
	SDL_Color couleur[1];

	couleur[0] =    GetPixel(back,s.positioncamera.x+250,s.positioncamera.y+400);

for(i=0;i<1;i++)
	{
		if((couleur[i].r == 238) && ((couleur[i].g == 238) && (couleur[i].b == 238))) 
		{
			verif=1;
			break;
		}


}
	return verif;
}
