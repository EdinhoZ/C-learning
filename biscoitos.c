#include <stdio.h>

int main() {
    int valores[5];
    int ordem = 0;
    int i;

    for(int i = 0; i < 5; i++) {
        if(scanf("%d", &valores[i]) == 0){
          if(valores[i] <= 0) {
            printf("Valor inválido! Digite apenas números inteiros positivos.\n");
            return 1;
        }
        }
    }

    for (i = 1; i < 5; i++) {
        if (valores[i] > valores[ordem]) {
            ordem = i;
        }
    }

    printf("%d\n", ordem+1);
    
    return 0;
}