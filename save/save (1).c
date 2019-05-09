#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "save.h"

void initsave(saved *save ){
save->menu=IMG_Load("ress/submenu.png");
save->menurect.x=0;
save->menurect.y=0;
save->menurect.w=1300;
save->menurect.h=705;
}
void save(int level , int vie , int keys,SDL_Event ev,SDL_Surface *screen,saved * save,int time,int x , int y ,int camx)
{
int cont;
switch(ev.type)
{
case SDL_KEYDOWN:
 if(ev.key.keysym.sym==SDLK_ESCAPE){
while(cont){
SDL_BlitSurface(save->menu,NULL,screen,&save->menurect);
SDL_Flip(screen);
SDL_PollEvent(&ev);
switch(ev.type)
{case SDL_MOUSEBUTTONDOWN:
if( ev.button.button == SDL_BUTTON_LEFT )
		{
if(467<ev.button.y&&ev.button.y<522)
{if(205<ev.button.x&&ev.button.x<338)
{
cont=0;
    FILE *f;
    f=fopen("save.txt","w");
        fprintf(f,"%d %d %d %d %d %d %d",level, vie, keys,time,x,y,camx);
    fclose(f);
SDL_Delay(500);
SDL_Quit();
}else if(803<ev.button.x&&ev.button.x<911)
{
    FILE *f;
    f=fopen("save.txt","w");
        fprintf(f, "1 3 0 0 100 300 0 \n");
    fclose(f);
cont=0;
SDL_Delay(500);
SDL_Quit();
}
}
}
break;
}
}
break;
}

}
}
void load(saved *save)
{
    FILE *f;
    f=fopen("save.txt","r");
    fscanf(f,"%d %d %d %d %d %d %d",&save->level, &save->vie, &save->keys,&save->temp,&save->persox,&save->persoy,&save->camx);
    fclose(f);
}
