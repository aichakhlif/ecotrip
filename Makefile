prog:objet.o main.o ennemy.o perso.o
	gcc objet.o main.o ennemy.o perso.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL -lm -g
ennemy.o:ennemy.c
	gcc -c ennemy.c -g
perso.o:perso.c
	gcc -c perso.c -g
objet.o:objet.c
	gcc -c objet.c -g
main.o:main.c
	gcc -c main.c -g
