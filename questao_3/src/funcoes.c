#include <string.h>
#include <stdio.h>
#include "funcoes.h"

void compara_ponteiros(double *ponteiro_1, double *ponteiro_2){

	if(ponteiro_1 == ponteiro_2)
		printf("Os enderecos sao iguais.\n");
	else
		printf("Os enderecos sao diferentes.\n");
}

void  leiaString(char *s, int n){

	char c;
	int i = 0;
	
	printf("Digite o texto: ");
	c = getchar();
	
	while(c != '\n' && i != n-2){
		s[i++] = c;
		c = getchar();
	}
	
	s[i] = '\0';
}

void compara_strings(char *s1, char *s2){

	if(strcmp(s1, s2) == 0){
		printf("s1 = %s, s2 = %s\n", s1, s2);
		printf("As strings, s1 e s2, sao iguais\n");
	}	
	else
		printf("As strings, s1 e s2, sao diferentes\n");
}

