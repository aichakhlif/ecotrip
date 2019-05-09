prog:main.o work.o 
	gcc  main.o work.o  -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL -g
work.o:work.c
	gcc -c work.c -g

