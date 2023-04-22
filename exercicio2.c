#include <stdio.h>

void xadrez(int n){
    int linha, coluna;
    for(linha = 0; linha < n; linha++){
        for(coluna = 0; coluna <n ; coluna++){
            if((linha + coluna) % 2 != 0)
            putchar('#');
            else
            putchar('_');
        }
        printf("\n");
    }
}

int main(){
    xadrez(5);
    return 0;
}