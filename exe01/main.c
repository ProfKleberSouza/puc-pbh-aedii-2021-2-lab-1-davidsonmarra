#include <stdio.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  int a, b, s;
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  s = somar(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("SOMA = %d\n", s);

  return 0;
}