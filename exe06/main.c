#include <stdio.h>
#include <stdio.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  int x, n, r;
  scanf("%d %d", &x, &n);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  r = potencia(x, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("%d", r);

  return 0;
}