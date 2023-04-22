#include <stdio.h>

/* exercício 1*/
void quadrado(int n){
    int linha,coluna;
    for(linha = 0 ; linha < n ; linha++){
        for(coluna = 0; coluna < n ; coluna++){
            putchar('#');
        }
        putchar('\n');
    }
}

int main(){
    quadrado(5);
    return 0;
}