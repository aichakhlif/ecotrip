typedef struct 
{
int vie;
int keys;
int level;
int temp;
SDL_Rect menurect;
SDL_Surface * menu;
int persox;
int persoy;
int camx;
}saved;
void initsave(saved *save );
void save(int level , int vie , int keys,SDL_Event ev,SDL_Surface *screen,saved * save,int time,int x , int y ,int camx);
void load(saved *save);
