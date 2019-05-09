#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "objet.h"
#include "ennemy.h"
#include "perso.h"
#include <SDL/SDL_image.h>
/**
* @file main.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date Apr 01, 2015
*
* Testing program for background scrollilng
*
*/
int main(void){

SDL_Surface *screen;
SDL_Surface *image;

ennemy sac;
ennemy sac2;
objet o;
objet o1;
objet o2;
perssonage p,p2;
char pause;
SDL_Rect positionscreen;
SDL_Event event;
SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(1200,400,32,SDL_HWSURFACE|SDL_DOUBLEBUF);


image =IMG_Load("bg.png");

positionscreen.x=0;
positionscreen.y=0;
p.image= IMG_Load("zeineb.png");
sac.image= IMG_Load("s3.png");
sac2.image=IMG_Load("empty.png");
//p2.image= IMG_Load("zeineb2.png");
init_ennemy(&sac);
init_ennemy(&sac2);
init_objet (&o,300,350,"o.png");
init_objet (&o1,400,320,"o1.png");
init_objet (&o2,500,300,"o2.png");
initialiser_perso(&p);
//initialiser_perso(&p2);


int done =1 ;
while (done)
{

SDL_BlitSurface(image,NULL,screen,&positionscreen);


afficher_ennemy(sac,screen);
afficher_objet(o,screen);
afficher_objet(o1,screen);
afficher_objet(o2,screen);
afficherperso( p, screen);


deplacer_ennemy (&sac);
animate_ennemy(&sac);

animate_Perso(&p);


while(SDL_PollEvent(&event))
{
switch(event.type)
{
case SDL_QUIT:
done= 0;
break;

case SDL_KEYDOWN:
 { switch (event.key.keysym.sym) {
   case SDLK_ESCAPE:
   done =0;
   break;
   case SDLK_s:
     p.position.y=p.position.y+50;
     break;
   case SDLK_z:
   p.position.y=p.position.y-50;
     break;
   case SDLK_d:
   p.position.x=p.position.x+50;
   p.image= IMG_Load("zeineb.png");
   afficherperso( p, screen);
   animate_Perso(&p);
  break;
   case SDLK_q:
   {p.position.x=p.position.x-50;
    p.image= IMG_Load("zeineb2.png");
   afficherperso( p, screen);
   animate_Perso(&p);

    break;}
}
 }




}





if (p.position.x>=300)
{
sac.image=IMG_Load("zeineb3.png");
SDL_BlitSurface(sac.image,NULL,screen,&sac.position);
sac.position.x=sac.position.x-50;
}



if (p.position.x+200==sac.position.x)
{
p.image=IMG_Load("zeineb4.png");
SDL_BlitSurface(p.image,NULL,screen,&p.position);
}

if(p.position.x+70>=sac.position.x)

sac.position.y=1000;


}





SDL_Flip(screen);

}








SDL_FreeSurface(image);


SDL_Quit();

return EXIT_SUCCESS;
pause= getchar();
return 0;

}


