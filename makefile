app: main.o lib.o
	gcc -o lib.o main.o
main.o: main.c
	gcc -c main.c
lib.o: lib.c
	gcc -c lib.c
	