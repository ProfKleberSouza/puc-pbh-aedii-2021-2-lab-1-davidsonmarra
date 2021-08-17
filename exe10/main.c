#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  int n, cont = 1;
  scanf("%d", &n);
  if(n == 0) {
    printf("0");
    return 0;
  }

  // PROCESSAMENTO E SAIDA
  int *vetor = (int*)malloc(n*sizeof(int));
  for(int i = 0; i < n; i++) {
    vetor[i] = 0;
    printf("%d", vetor[i]);
  }
  tabela_verdade(n, vetor, cont);

  return 0;
}