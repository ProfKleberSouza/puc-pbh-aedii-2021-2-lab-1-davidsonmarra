#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  int m, n;
  scanf("%d %d", &m, &n);

  char *vetor = (char*)malloc((n+m)*sizeof(char));
  // PROCESSAMENTO E SAIDA
  monta_placar(m, n, vetor);
  for(int i = 0; i < n; i++)
    placar_possiveis(m, n, vetor, i);

  return 0;
}