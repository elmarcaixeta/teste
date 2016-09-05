#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "tipos_compostos.h"
#include "operacoes_geometricas.h"

/*
 * Ordem das funções
 *      calcula_lado_triangulo
 *      calcula_perimetro_triangulo
 *      calcula_determinante
 *      calcula_area_triangulo
 *      verifica_existencia_triangulo
 *      cria_triangulo
 */

void calcula_lado_triangulo(Triangulo triangulo, float *distancia){
    float distancia_x, distancia_y;
    Vertice vertice_A = triangulo.vertice_A;
    Vertice vertice_B = triangulo.vertice_B;
    Vertice vertice_C = triangulo.vertice_C;

    distancia_x = (vertice_B.coordenada_x) - (vertice_A.coordenada_x);
    distancia_y = (vertice_B.coordenada_y) - (vertice_A.coordenada_y);
    distancia[0] = sqrt(distancia_x*distancia_x + distancia_y*distancia_y);

    distancia_x = (vertice_C.coordenada_x) - (vertice_A.coordenada_x);
    distancia_y = (vertice_C.coordenada_y) - (vertice_A.coordenada_y);
    distancia[1] = sqrt(distancia_x*distancia_x + distancia_y*distancia_y);

    distancia_x = (vertice_C.coordenada_x) - (vertice_B.coordenada_x);
    distancia_y = (vertice_C.coordenada_y) - (vertice_B.coordenada_y);
    distancia[2] = sqrt(distancia_x*distancia_x + distancia_y*distancia_y);
}

float calcula_perimetro_triangulo(Triangulo triangulo, float *distancia){
  float perimetro;

  calcula_lado_triangulo(triangulo, distancia);

  perimetro = distancia[0] + distancia[1] + distancia[2];

  return perimetro;
}

float calcula_determinante(Vertice vertice_A, Vertice vertice_B, Vertice vertice_C){
    float determinante;

    determinante = (((vertice_A.coordenada_x*vertice_B.coordenada_y) +
                   (vertice_A.coordenada_y*vertice_C.coordenada_x) +
                   (vertice_B.coordenada_x*vertice_C.coordenada_y)) -
                  ((vertice_A.coordenada_y*vertice_B.coordenada_x) +
                   (vertice_A.coordenada_x*vertice_C.coordenada_y) +
                   (vertice_B.coordenada_y*vertice_C.coordenada_x)));
    return determinante;
}

float calcula_area_triangulo(Triangulo triangulo){
    float determinante, area;
    Vertice vertice_A = triangulo.vertice_A;
    Vertice vertice_B = triangulo.vertice_B;
    Vertice vertice_C = triangulo.vertice_C;

    determinante = calcula_determinante(vertice_A, vertice_B, vertice_C);

    area = abs(determinante) * 0.5;

    return area;
}

int verifica_existencia_triangulo(Vertice vertice_A, Vertice vertice_B, Vertice vertice_C){
    float resultado_determinante;

    resultado_determinante = calcula_determinante(vertice_A, vertice_B, vertice_C);

    if (resultado_determinante != 0) {
        printf("\n\nCoordenadas validas para formar um triangulo!\n\n");
        return 1;
    }
    else {
        printf("\n\nCoordenadas invalidas para formar um triangulo!\n\n");
    }
    return 0;
}

Triangulo cria_triangulo(Vertice vertice_A, Vertice vertice_B, Vertice vertice_C){
    Triangulo triangulo;

    triangulo.vertice_A = vertice_A;
    triangulo.vertice_B = vertice_B;
    triangulo.vertice_C = vertice_C;

    return triangulo;
}
