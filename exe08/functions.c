#include <string.h>
#include <stdbool.h>
#include "functions.h"
bool is_palindromo(char texto[], int aux) {
  int tamanho = strlen(texto) - 1;
  if(texto[aux] != texto[tamanho - aux]) 
    return false;
  else
    if(aux <= (tamanho - 2) / 2)
      is_palindromo(texto, aux + 1);
  return true;
}