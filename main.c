#include <stdio.h>
#include "tTerreno.h"


int main(){
   
   int qntVezes = 1;
   int estado = 0;
   
   scanf("%d", &qntVezes);

   tTerreno **terrenos;
   terrenos = malloc(sizeof(tTerreno *) * (qntVezes + 1));

   if (qntVezes >= 1 && qntVezes <= 100)
      for (int i = 0; i <= qntVezes; i++){
         terrenos[i]  = leTerreno();
         calculaArea(terrenos[i]);
         calculaValor(terrenos[i]);
      }

   imprimeCirculares(terrenos, qntVezes);
   imprimeRetangulares(terrenos, qntVezes);
   imprimeTriangulares(terrenos, qntVezes);
   
   for (int i = 0; i <= qntVezes; i++){
      destroi_terreno(terrenos[i]);
   }

   free(terrenos);

   return 0;
}