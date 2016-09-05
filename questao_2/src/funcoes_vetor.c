#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_vetor.h"

#define MAX_OPCAO 2

void ordenacao_decrescente(int *vetor, int tamanho_vetor){
	int i, j, min, troca; 
	for (i = 0; i < (tamanho_vetor-1); i++) {
		min = i;
		for (j = (i+1); j < tamanho_vetor; j++) { 
		  if(vetor[j] > vetor[min]) { 
		    min = j; 
		  } 
		} 
		if (i != min) { 
		  troca = vetor[i]; 
		  vetor[i] = vetor[min]; 
		  vetor[min] = troca; 
		} 
	} 
}

void ordenacao_crescente(int *vetor, int tamanho_vetor){
	int i, j, min, troca; 
	for (i = 0; i < (tamanho_vetor-1); i++) {
		min = i;
		for (j = (i+1); j < tamanho_vetor; j++) { 
		  if(vetor[j] < vetor[min]) { 
		    min = j; 
		  } 
		} 
		if (i != min) { 
		  troca = vetor[i]; 
		  vetor[i] = vetor[min]; 
		  vetor[min] = troca; 
		} 
	} 
}

void ordena_vetor(int *vetor, int tamanho_vetor){
	char opcao_ordenacao[MAX_OPCAO];

    printf("\nDigite o tipo de ornacao (-d -> crescente | -r -> decrescente): ");
    scanf("%s", opcao_ordenacao);

    if (strcmp(opcao_ordenacao, "-r") == 0) {
        ordenacao_decrescente(vetor, tamanho_vetor);
    } else {
        ordenacao_crescente(vetor, tamanho_vetor);
    }
}
