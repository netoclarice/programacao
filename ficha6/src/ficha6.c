/*
 ============================================================================
 Name        : ficha6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[5] = {1, 2, 6, 3, 7};
int value=3;
int size=5;
int index = indexOf (array, value, size);
		printf ("o indice do valor  %i e: %i \n",value,index);
		return EXIT_SUCCESS;
}
