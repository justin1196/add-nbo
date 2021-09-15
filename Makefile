#Makefile
all: add_nbo

add_nbo: add_nbo.o
	gcc -o add_nbo add_nbo.o

add_nbo.o: add_nbo.c
	gcc -c -o add_nbo.o add_nbo.c

clean: 
	rm -f add_nbo
	rm -f *.o


