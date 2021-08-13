int menor(int v[], int n) {
  int menorElemento = v[0];
  for(int i = 1; i < n; i++) 
    if(v[i] < menorElemento) 
      menorElemento = v[i];
  return menorElemento;
}