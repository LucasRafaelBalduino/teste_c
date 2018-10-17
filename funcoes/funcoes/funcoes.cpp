// funcoes.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>



void Helloworld() {
	printf_s("Hello, World!! \n");
}

int Somar2Valores(int x, int y) {
	int c;
	c = x + y;
	return c;
}
int LerNumeroInteiro() {
	printf_s("Favor digite numeros inteiros:\n");
	int numero;
	scanf("%i", &numero);
	return numero;
}


int main()
{
	Helloworld();
	
	int a = Somar2Valores(55, 44);
	printf_s("Resultado da soma: %i \n", a); 

	int primeiroNumero = LerNumeroInteiro();
	int segundoNumero = LerNumeroInteiro();
	int d = Somar2Valores(primeiroNumero, segundoNumero);
	printf_s("O resultado da soma: %i \n", d);
	system("pause");

}