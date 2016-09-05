#include <stdio.h>
#include <stdlib.h>
#include "funcoes_vetor.h"
#include "funcoes_visao.h"

int le_tamanho_vetor(){
    int tamanho_vetor;

    system("clear");
    printf("Digite a quantidade de inteiros para serem armazenados: ");
    scanf("%d", &tamanho_vetor);

    return tamanho_vetor;
}

void le_inteiros_vetor(int *vetor, int tamanho_vetor){
    int i;

    printf("\n");
    for (i = 0; i < tamanho_vetor; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void mostra_vetor_ordenado(int *vetor, int tamanho_vetor){
    int i;

    system("clear");
    printf("Inteiros ordenados = ");
    for(i = 0; i < tamanho_vetor; i++){
      printf("%d ", vetor[i]);
    }
    printf("\n\n");
}
