#include "tTerreno.h"

struct terreno{
  char tipoTerreno;
  double raio;
  double comprimento;
  double largura;
  double area;
  double valor;
}; 

tTerreno* leTerreno() {
  tTerreno* terreno = (tTerreno*) malloc(sizeof(struct terreno));

  scanf("%c", &terreno->tipoTerreno);
  if (terreno->tipoTerreno == 'C'){
    scanf("%lf", &terreno->raio);
    setbuf(stdin, NULL);
  }
  else if (terreno->tipoTerreno == 'R' || terreno->tipoTerreno == 'T'){
    scanf("%lf %lf", &terreno->comprimento, &terreno->largura);
    setbuf(stdin, NULL);
  }
  
  return terreno;
}

void calculaArea(tTerreno* terreno){

  if (terreno->tipoTerreno == 'C'){
    terreno->area = PI * terreno->raio * terreno->raio;
  }
  else if (terreno->tipoTerreno == 'R' || terreno->tipoTerreno == 'T'){
    terreno->area = terreno->comprimento * terreno->largura;
  }
 
}

void calculaValor (tTerreno* terreno) {
  
  if (terreno->tipoTerreno == 'C'){
    terreno->valor = terreno->area * 5500;
  }
  else if (terreno->tipoTerreno == 'R'){
    terreno->valor = terreno->area * 3200;
  }
  else if (terreno->tipoTerreno == 'T'){
    terreno->valor = terreno->area * 3300;
  }

}

void imprimeCirculares(tTerreno** terrenos, int qntVezes) {
  int estado = 0;
  for (int i = 0; i <= qntVezes; i++){
    if (terrenos[i]->tipoTerreno == 'C' && estado == 0){
      printf("Terrenos circulares:\n\n");
      printf("->Preco: %.2lf\n", terrenos[i]->valor);
      estado = 1;
    }
    else if (terrenos[i]->tipoTerreno == 'C'){
      printf("->Preco: %.2lf\n", terrenos[i]->valor);
    }
  }
}

void imprimeRetangulares(tTerreno** terrenos, int qntVezes) {
  int estado = 0;
  for (int i = 0; i <= qntVezes; i++){
    if (terrenos[i]->tipoTerreno == 'R' && estado == 0){
      printf("\n\nTerrenos retangulares:\n\n");
      printf("->Preco: %.2lf\n", terrenos[i]->valor);
      estado = 1;
    }
    else if (terrenos[i]->tipoTerreno == 'R'){
      printf("->Preco: %.2lf\n", terrenos[i]->valor);
    }
  }
}

void imprimeTriangulares(tTerreno** terrenos, int qntVezes) {
  int estado = 0;
  for (int i = 0; i <= qntVezes; i++){
    if (terrenos[i]->tipoTerreno == 'T' && estado == 0){
      printf("\n\nTerrenos triangulares:\n\n");
      printf("->Preco: %.2lf\n", terrenos[i]->valor);
      estado = 1;
    }
    else if (terrenos[i]->tipoTerreno == 'T'){
      printf("->Preco: %.2lf\n", terrenos[i]->valor);
    }
  }
}

void destroi_terreno(tTerreno* terreno){
  free(terreno);
  terreno = NULL;
}

// void destroi_terrenos(tTerreno** terreno){
//   free(terreno);
//   terreno = NULL;
// }