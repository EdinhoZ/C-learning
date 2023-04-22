#include <stdio.h>

void ordem_crescente(int *a, int *b, int *c) {
    int temp;

    // Ordena os valores em ordem crescente
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b, c;

    if((scanf("%d %d %d", &a, &b, &c)) != 0){
        if (a <= 0 || b <= 0 || c <= 0) {
        printf("Erro! Valores negativos.\n");
      return 1;
    }

    ordem_crescente(&a, &b, &c);

    printf("%d %d %d\n", a, b, c);
    }

    return 0;
}