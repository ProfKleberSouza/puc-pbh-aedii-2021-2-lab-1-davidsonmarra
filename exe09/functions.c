#include "functions.h"
#include <stdio.h>

void monta_placar(int m, int n, char v[]) {
    int i;
    for(i = 0; i < m; i++){
        v[i] = 'A';
        printf("%c", v[i]);
    }
    for(i; i < m+n; i++){ 
        v[i] = 'B';
        printf("%c", v[i]);  
    }
    
}

void placar_possiveis(int m, int n, char v[], int x) {
    int i, aux;
    for(i = x; i < m + n; i++) 
        if(v[i] == 'B') {
            aux = i;
            break;
        }
    if(v[x] != 'B') {
        printf("\n");
        v[aux] = 'A';
        v[aux-1] = 'B';
        for(i = 0; i < m+n; i++) 
            printf("%c", v[i]);
        placar_possiveis(m, n, v, x);
    }
}

void placar_restante(int m, int n, char v[]) {
    int i;
    printf("\n");
    for(i = 0; i < n; i++)  {
        v[i] = 'A';
        printf("%c", v[i]);
    }
    for(i = n; i < 2*n; i++) {
        v[i] = 'B';
        printf("%c", v[i]);
    }
    for(i; i < m+n; i++) {
        v[i] = 'A';
        printf("%c", v[i]);
    }
    
}