#include <stdio.h>

#define MAX_AGENTES 100
#define MAX_HORAS 24

int mat[MAX_HORAS][MAX_AGENTES];

void pessoaporhora(int cod, int hc, int hp) {
    for (int i = hc; i <= hp; i++) {
        mat[i][cod-1]++;
    }
}

int main() {
    int agente, casos = 0, cod, hc, hp;

    if((scanf("%d", &agente)) != 1) return 1;
    if((scanf("%d", &casos)) != 1) return 1;

    for (int i = 0; i < casos; i++) {
        if((scanf("%d %d %d", &cod, &hc, &hp)) != 0){
            pessoaporhora(cod, hc, hp);
        }
    }

    for (int h = 0; h < MAX_HORAS; h++) {
        int count = 0;
        for (int a = 0; a < agente; a++) {
            if (mat[h][a] > 0) {
                count++;
            }
        }
        if (count > 1) {
            printf("%d", h);
            for (int a = 0; a < agente; a++) {
                if (mat[h][a] > 0) {
                    printf(" %d", a+1);
                }
            }
            printf("\n");
        }
    }

    return 0;
}