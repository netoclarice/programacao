/*
 * ficha5.c
 *
 *  Created on: 11/11/2022
 *      Author: 2011022
 */

#include "ficha5.h"

void atm(float amount) {
	float balance = 5000;
	if (balance > amount) {
		float available = balance - amount;
		printf("levantou: %.2f€, saldo disponivel: %.2f€", amount, available);
	}else {
		puts("saldo insuficiente !!!");
	}
}
