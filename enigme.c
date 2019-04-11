#include<stdio.h>
#include<string.h>
#include"enigme.h"



void functionenigme( SDL_Surface *screen){
SDL_Surface *answer=NULL,*enigme=NULL;
SDL_Rect posanswer,posenigme;
SDL_Event event;
Mix_Chunk *sound;
sound=Mix_LoadWAV("correct.wav");
int done=1;

posenigme.x=699;
posenigme.y=14;
enigme=IMG_Load("enigme1.png");
SDL_BlitSurface(enigme,NULL,screen,&posenigme);
SDL_Flip(screen);

while(done)
{  while(SDL_PollEvent(&event)){
  switch (event.type)
  {case SDL_KEYDOWN:
    if (event.key.keysym.sym == SDLK_a)
    { answer=IMG_Load("wronganswer.png");
      posanswer.x=699;
      posanswer.y=293;
      SDL_BlitSurface(answer,NULL,screen,&posanswer);
      SDL_Flip(screen);
      Mix_PlayChannel(-1,sound,0);
       SDL_Delay(1000);
       done=0;
    }
    if (event.key.keysym.sym == SDLK_b)
    {answer=IMG_Load("wronganswer.png");
      posanswer.x=699;
      posanswer.y=358;
      SDL_BlitSurface(answer,NULL,screen,&posanswer);
      SDL_Flip(screen);
      Mix_PlayChannel(-1,sound,0);
       SDL_Delay(1000);
       done=0;
    }
    if (event.key.keysym.sym == SDLK_c)
    {sound=Mix_LoadWAV("correct.wav");
    Mix_PlayChannel(-1,sound,0);
      answer=IMG_Load("rightanswer.png");
      posanswer.x=699;
      posanswer.y=423;
      SDL_BlitSurface(answer,NULL,screen,&posanswer);
      SDL_Flip(screen);

       SDL_Delay(1000);
      done=0;
    }
    if (event.key.keysym.sym == SDLK_d)
    {answer=IMG_Load("wronganswer.png");
      posanswer.x=699;
      posanswer.y=488;
      SDL_BlitSurface(answer,NULL,screen,&posanswer);
      SDL_Flip(screen);
      Mix_PlayChannel(-1,sound,0);
       SDL_Delay(1000);
       done=0;
    }

}
}}
Mix_FreeChunk(sound);
SDL_FreeSurface(answer);
SDL_FreeSurface(enigme);
}

 int main(void) {
int directionSDL=0;
   int collision = 0;
  int game =1;
   SDL_Event event;
   SDL_Surface *screen=NULL,*enigme1=NULL,*sirene=NULL,*shark=NULL,*enigme=NULL;
  SDL_Rect positionsirene,posshark,posenigme,posinst;

SDL_Init(SDL_INIT_VIDEO);
sirene=IMG_Load("sirene.gif");
if (sirene==NULL){
printf("Unable to load png : %s\n",SDL_GetError());
return 1;
}
shark=IMG_Load("shark.png");
if (shark==NULL){
printf("Unable to load png : %s\n",SDL_GetError());
return 1;
}


screen = SDL_SetVideoMode(1200, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
positionsirene.x=20;
positionsirene.y=460;
positionsirene.w=sirene->w;
positionsirene.h=sirene->h;
posshark.x=460;
posshark.y=450;
posshark.w=shark->w;
posshark.h=shark->h;


enigme1=IMG_Load("vie0.png");
if (enigme1==NULL){
printf("Unable to load png : %s\n",SDL_GetError());
return 1;
}
posinst.x=30;
posinst.y=30;
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
        if(positionsirene.x+positionsirene.w<posshark.x)
            collision=0;
        else
            collision=1;




        if(collision == 1){
          printf("\n COLLISION RIGHT SENDING 1 TO SERIAL");
          //........................
         functionenigme(screen);
         game=0;
        }
          else {
        printf("\n NO COLLISION SENDING 0 TO SERIAL");
        //..........................
        }

        if((directionSDL == 1 ) && !collision){
             positionsirene.x += 1;

        }
        if ((directionSDL == 2 ) && !collision){
          positionsirene.x -= 1;
        }

        SDL_FillRect(screen, 0, SDL_MapRGB(screen->format, 255,255, 255));
        SDL_BlitSurface(enigme1,NULL,screen,&posinst);
        SDL_BlitSurface(sirene ,NULL, screen, &positionsirene );
        SDL_BlitSurface(shark ,NULL, screen, &posshark );
        SDL_Flip( screen );
        //printf("\nReceived from Arduino :%d ",received);
}


SDL_FreeSurface(enigme1);
SDL_FreeSurface(sirene);
SDL_FreeSurface(shark);
SDL_Quit();
return 0;
}
