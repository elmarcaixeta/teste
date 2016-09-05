/*
 * Sintese: Calcular area, perimetro, existencia e lados de um triangulo e mostrar na tela
 * Entradas: Coordenadas x e y dos 3 vertices do triangulo
 * Saida: Area, perimetro, existencia e lados do triangulo
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcoes_visao.h"
#include "operacoes_geometricas.h"
#include "tipos_compostos.h"

// Definicoes de constantes
#define TAMANHO 3

int main(){
	/*Declaracoes*/
	Triangulo triangulo;
	Vertice vertice_A, vertice_B, vertice_C;
	float distancia[TAMANHO], area, perimetro;

	/*Desenvolvimento*/
	system("clear");

	do{
		
		vertice_A = le_vertice('A');
		vertice_B = le_vertice('B');
		vertice_C = le_vertice('C');

	} while(!verifica_existencia_triangulo(vertice_A, vertice_B, vertice_C));

	// Realizacao de todos os calculos
	triangulo = cria_triangulo(vertice_A, vertice_B, vertice_C);
	calcula_lado_triangulo(triangulo, distancia);
	area = calcula_area_triangulo(triangulo);
	perimetro = calcula_perimetro_triangulo(triangulo, distancia);

	mostra_na_tela(distancia, area, perimetro);

	return 0;
}
