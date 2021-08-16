#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  char texto[100];
  fgets(texto, 100, stdin);

  // PROCESSAMENTO E SAIDA
  numero_vogais(texto);

  return 0;
}