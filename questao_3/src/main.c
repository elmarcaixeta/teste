#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcoes.h"

#define MAX_CHAR 100
#define CONST_NUM1 7.3

int main(){
	/*Declarações*/
	double number1 = CONST_NUM1, number2;
	char s1[MAX_CHAR], s2[MAX_CHAR];
	double *dPtr;

	// atribuições
	dPtr = &number1;
	number2 = *dPtr;

	/*Visão inicial*/
	system("clear");
	printf("PONTEIROS\n");
	printf("Valor de number1 apartir de dPtr: %lf\n", *dPtr);
	printf("Valor armazenado em number2: %lf\n", number2);
	printf("Endereco de number1: %p\n", &number1);
	printf("Endereco armazenado em dPtr:%p\n", dPtr);

	compara_ponteiros(&number1, dPtr);

	/*Inicio de interação com o usuario*/
	printf("\nSTRINGS\n");
	
	leiaString(s1, MAX_CHAR);
	strcpy(s2, s1); // copia string s1 na string s2

	compara_strings(s1, s2);
	strncat(s1, s2, MAX_CHAR - strlen(s1)); // concatena as strings s1 e s2

	printf("Concatenacao de Strings = %s\n", s1);
	printf("Tamanho de s1 = %d\n", (int) strlen(s1));
	
	return 0;
}
