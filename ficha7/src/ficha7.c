/*
 ============================================================================
 Name        : ficha7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "strimutils.h"

int main(void) {
	char str[16] = "Clarice";

	reverseString(str);

	return EXIT_SUCCESS;
}

