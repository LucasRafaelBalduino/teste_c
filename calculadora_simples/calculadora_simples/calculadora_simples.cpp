// calculadora_simples.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>




int LerNumeroInteiro() {
	printf_s("Calculadora Top:\n");
	int numero;
	scanf("%i", &numero);
	//int sub, mais, div, mult;
	//scanf("%i", &calc);
	return numero;
}

char Operador() {
	printf("Qual é a operacao?");
		char oper;
		scanf("%i", &oper);
		return oper;
}


float Calculadora_Soma(int a, int b){
	return (a + b);
}

float Calculadora_Subtracao(int a, int b) {
	return (a - b);
}

float Calculadora_Divicao(float a, float b) {
	return (a / b);
}

float Calculadora_Multiplicacao(int a, int b) {
	return (a * b);
}


int main()
{


	int primeiroNumero = LerNumeroInteiro();
	int segundoNumero = LerNumeroInteiro();
	int s = Calculadora_Soma(primeiroNumero, segundoNumero);
	int sub = Calculadora_Subtracao(primeiroNumero, segundoNumero);
	float div = Calculadora_Divicao(primeiroNumero, segundoNumero);
	int mult = Calculadora_Multiplicacao(primeiroNumero, segundoNumero);
	printf_s("A soma dos resultados foi : %i \n", s);
	printf_s("A subtracao do resultado foi: %i \n", sub);
	printf_s("A Divicao do resultado foi: %f \n", div);
	printf_s("A Multiplicacao do resultado foi: %i \n", mult);

	system("pause");

}







