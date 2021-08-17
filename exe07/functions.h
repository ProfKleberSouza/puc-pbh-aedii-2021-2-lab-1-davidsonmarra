
int mdc(int x, int y) {
  if(x >= y && x % y == 0)
    return y;
  else if(x < y)
    mdc(y, x);
  else
    mdc(y, x % y); 
}