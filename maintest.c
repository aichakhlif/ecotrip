#include"animation.h"
#include"scrolling.h"
#include"collision.h"
#include "bounding.h"
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#define WIDTH 1000
#define HEIGHT 600


int main ( int argc, char* argv[] )
{
int directionSDL=0;
   int collisionb = 0;
  int game =1;

   SDL_Event event;
   SDL_Surface *screen=NULL,*pomme=NULL,*tanit=NULL,*enigme=NULL;
  SDL_Rect positionpomme,postanit,posenigme,posinst;


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


SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);
        perso p1;
        scrol s;
       
        SDL_Surface *ecran = NULL,*back=NULL;
        SDL_Surface *pers[6];
     
        SDL_Rect positionback,positioncap,positionback3,positionback2;
        
        positionback.x=0;
        positionback.y=0;
        
	positionpomme.x=20;
	positionpomme.y=450;
	positionpomme.w=pomme->w;
	positionpomme.h=pomme->h;
	postanit.x=50;
	postanit.y=50;
	postanit.w=tanit->w;
	postanit.h=tanit->h;

        
        loadimg(&p1);
        back= IMG_Load("back.png");
        //back2= IMG_Load("Calque 6.png");
        //back3= IMG_Load("Calque 6.png");

       
       // SDL_BlitSurface(back1,NULL, ecran,&positionback1);

        //SDL_BlitSurface(back,NULL, ecran,&positionback);
       

        int gameover = 1;
        int test=0,test2=0;
        int keys[323] = {0};
	
        init_perso(&p1) ;

        init_camera(&s); 
        SDL_Init(SDL_INIT_VIDEO);

        ecran = SDL_SetVideoMode(WIDTH, HEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

        SDL_WM_SetCaption("zeineb ", NULL);
        
test=0;

        SDL_EnableKeyRepeat(100,100);
        while(gameover)
        {
	
        
                while(SDL_PollEvent(&event)){
                
                                          switch(event.type)
                        {
                        case SDL_QUIT:
                                gameover = 0;
                                break;
                       case SDL_KEYDOWN:
				keys[event.key.keysym.sym] = 1;				
				break;

			case SDL_KEYUP:
				keys[event.key.keysym.sym] = 0;
				
				break;
}
                                 if(keys[SDLK_LEFT])
{
test=1;
if(collision_p1(back,p1,s)==0)
{

                            updateperso(&p1,test);
                            set_camera_left(&s,&p1,test);
}
if(collision_p1(back,p1,s)==1)

{ 
updateperso(&p1,2);
set_camera_right(&s,&p1,2);


}


                             //SDL_BlitSurface(back1,  &(s.positioncamera), ecran, &positionback1); 


               
                            //test=1;







                        }
                                 if(keys[SDLK_RIGHT])
{
test=2;
if(collision_p1(back,p1,s)==0)
{
                            
                            updateperso(&p1,test);
                            set_camera_right(&s,&p1,test);

}

 if(collision_p1(back,p1,s)==1)

{ 
updateperso(&p1,1);
set_camera_left(&s,&p1,1);



}
            


                           //SDL_BlitSurface(back1,  &(s.positioncamera), ecran, &positionback1);
                                                          //test==2;
                           



                        }
                                if(keys[SDLK_UP])
{
                           test=3; 
test2=0;
                            if(collision_p1(back,p1,s)==0)
{
                            updateperso(&p1,test);
                            set_camera_up(&s,&p1,test);
}
if(collision_p1(back,p1,s)==1)

{ 
updateperso(&p1,4);
set_camera_down(&s,&p1,4);


}

                            //SDL_BlitSurface(back1, &(s.positioncamera), ecran, &positionback1);
                            //test==3;



                       }
                                  if(keys[SDLK_DOWN])
{
                        
                           
test=4;
                           
                           if(collision_p1(back,p1,s)==0)
{ 
                            updateperso(&p1,test);
                            set_camera_down(&s,&p1,test);
                                                         
}
if(collision_p1(back,p1,s)==1)

{ 
updateperso(&p1,3);
set_camera_up(&s,&p1,3);


}
                            //SDL_BlitSurface(back1, &(s.positioncamera), ecran, &positionback1);
                            //test==4;




                       }
                  


SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
//updateperso(&p1,&p2,test,test2);

SDL_BlitSurface(back,NULL,ecran,&positionback);  
SDL_BlitSurface(back,&(s.positioncamera), ecran,&positionback);  



//SDL_BlitSurface(s.camera,&(s.positioncamera), ecran,NULL);


displayperso(p1,ecran,test) ;



 SDL_Flip(ecran);
}
}


perso_freeperso1(&p1);
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
        SDL_Quit();
        return 0;
}}
                       


