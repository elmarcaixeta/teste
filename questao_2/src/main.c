/*
 * Sintese: ordenar vetor em ordem crescente ou decrescente
 * Entradas: tamanho do vetor, inteiro para o vetor e escolha de ordenação
 * Saida: vetor ordenado
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcoes_vetor.h"
#include "funcoes_visao.h"

int main(){
    /*Declaraçoes*/
    int *vetor;
    int tamanho_vetor;

    // alocação completa do vetor, tamanho e malloc
    tamanho_vetor = le_tamanho_vetor();
    vetor = malloc(tamanho_vetor * sizeof(int));

    // guarda, ordena, e mostra inteiros na tela
    le_inteiros_vetor(vetor, tamanho_vetor);
    ordena_vetor(vetor, tamanho_vetor);
    mostra_vetor_ordenado(vetor, tamanho_vetor);

    // libera memoria 
    free(vetor);
    return 0;
}
