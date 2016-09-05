#ifndef OPERACOES_GEOMETRICAS_H
#define OPERACOES_GEOMETRICAS_H

#include "tipos_compostos.h"

float calcula_area_triangulo(Triangulo triangulo);

float calcula_perimetro_triangulo(Triangulo triangulo, float *distancia);

void calcula_lado_triangulo(Triangulo triangulo, float *distancia);

float calcula_determinante(Vertice vertice_A, Vertice vertice_B, Vertice vertice_C);

int verifica_existencia_triangulo(Vertice vertice_A, Vertice vertice_B, Vertice vertice_C);

Triangulo cria_triangulo(Vertice vertice_A, Vertice vertice_B, Vertice vertice_C);

#endif
