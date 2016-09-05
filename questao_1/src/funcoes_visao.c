#include <stdio.h>
#include <stdlib.h>
#include "tipos_compostos.h"

Vertice le_vertice(char letra){
    Vertice vertice;

    printf("Digite as coordenadas do vertice %c\n", letra);
    printf("Coordenada X = ");
    scanf("%f", &vertice.coordenada_x);
    printf("Coordenada Y = ");
    scanf("%f", &vertice.coordenada_y);

    return vertice;
}

void mostra_na_tela(float *distancia, float area, float perimetro){
    system("clear");
    printf("Tamanho do lado AB = %.3f\n", distancia[0]);
	printf("Tamanho do lado AC = %.3f\n", distancia[1]);
	printf("Tamanho do lado BC = %.3f\n\n", distancia[2]);
    printf("Area total do triangulo = %.3f\n\n", area);
    printf("Perimetro total do triangulo = %.3f\n\n", perimetro);
}
