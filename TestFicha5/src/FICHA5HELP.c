/*
 * FICHA5HELP.c
 *
 *  Created on: 18/11/2022
 *      Author: 2011022
 */

#include "FICHA5HELP.h"

FICHA5HELP::FICHA5HELP()
{
	// TODO Auto-generated constructor stub

}

ICHA5HELP::~FICHA5HELP()
{
	// TODO Auto-generated destructor stub
}

void calcular tempo de trabalho (int he, int me, int se, int hs,int ms, int ss){
	int hes =he*3600 + me*60 +se;
int hss =hs * 3600 + ms *60 +ss;
int diff= hss - hes;

int horas = diff / 3600;
int resto_horas =diff %3600;

int minutos =resto_horas / 60;
int segundos = resto_horas % 60;
printf("total em segundos: %i \n",diff);
printf("horas: %i,", horas);
printf("minutos: %i,",minutos);
printf("segundos: %i,",segundos);

}

void advinha (){
int t =0;
srand(uni)




















