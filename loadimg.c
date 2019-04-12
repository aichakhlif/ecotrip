#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "loadimg.h"
#include <string.h>
#include "/usr/include/SDL/SDL.h"
#include "/usr/include/SDL/SDL_image.h"
#include "/usr/include/SDL/SDL_mixer.h"
#include "/usr/include/SDL/SDL_ttf.h"

void walk_anim(SDL_Surface *walk[])
{

walk[0]=IMG_Load("pics/0.png");
walk[1]=IMG_Load("pics/1.png");
walk[2]=IMG_Load("pics/2.png");
walk[3]=IMG_Load("pics/3.png");
walk[4]=IMG_Load("pics/4.png");
walk[5]=IMG_Load("pics/5.png");
walk[6]=IMG_Load("pics/6.png");

}


void walk_back_anim(SDL_Surface *back[])
{
back[0]=IMG_Load("pics/8.png");
back[1]=IMG_Load("pics/9.png");
back[2]=IMG_Load("pics/10.png");
back[3]=IMG_Load("pics/11.png");
back[4]=IMG_Load("pics/12.png");
back[5]=IMG_Load("pics/13.png");
back[6]=IMG_Load("pics/14.png");




}
/*
void slide_anim(SDL_Surface *slide[])
{


slide[0]=IMG_Load("pics/sliding_01.png");

slide[1]=IMG_Load("pics/sliding_02.png");
slide[2]=IMG_Load("pics/sliding_03.png");
slide[3]=IMG_Load("pics/sliding_04.png");
slide[4]=IMG_Load("pics/sliding_05.png");
slide[5]=IMG_Load("pics/sliding_06.png");
slide[6]=IMG_Load("pics/sliding_07.png"); 
slide[7]=IMG_Load("pics/sliding_08.png");
slide[8]=IMG_Load("pics/sliding_09.png");
slide[9]=IMG_Load("pics/sliding_10.png");
 
}
*/

/*void jump_anim(SDL_Surface *slide_back[])
{


slide_back[0]=IMG_Load("pics/jump_01.png");
slide_back[1]=IMG_Load("pics/jump_02.png");   
slide_back[2]=IMG_Load("pics/jump_03.png");
slide_back[3]=IMG_Load("pics/jump_04.png");
slide_back[4]=IMG_Load("pics/1.png");
/*
slide_back[5]=IMG_Load("pics/jump_06.png");
slide_back[6]=IMG_Load("pics/jump_07.png"); 
slide_back[7]=IMG_Load("pics/jump_08.png");
slide_back[8]=IMG_Load("pics/jump_09.png");
slide_back[9]=IMG_Load("pics/jump_10.png");

 
}*/




