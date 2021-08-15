int menor_maior(int v[], int n, int *menor, int maior) {
  * menor = v[0];
  maior = v[0];
  for(int i = 1; i < n; i++) {
    if(v[i] < * menor)
      * menor = v[i];
    if(v[i] > maior)
      maior = v[i];
  }
  return maior;
}