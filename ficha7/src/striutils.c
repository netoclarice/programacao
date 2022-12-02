/*
 * striutils.c
 *
 *  Created on: 02/12/2022
 *      Author: 2011022
 */


#include <string.h>
#include "strimutils.h"


void reverseString(char str[]){

	int len = strlen(str);
	for (int i = len-1; i >= 0; i--) {

		printf("%c", str[i]);
	}

}

int indexOfchar(char str[],char character){
int len=strlen(str);
for(int i = 0; i < len ; i++){
if(character == str[i])
    return i;
}
return -1;
}

int main countVogals(char str[]){
char vogals [6]= "aeiou";
int count=0;
for(int i =0;i<stren(str);i++){
for(int j=0;j<stren(vogals);j++){
if (str[i]==vogals[j])
count++;
}
}
return 0;



















