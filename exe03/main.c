#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
  int menor, maior, n;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);
  int *vetor = (int*)malloc(n*sizeof(int));

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  for(int i = 0; i < n; i++) 
    scanf("%d", &vetor[i]);
  menor_maior(vetor, n, &menor, &maior);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\nMAIOR = %d", menor, maior);

  return 0;
}