#ifndef TTERRENO_H
#define TTERRENO_H
#define PI 3.14159265

#include <stdio.h>
#include <stdlib.h>

typedef struct terreno tTerreno; 

tTerreno* leTerreno ();
void calculaArea(tTerreno* terreno);
void calculaValor (tTerreno* terreno);
void imprimeCirculares(tTerreno** terrenos, int qntVezes);
void imprimeRetangulares(tTerreno** terrenos, int qntVezes);
void imprimeTriangulares(tTerreno** terrenos, int qntVezes);
void destroi_terreno(tTerreno* terreno);
// void destroi_terrenos(tTerreno** terreno);

#endif