/*
 * ArrayUtils.c
 *
 *  Created on: 25/11/2022
 *      Author: 2011022
 */

#include "ArrayUtils.h"

int indexOf(int array[], int value, int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return i;
		}
	}
	return -1;
}

int indexOfmax(int array[], int size) {
	int max =array[0];
int index = 0;
	for (int i=1; i< size ;i++) {
		if (array[i]> max) {
			max=array [i];
			index =i;
		}
	}
	return index;
}
int indexofmin(int array [],int size){
int min =array[0];
int index=0;
for (int i=1;i< size ;i++){
if (array[i]> min){
min= array [i];
index=i;
}
}
return index;
}










