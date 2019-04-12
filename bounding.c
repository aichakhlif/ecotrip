#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include<SDL/SDL_ttf.h>


 int main(void) {
int directionSDL=0;
   int collision = 0;
  int game =1;
   SDL_Event event;
   SDL_Surface *screen=NULL,*instruction=NULL,*pomme=NULL,*tanit=NULL,*enigme=NULL;
  SDL_Rect positionpomme,postanit,posenigme,posinst;

SDL_Init(SDL_INIT_VIDEO);
pomme=IMG_Load("perso.png");
if (pomme==NULL){
printf("Unable to load png : %s\n",SDL_GetError());
return 1;
}
tanit=IMG_Load("shark.png");
if (tanit==NULL){
printf("Unable to load png : %s\n",SDL_GetError());
return 1;
}


screen = SDL_SetVideoMode(1200, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
positionpomme.x=20;
positionpomme.y=450;
positionpomme.w=pomme->w;
positionpomme.h=pomme->h;
postanit.x=400;
postanit.y=450;
postanit.w=tanit->w;
postanit.h=tanit->h;


instruction=IMG_Load("vie0.png");
if (instruction==NULL){
printf("Unable to load png : %s\n",SDL_GetError());
return 1;
}
posinst.x=0;
posinst.y=0;
SDL_Flip(screen);
SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);
while (game)
{
  //input from SDL
  while(SDL_PollEvent(&event)){
        switch (event.type)
        {
        // exit if the window is closed
        case SDL_QUIT:
            game = 0;
            break;
        case SDL_KEYDOWN:
        {

            if (event.key.keysym.sym == SDLK_RIGHT)
              directionSDL = 1;

            if (event.key.keysym.sym == SDLK_LEFT)
              directionSDL = 2;

        }
        break;
        case SDL_KEYUP:
          directionSDL=0;
        break;

        }
      }
      //input from arduino


        //update ( from SDL events and ARDUINO events)

        //check collision
        if(positionpomme.x+positionpomme.w<postanit.x)
            collision=0;
        
       else if(collision=1)
            postanit.x=600;





        if(collision == 1){
          printf("\n COLLISION RIGHT SENDING 1 TO SERIAL");
          //........................
        
         game=1;
        }
          else {
        printf("\n NO COLLISION SENDING 0 TO SERIAL");
        //..........................
        }

        if((directionSDL == 1 ) && !collision){
             positionpomme.x += 1;

        }
        if ((directionSDL == 2 ) && !collision){
          positionpomme.x -= 1;
        }

        SDL_FillRect(screen, 0, SDL_MapRGB(screen->format, 255,255, 255));
        SDL_BlitSurface(instruction,NULL,screen,&posinst);
        SDL_BlitSurface(pomme ,NULL, screen, &positionpomme );
        SDL_BlitSurface(tanit ,NULL, screen, &postanit );
        SDL_Flip( screen );
        //printf("\nReceived from Arduino :%d ",received);
}


SDL_FreeSurface(instruction);
SDL_FreeSurface(pomme);
SDL_FreeSurface(tanit);
SDL_Quit();
return EXIT_SUCCESS;
}
