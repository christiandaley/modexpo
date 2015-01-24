#Makefile for modexpo_test
#Run modexpo_test in order to test the mod_expo() function with various inputs

all:  modexpo.c modexpo.h modexpo_test.c
	gcc -o modexpo modexpo.c modexpo_test.c
clean:
	-rm *.o
	-rm modexpo