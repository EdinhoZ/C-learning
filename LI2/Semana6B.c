#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COZINHEIROS 100

// Definição da estrutura Cozinheiro
typedef struct {
    char alcunha[50];
    int peso;
    int altura;
} Cozinheiro;

// Função para calcular a distância entre o peso do cozinheiro e o peso ideal de 90kg
int distancia(int peso) {
    return abs(peso - 90);
}

// Função de comparação para ordenação dos cozinheiros
int cmp(const void* a, const void* b) {
    Cozinheiro* c1 = (Cozinheiro*) a;
    Cozinheiro* c2 = (Cozinheiro*) b;
    int d1 = distancia(c1->peso);
    int d2 = distancia(c2->peso);
    if (d1 != d2) {
        return d1 < d2 ? -1 : 1;
    }
    if (c1->altura != c2->altura) {
        return c1->altura > c2->altura ? -1 : 1;
    }
    return strcmp(c1->alcunha, c2->alcunha);
}

int main() {
    // Leitura do número de cozinheiros
    int n;
    if((scanf("%d", &n)) != 1) return 1;

    // Leitura dos dados dos cozinheiros
    Cozinheiro cozinheiros[MAX_COZINHEIROS];
    for (int i = 0; i < n; i++) {
        if((scanf("%s %d %d", cozinheiros[i].alcunha, &cozinheiros[i].peso, &cozinheiros[i].altura)) != 3) return 1;
    }

    // Ordenação dos cozinheiros
    qsort(cozinheiros, n, sizeof(Cozinheiro), cmp);
    // Impressão da lista de cozinheiros ordenada
    for (int i = 0; i < n; i++) {
        printf("%s %d %d\n", cozinheiros[i].alcunha, cozinheiros[i].peso, cozinheiros[i].altura);
    }
    return 0;
}