prog:background.o personnage.o math.o main.o
	gcc background.o personnage.o math.o main.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
background.o:background.c
	gcc -c background.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
personnage.o:personnage.c
	gcc -c personnage.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
math.o:math.c
	gcc -c math.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
