#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <stdbool.h>
#include "functions.h"

int main() {
  // ENTRADA DE DADOS
  int aux = 0;
  char texto[100];
  fgets(texto, 100, stdin);
  fflush(stdin);

  // PROCESSAMENTO E SAIDA
  if(is_palindromo(texto, aux)) 
    printf("SIM");
  else 
    printf("NAO");

  return 0;
}