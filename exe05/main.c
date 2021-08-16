#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
// ENTRADA DE DADOS
  char texto[100];
  fgets(texto, 100, stdin);

  // PROCESSAMENTO E SAIDA
  inverte(texto);

  return 0;
}