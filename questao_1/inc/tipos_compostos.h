#ifndef TIPOS_COMPOSTOS_H
#define TIPOS_COMPOSTOS_H

typedef struct _vertice{
  float coordenada_x;
  float coordenada_y;
} Vertice;

typedef struct _triangulo{
  Vertice vertice_A, vertice_B, vertice_C;
} Triangulo;

#endif
