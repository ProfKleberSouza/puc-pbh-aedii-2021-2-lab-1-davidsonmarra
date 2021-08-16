#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  char palavra[100];
  fgets(palavra, 100, stdin);

  // PROCESSAMENTO E SAIDA
  numero_vogais(palavra);

  return 0;
}