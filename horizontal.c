#include <stdio.h>

void triangulo(int n){
    int linha, coluna;
    for(linha = 0; linha < n; linha++){
        for(coluna = 0; coluna < n - linha -1; coluna++){
            putchar(' ');
        }
        for(coluna = 0; coluna < 2*linha + 1; coluna++){
            putchar('#');
        }
        putchar('\n');
    }
}

/* gcc triangulo.c horizontal.c -o horizontal*/