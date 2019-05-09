/**
* @file objet.c
*/



#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "objet.h"
#include <SDL/SDL_image.h>

/**
* @file objet.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2015
*
* Testing program for object bliting
*
*/

/**
* @brief To initialize the object .
* @param o the object
* @param x the position.x of the object 
* @param y the position.y of the object
* @return Nothing
*/
void init_objet (objet *o,int x,int y,char* objetname)
{
o->position.x=x;
o->position.y=y;
o->image= IMG_Load(objetname);

}

/**
* @brief To blit the object o .
* @param scren the screen
* @param o the object
* @return Nothing
*/


void afficher_objet(objet o,SDL_Surface *screen)
{
SDL_BlitSurface(o.image,NULL,screen,&o.position);
}
