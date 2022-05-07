#
#
#
CC=gcc
CFLAGS=-Wall 
 
 
all : limits
.PHONY : all
 
limits : compute.o makros.o main.o
	$(CC) $(CFLAGS) -o limits compute.o makros.o main.o
 
compute.o : compute.c 
	$(CC) $(CFLAGS) -c -o compute.o compute.c
 
makros.o : makros.c 
	$(CC) -Wall -c -o makros.o makros.c
 
main.o : main.c 
	$(CC) -Wall -c -o main.o main.c
 
 

 
 
.PHONY: clean
clean : 
	rm -rf *.o