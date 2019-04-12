#ifndef VIE_H_INCLUDED
#define VIE_H_INCLUDED

typedef struct vie
{
SDL_Surface *vie0,*vie1,*vie2,*vie3,*gameo;
SDL_Rect posvie;
SDL_Rect posgameo;
//int viee;
}vie;

void initialiservie(vie *v);
void affichervie0( vie v, SDL_Surface *screen);
void affichervie1( vie v, SDL_Surface *screen);
void affichervie2( vie v, SDL_Surface *screen);
void affichervie3( vie v, SDL_Surface *screen);
void affichergameo( vie v, SDL_Surface *screen);

#endif // BACKGROUND_H_INCLUDED
