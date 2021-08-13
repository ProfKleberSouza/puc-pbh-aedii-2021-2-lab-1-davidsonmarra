#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
  int n, m;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);
  int *vetor = (int*)malloc(n*sizeof(int));

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  for(int i = 0; i < n; i++) // monta o vetor
    scanf("%d", &vetor[i]);
  m = menor(vetor, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", m);
  free(vetor);

  return 0;
}