// aula_01.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

  // variaveis globais
int a; // inteiro
float b; //real (pouca precisao)
double c; //real (grande precisao)


int main()
{   
	
	//variaveis locais
	char d; // caractere
	bool e;// boleano
   printf_s("Hello, World!! \n \n");
   printf("Teste\t\t\Teste \n \n");
   printf("\tA\t B\t c\t \n");
   printf("\tA\t B\t c\t \n");
   printf("\tA\t B\t c\t \n");
   printf_s("Mostrando o %i, que eh um numero real \n", 4.3);
   printf("olha so esse numero %i");
   int f;
   f = 8;
   a = f * 2;

   printf("\n o resultado da multiplicacao de %i por 2 eh: %i \n", f, a);

   scanf_s("%i", &a);
   printf_s("\n\n O valor digitado foi: %i", a);

   system("pause");
   
}

