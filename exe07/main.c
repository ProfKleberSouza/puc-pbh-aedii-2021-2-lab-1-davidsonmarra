#include <stdio.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  int a, b, r;
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  r = mdc(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MDC = %d\n", r);

  return(0);
}