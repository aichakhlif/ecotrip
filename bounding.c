#include"animation.h"
#include"scrolling.h"
#include"collision.h"
#include "bounding.h"
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>



 void bounding(SDL_Surface *back2,perso p1,scrol s) {
   int collisionb = 0;
int directionSDL=0;  
int game =1;
        SDL_Surface *screen=NULL,*pomme=NULL,*tanit=NULL,*enigme=NULL;
  SDL_Rect positionpomme,postanit,posenigme,posinst;
if(positionpomme.x+positionpomme.w<postanit.x)
            collisionb=0;
        
       else if(collisionb=1)
            postanit.x=600;





        if(collisionb == 1){
          printf("\n COLLISION RIGHT SENDING 1 TO SERIAL");
          //........................
        
         game=1;
        }
          else {
        printf("\n NO COLLISION SENDING 0 TO SERIAL");
        //..........................
        }

        if((directionSDL == 1 ) && !collisionb){
             positionpomme.x += 1;

        }
        if ((directionSDL == 2 ) && !collisionb){
          positionpomme.x -= 1;
        }

        SDL_FillRect(screen, 0, SDL_MapRGB(screen->format, 255,255, 255));
     //   SDL_BlitSurface(instruction,NULL,screen,&posinst);
        SDL_BlitSurface(pomme ,NULL, screen, &positionpomme );
        SDL_BlitSurface(tanit ,NULL, screen, &postanit );
        SDL_Flip( screen );
        //printf("\nReceived from Arduino :%d ",received);



//SDL_FreeSurface(instruction);
//SDL_FreeSurface(pomme);
//SDL_FreeSurface(tanit);
SDL_Quit();

}
