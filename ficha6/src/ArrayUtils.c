/*
 * ArrayUtils.c
 *
 *  Created on: 25/11/2022
 *      Author: 2011022
 */

#include "ArrayUtils.h"

int index Of (int array[], int value,int size){
for(int i = 0; i < size ;i++){
if(array[i]== value){
return i;
}
}
return -1
}
int indexOf max(int array[],int value,int size){
int max=array[0];int index=0;
for (int i=1; i< size ,i++){
if (array[i]> max){
max=array [i];
index =i ;
}
}
return index;
return EXIT_SUCCES















