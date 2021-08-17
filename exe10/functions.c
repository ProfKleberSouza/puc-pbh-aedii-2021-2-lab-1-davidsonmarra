
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
int potencia(int x, int y) {
    int r = 1;
    for(int i = 0; i < y; i++) 
        r *= x;
    return r;
}

void tabela_verdade(int d, int v[], int cont) {
    int i=d-1, j, aux = cont;
    while(aux > 0) {
        if(aux % 2 == 0) 
            v[i] = 0;
        else 
            v[i] = 1;
        i--;
        aux /= 2;
    }
    printf("\n");
    for(i=0; i < d; i++) 
        printf("%d", v[i]);
    cont ++;
    if(cont <= potencia(2, d) - 1) 
        tabela_verdade(d, v, cont);    
}