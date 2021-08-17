bool is_palindromo(char texto[], int aux) {
  int tamanho = strlen(texto) - 2;
  if(texto[aux] != texto[tamanho - aux]) 
    return false;
  else
    if(aux <= (tamanho - 2) / 2)
      is_palindromo(texto, aux + 1);
  return true;
}
