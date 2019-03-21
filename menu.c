#include <stdio.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_audio.h>
#include <SDL/SDL_mixer.h>


int main(void){
int x;
SDL_Surface *screen;

SDL_Surface *image;
SDL_Surface *bs1;
SDL_Surface *bs2;
SDL_Surface *bs3;
SDL_Surface *boutonplay;
SDL_Surface *boutonoptions;
SDL_Surface *boutoncredits;
SDL_Surface *boutonquit;
SDL_Surface *boutonplay2;
SDL_Surface *boutonoptions2;
SDL_Surface *boutoncredits2;
SDL_Surface *boutonquit2;
SDL_Surface *boutondroite1;
SDL_Surface *boutondroite2;
SDL_Surface *boutongauche1;
SDL_Surface *boutongauche2;
SDL_Surface *boutonstart1;
SDL_Surface *boutonstart2;
SDL_Surface *boutonstart3;
SDL_Surface *boutonstart4;
SDL_Surface *boutonstart5;
SDL_Surface *boutonstart6;
SDL_Surface *boutonretour1;
SDL_Surface *boutonretour2;




SDL_Rect positionecran;

SDL_Rect positionboutonplay;
SDL_Rect positionboutonoptions;
SDL_Rect positionboutoncredits;
SDL_Rect positionboutonquit;
SDL_Rect positionboutonplay2;
SDL_Rect positionboutonoptions2;
SDL_Rect positionboutoncredits2;
SDL_Rect positionboutonquit2;
SDL_Rect positionClic;
SDL_Rect positionboutondroite1;
SDL_Rect positionboutondroite2;
SDL_Rect positionboutongauche1;
SDL_Rect positionboutongauche2;
SDL_Rect positionboutonstart1;
SDL_Rect positionboutonstart2;
SDL_Rect positionboutonstart3;
SDL_Rect positionboutonstart4;
SDL_Rect positionboutonstart5;
SDL_Rect positionboutonstart6;
SDL_Rect positionboutonretour1;
SDL_Rect positionboutonretour2;
SDL_Event event;


char pause;



if(SDL_Init(SDL_INIT_VIDEO)!=0){
printf("Unable to initialize SDL:%s\n",SDL_GetError());
return 1;
}
screen=SDL_SetVideoMode(614,465,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
if (screen==NULL){
printf("Unable to set 600x400 video: %s\n",SDL_GetError());
return 1;
}


image = SDL_LoadBMP("bb.bmp");


if (image==NULL){
printf("Unable to load bitmap: %s\n",SDL_GetError());
return 1;
}

bs1 = SDL_LoadBMP("s1.bmp");


if (image==NULL){
printf("Unable to load bitmap: %s\n",SDL_GetError());
return 1;
}

bs2 = SDL_LoadBMP("s2.bmp");


if (image==NULL){
printf("Unable to load bitmap: %s\n",SDL_GetError());
return 1;
}

bs3 = SDL_LoadBMP("bs3.bmp");


if (image==NULL){
printf("Unable to load bitmap: %s\n",SDL_GetError());
return 1;
}


boutonplay = IMG_Load("play4.png");
positionboutonplay.x = 225;
positionboutonplay.y =125;

if (boutonplay==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonplay2 = IMG_Load("play2.png");
positionboutonplay2.x = positionboutonplay.x;
positionboutonplay2.y = positionboutonplay.y;

if (boutonplay2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}


boutonoptions = IMG_Load("options4.png");
positionboutonoptions.x = 225;
positionboutonoptions.y =185;

if (boutonoptions==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonoptions2 = IMG_Load("option2.png");
positionboutonoptions2.x =positionboutonoptions.x ;
positionboutonoptions2.y =positionboutonoptions.y ;

if (boutonoptions2==NULL)
{
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutoncredits= IMG_Load("credits4.png");
positionboutoncredits.x = 225;
positionboutoncredits.y =242;

if (boutoncredits==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutoncredits2= IMG_Load("credits2.png");
positionboutoncredits2.x = positionboutoncredits.x ;
positionboutoncredits2.y = positionboutoncredits.y;

if (boutoncredits2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonquit = IMG_Load("quit4.png");
positionboutonquit.x = 225;
positionboutonquit.y =298;

if (boutonquit==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonquit2 = IMG_Load("quit2.png");
positionboutonquit2.x = positionboutonquit.x;
positionboutonquit2.y = positionboutonquit.y;

if (boutonquit2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutondroite1 = IMG_Load("boutondroite1.bmp");

SDL_SetColorKey(boutondroite1, SDL_SRCCOLORKEY, SDL_MapRGB(boutondroite1->format, 255, 255, 255));

positionboutondroite1.x = 535;
positionboutondroite1.y =220;

if (boutondroite1==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutondroite2 = IMG_Load("boutondroite2.bmp");
SDL_SetColorKey(boutondroite2, SDL_SRCCOLORKEY, SDL_MapRGB(boutondroite2->format, 255, 255, 255));
positionboutondroite2.x = positionboutondroite1.x;
positionboutondroite2.y =positionboutondroite1.y;

if (boutondroite2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutongauche1 = IMG_Load("boutongauche1.bmp");
SDL_SetColorKey(boutongauche1, SDL_SRCCOLORKEY, SDL_MapRGB(boutongauche1->format, 255, 255, 255));
positionboutongauche1.x = 38;
positionboutongauche1.y =220;

if (boutongauche1==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutongauche2 = IMG_Load("boutongauche2.bmp");
SDL_SetColorKey(boutongauche2, SDL_SRCCOLORKEY, SDL_MapRGB(boutongauche2->format, 255, 255, 255));
positionboutongauche2.x = positionboutongauche1.x;
positionboutongauche2.y =positionboutongauche1.y;

if (boutongauche2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonretour1 = IMG_Load("Rmenu1.bmp");
SDL_SetColorKey(boutonretour1, SDL_SRCCOLORKEY, SDL_MapRGB(boutonretour1->format, 255, 255, 255));
positionboutonretour1.x = 535;
positionboutonretour1.y =19;

if (boutonretour1==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonretour2 = IMG_Load("Rmenu2.bmp");
SDL_SetColorKey(boutonretour2, SDL_SRCCOLORKEY, SDL_MapRGB(boutonretour2->format, 255, 255, 255));
positionboutonretour2.x = positionboutonretour1.x;
positionboutonretour2.y =positionboutonretour1.y;

if (boutonretour2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}
boutonstart1 = IMG_Load("start1.png");
positionboutonstart1.x = 225;
positionboutonstart1.y =295;

if (boutonstart1==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonstart2 = IMG_Load("start2.png");
positionboutonstart2.x = positionboutonstart1.x;
positionboutonstart2.y = positionboutonstart1.y;

if (boutonstart2==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}



boutonstart3 = IMG_Load("start3.png");
positionboutonstart3.x = 225;
positionboutonstart3.y =295;

if (boutonstart3==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonstart4 = IMG_Load("start4.png");
positionboutonstart4.x = positionboutonstart3.x;
positionboutonstart4.y = positionboutonstart3.y;

if (boutonstart4==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonstart5 = IMG_Load("start5.png");
positionboutonstart5.x = 225;
positionboutonstart5.y =295;

if (boutonstart5==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}

boutonstart6 = IMG_Load("start6.png");
positionboutonstart6.x = positionboutonstart5.x;
positionboutonstart6.y = positionboutonstart5.y;

if (boutonstart6==NULL){
printf("Unable to load png: %s\n",SDL_GetError());
return 1;
}



positionecran.x = 0;
positionecran.y = 0;


if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{
printf("%s",Mix_GetError());
}
Mix_Music *music;
music = Mix_LoadMUS("gow.mp3");
Mix_PlayMusic(music,-1);

/*if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{
printf("%s",Mix_GetError());
}
Mix_Music *musics;
musics = Mix_LoadMUS("clic.mp3");*/



int done =1 ;
int interface=1;
while(done)
{
if(interface==1)
{SDL_BlitSurface(image,NULL,screen,&positionecran);
SDL_BlitSurface(boutonplay,NULL,screen,&positionboutonplay);
SDL_BlitSurface(boutonoptions,NULL,screen,&positionboutonoptions);
SDL_BlitSurface(boutoncredits,NULL,screen,&positionboutoncredits);
SDL_BlitSurface(boutonquit,NULL,screen,&positionboutonquit);
}
else if(interface==2)
{
SDL_BlitSurface(bs1,NULL,screen,&positionecran);

SDL_BlitSurface(boutondroite1,NULL,screen,&positionboutondroite1);
SDL_BlitSurface(boutonstart1,NULL,screen,&positionboutonstart1);
SDL_BlitSurface(boutonretour1,NULL,screen,&positionboutonretour1);
}
else if(interface==3)
{
SDL_BlitSurface(bs2,NULL,screen,&positionecran);
SDL_BlitSurface(boutondroite1,NULL,screen,&positionboutondroite1);
SDL_BlitSurface(boutongauche1,NULL,screen,&positionboutongauche1);
SDL_BlitSurface(boutonstart3,NULL,screen,&positionboutonstart3);
SDL_BlitSurface(boutonretour1,NULL,screen,&positionboutonretour1);
}
else if(interface==4)
{
SDL_BlitSurface(bs3,NULL,screen,&positionecran);
SDL_BlitSurface(boutondroite1,NULL,screen,&positionboutondroite1);
SDL_BlitSurface(boutongauche1,NULL,screen,&positionboutongauche1);
SDL_BlitSurface(boutonstart5,NULL,screen,&positionboutonstart5);
SDL_BlitSurface(boutonretour1,NULL,screen,&positionboutonretour1);
}


while(SDL_PollEvent(&event))
{
switch(event.type)
{
case SDL_QUIT:
done= 0;
break;

case SDL_MOUSEBUTTONUP:
{
if (event.button.button == SDL_BUTTON_LEFT)
{
positionClic.x = event.button.x;//On récupére les coordonnées de souris
positionClic.y = event.button.y;

if(event.motion.x > positionboutonplay.x && event.motion.x <(positionboutonplay.x+positionboutonplay.w) && event.motion.y > positionboutonplay.y && event.motion.y < (positionboutonplay.y+positionboutonplay.h))
{

interface=2;

}
else if (event.button.x > positionboutonquit.x && event.button.x <(positionboutonquit.x+positionboutonquit.w) && event.button.y > positionboutonquit.y && event.button.y < (positionboutonquit.y+positionboutonquit.h)&&(interface==1))
{
//On quitte
SDL_BlitSurface(boutonquit,NULL,screen,&positionboutonquit);
//SDL_Flip(screen);
exit(0);
//Mix_PlayMusic(musics,-1);
}
else if(event.button.x > positionboutondroite1.x && event.button.x <(positionboutondroite1.x+positionboutondroite1.w) && event.button.y > positionboutondroite1.y && event.button.y < (positionboutondroite1.y+positionboutondroite1.h)&&(interface==2))
{
interface=3; 

}
else if(event.button.x > positionboutongauche1.x && event.button.x <(positionboutongauche1.x+positionboutongauche1.w) && event.button.y > positionboutongauche1.y && event.button.y < (positionboutongauche1.y+positionboutongauche1.h)&&(interface==3))
{
interface=2; 

}
else if(event.button.x > positionboutondroite1.x && event.button.x <(positionboutondroite1.x+positionboutondroite1.w) && event.button.y > positionboutondroite1.y && event.button.y < (positionboutondroite1.y+positionboutondroite1.h)&&(interface==3))
{
interface=4; 

}
else if(event.button.x > positionboutongauche1.x && event.button.x <(positionboutongauche1.x+positionboutongauche1.w) && event.button.y > positionboutongauche1.y && event.button.y < (positionboutongauche1.y+positionboutongauche1.h)&&(interface==4))
{
interface=3; 

}
else if(event.button.x > positionboutonretour1.x && event.button.x <(positionboutonretour1.x+positionboutonretour1.w) && event.button.y > positionboutonretour1.y && event.button.y < (positionboutonretour1.y+positionboutonretour1.h)&&((interface==2)||(interface==3)||(interface==4)))
{
interface=1; 

}


}
}

case SDL_MOUSEMOTION: 
{
if (event.motion.x > positionboutonplay.x && event.motion.x <(positionboutonplay.x+positionboutonplay.w) && event.motion.y > positionboutonplay.y && event.motion.y < (positionboutonplay.y+positionboutonplay.h)&&(interface==1)) //Jouer
{
boutonplay = IMG_Load("play2.png");
//SDL_BlitSurface(boutonplay2,NULL,screen,&positionboutonplay2);
//SDL_Flip(screen);

}
else if (event.motion.x > positionboutonoptions.x && event.motion.x <(positionboutonoptions.x+positionboutonoptions.w) && event.motion.y > positionboutonoptions.y && event.motion.y < (positionboutonoptions.y+positionboutonoptions.h)&&(interface==1)) 
{
boutonoptions = IMG_Load("option2.png");
//SDL_Flip(screen);
}
else if(event.motion.x > positionboutoncredits.x && event.motion.x <(positionboutoncredits.x+positionboutoncredits.w) && event.motion.y > positionboutoncredits.y && event.motion.y < (positionboutoncredits.y+positionboutoncredits.h)&&(interface==1)) 
{
boutoncredits = IMG_Load("credits2.png");

}
else if(event.motion.x > positionboutonquit.x && event.motion.x <(positionboutonquit.x+positionboutonquit.w) && event.motion.y > positionboutonquit.y && event.motion.y < (positionboutonquit.y+positionboutonquit.h)&&(interface==1)) 
{
boutonquit = IMG_Load("quit2.png");

}
else if(event.motion.x > positionboutondroite1.x && event.motion.x <(positionboutondroite1.x+positionboutondroite1.w) && event.motion.y > positionboutondroite1.y && event.motion.y < (positionboutondroite1.y+positionboutondroite1.h)&&(interface==2)&&(interface==3)&&(interface==4)) 
{
boutondroite1 = IMG_Load("boutondroite2.bmp");

}
else if(event.motion.x > positionboutongauche1.x && event.motion.x <(positionboutongauche1.x+positionboutongauche1.w) && event.motion.y > positionboutongauche1.y && event.motion.y < (positionboutongauche1.y+positionboutongauche1.h)&&(interface==3)&&(interface==4))
{
boutongauche1 = IMG_Load("boutongauche2.bmp");

}
else if(event.motion.x > positionboutonstart1.x && event.motion.x <(positionboutonstart1.x+positionboutonstart1.w) && event.motion.y > positionboutonstart1.y && event.motion.y < (positionboutonstart1.y+positionboutonstart1.h)&&(interface==2)) 
{
boutonstart1 = IMG_Load("start2.png");

}
else if(event.motion.x > positionboutonstart3.x && event.motion.x <(positionboutonstart3.x+positionboutonstart3.w) && event.motion.y > positionboutonstart3.y && event.motion.y < (positionboutonstart3.y+positionboutonstart3.h)&&(interface==3)) 
{
boutonstart3 = IMG_Load("start4.png");

}
else if(event.motion.x > positionboutonstart5.x && event.motion.x <(positionboutonstart5.x+positionboutonstart5.w) && event.motion.y > positionboutonstart5.y && event.motion.y < (positionboutonstart5.y+positionboutonstart5.h)&&(interface==4)) 
{
boutonstart5 = IMG_Load("start6.png");

}
else if(event.motion.x > positionboutonretour1.x && event.motion.x <(positionboutonretour1.x+positionboutonretour1.w) && event.motion.y > positionboutonretour1.y && event.motion.y < (positionboutonretour1.y+positionboutonretour1.h)&&(interface==2)&&(interface==3)&&(interface==4)) 
{
boutonretour1 = IMG_Load("Rmenu2.bmp");

}

}break;


case SDL_KEYDOWN:
 { 
switch (event.key.keysym.sym) 
{
   case SDLK_ESCAPE:
   done =0;
   break;

 case SDLK_p: 
                    if(Mix_PausedMusic() == 1)//Si la musique est en pause
                    {
                        Mix_ResumeMusic(); //Reprendre la musique
                    }
                    else
                    {
                        Mix_PauseMusic(); //Mettre en pause la musique
                    }
                    break;
 }
}
}
}
SDL_Flip(screen);
}

Mix_FreeMusic(music);
//Mix_FreeMusic(musics);
SDL_FreeSurface(image);
SDL_FreeSurface(boutonplay);
SDL_FreeSurface(boutonoptions);
SDL_FreeSurface(boutoncredits);
SDL_FreeSurface(boutonquit);
SDL_FreeSurface(boutonplay2);
SDL_FreeSurface(boutonoptions2);
SDL_FreeSurface(boutoncredits2);
SDL_FreeSurface(boutonquit2);
SDL_FreeSurface(bs1);
SDL_FreeSurface(bs2);
SDL_FreeSurface(bs3);
SDL_FreeSurface(boutondroite1);
SDL_FreeSurface(boutondroite2);
SDL_FreeSurface(boutongauche1);
SDL_FreeSurface(boutongauche2);
SDL_FreeSurface(boutonstart1);
SDL_FreeSurface(boutonstart2);
SDL_FreeSurface(boutonstart3);
SDL_FreeSurface(boutonstart4);
SDL_FreeSurface(boutonstart5);
SDL_FreeSurface(boutonstart6);
SDL_FreeSurface(boutonretour1);
SDL_FreeSurface(boutonretour2);


SDL_Quit();

return EXIT_SUCCESS;
pause= getchar();
return 0;

}
