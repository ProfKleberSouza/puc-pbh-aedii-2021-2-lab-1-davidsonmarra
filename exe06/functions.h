
int potencia(int x, int n) {
  int p = 1;
  for(int i = 0; i < n; i++) 
    p *= x;
  return p;
}