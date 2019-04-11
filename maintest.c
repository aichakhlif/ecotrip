#include"loadimg.h"
#include"scrol.h"
#include"collision.h"
#include "ennemi.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#define WIDTH 1000
#define HEIGHT 600


int main ( int argc, char* argv[] )
{

        scrol s;
        enemi e;
       SDL_Surface *ecran = NULL,*back=NULL,*back2=NULL,*back3=NULL;
       SDL_Surface *pers[6];
       SDL_Rect positionFond,pos;
       SDL_Surface*idle;
       SDL_Surface *walk[7];
       int x,y;
   int i=0,j=1,k=0;
   float t=1000/20;
   int done=0;
        SDL_Rect positionback,positioncap,positionback3,positionback2;
        
        positionback.x=0;
        positionback.y=0;
        positionFond.x=0;
        positionFond.y=0;
        pos.x=300;
    bool b[4]={0,0,0,0};
    pos.y=150;

        
        loadimg(&e);
        back= IMG_Load("back.png");
        
       
      
       
        SDL_Event event;
        int gameover = 1;
        int test=0,test2=0;
        int keys[323] = {0};
	
        init_ennemi(&e) ;

        init_camera(&s); 
        SDL_Init(SDL_INIT_VIDEO);

        ecran = SDL_SetVideoMode(WIDTH, HEIGHT, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

        SDL_WM_SetCaption("FAIRY TAIL ", NULL);
        
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
if(collision_p1(back,e,s)==0)
{

                            updateennemi(&e,test);
                            set_camera_left(&s,&e,test);
}
if(collision_p1(back,e,s)==1)

{ 
updateennemi(&e,2);
set_camera_right(&s,&e,2);


}


                             //SDL_BlitSurface(back1,  &(s.positioncamera), ecran, &positionback1); 


               
                            //test=1;







                        }
                                 if(keys[SDLK_RIGHT])
{
test=2;
if(collision_p1(back,e,s)==0)
{
                            
                            updateennemi(&e,test);
                            set_camera_right(&s,&e,test);

}

 if(collision_p1(back,e,s)==1)

{ 
updateennemi(&e,1);
set_camera_left(&s,&e,1);



}
            


                           //SDL_BlitSurface(back1,  &(s.positioncamera), ecran, &positionback1);
                                                          //test==2;
                           



                        }
                                if(keys[SDLK_UP])
{
                           test=3; 
test2=0;
                            if(collision_p1(back,e,s)==0)
{
                            updateennemi(&e,test);
                            set_camera_up(&s,&e,test);
}
if(collision_p1(back,e,s)==1)

{ 
updateennemi(&e,4);
set_camera_down(&s,&e,4);


}

                            //SDL_BlitSurface(back1, &(s.positioncamera), ecran, &positionback1);
                            //test==3;



                       }
                                  if(keys[SDLK_DOWN])
{
                        
                           
test=4;
                           
                           if(collision_p1(back,e,s)==0)
{ 
                            updateennemi(&e,test);
                            set_camera_down(&s,&e,test);
                                                         
}
if(collision_p1(back,e,s)==1)

{ 
updateennemi(&e,3);
set_camera_up(&s,&e,3);


}
                            




                       }
                  



                           


SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));


SDL_BlitSurface(back,NULL,ecran,&positionback);  
SDL_BlitSurface(back,&(s.positioncamera), ecran,&positionback);  






displayennemi(e,ecran,test) ;



 SDL_Flip(ecran);
}
}


ennemi_freeennemi(&e);

      
   /* SDL_Surface  *imageDeFond = NULL;
    SDL_Rect positionFond,pos;
    SDL_Surface*idle;
    SDL_Surface *walk[6];
    int x,y;
   int i=0,j=1,k=0;
   float t=1000/20;
   int done=0;*/
   /* positionFond.x = 0;
    positionFond.y =0;
    pos.x=300;
    bool b[4]={0,0,0,0};
    pos.y=150;*/

    

 idle=IMG_Load("pics/1.png");

SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(idle, NULL, ecran, &pos);
SDL_Flip(ecran);

   while(!done)
   {
     
     
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {


    if(event.type==SDL_QUIT)
    {
        done=1;

    }

         switch(event.type)
         {
          case SDL_MOUSEBUTTONUP:
                {
                SDL_GetMouseState(&x,&y);
                

                   while(pos.x < x)
      {
        walk_anim(walk);
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(walk[i], NULL, ecran, &pos);

    SDL_Flip(ecran);
    SDL_Delay(t);
    if (x - pos.x > 10)
    {
pos.x+=10;
}
else 
{
  pos.x+=x-pos.x;
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(idle, NULL, ecran, &pos);

    SDL_Flip(ecran);

}
   
i++;
if(i==5)
{

i=0;

}
}


      
      
      while(pos.x > x)
      {
walk_back_anim(walk);
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(walk[j], NULL, ecran, &pos);


    SDL_Flip(ecran);
    SDL_Delay(t);
if (x - pos.x < 10)
    {
pos.x-=10;
}
else 
{
  pos.x-=x-pos.x;
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(idle, NULL, ecran, &pos);

    SDL_Flip(ecran);

}
   
j--;
if(j==0)
{
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(idle, NULL, ecran, &pos);

    SDL_Flip(ecran);

j=5;

}



}

      


break;
}

           case SDL_QUIT:
           done=1;
           break;
           case SDL_KEYDOWN:
           {
             switch(event.key.keysym.sym)
             {
                case SDLK_UP:
                b[0]=1;
                break;
                case SDLK_LEFT:
                b[1]=1;
                break;
                case SDLK_DOWN:
                b[2]=1;
                break;
                case SDLK_RIGHT:
                b[3]=1;
                break;
                


             }
             break;



           }



           case SDL_KEYUP:
           {
             switch(event.key.keysym.sym)
             {
                case SDLK_UP:
                b[0]=0;
                break;
                case SDLK_LEFT:
                b[1]=0;
                break;
                case SDLK_DOWN:
                b[2]=0;
                case SDLK_RIGHT:
                b[3]=0;
                break;






             }
             break;



           }
           

            

         }


    }

if(b[3])  {

walk_anim(walk);
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(walk[i], NULL, ecran, &pos);

    SDL_Flip(ecran);
    SDL_Delay(t);
pos.x+=10;
   
i++;
if(i==5)
{

i=0;

}



}

if(b[1]){
  walk_back_anim(walk);
SDL_BlitSurface(back, NULL, ecran, &positionFond);
SDL_BlitSurface(walk[j], NULL, ecran, &pos);


    SDL_Flip(ecran);
    SDL_Delay(t);
pos.x-=10;
   
j--;
if(j==0)
{

j=6;

}

}

   } 
   

    SDL_FreeSurface(back);   
    SDL_Quit();

    return EXIT_SUCCESS;


        return 0;
}
                       


