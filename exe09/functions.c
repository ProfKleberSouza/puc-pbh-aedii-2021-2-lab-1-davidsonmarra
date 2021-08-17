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

void placar_possiveis(int m, int n, char v[], int aux) {
    int i;
    for(i = 0; i < m+n; i++) 
        if(v[i] == 'B') 
            aux = i;
    
}