#include <stdio.h>

int main() {
    char teclas[3][3] = {{'7', '8', '9'},
                         {'4', '5', '6'},
                         {'1', '2', '3'}};

    int linha = 1, coluna = 1;
    char tecla_final_linha;
    
    int n_linhas;
    if((scanf("%d", &n_linhas)) != 0){
        char teclas_finais[n_linhas];
        for (int i = 0; i < n_linhas; i++) {
            char direcao[21];
            if((scanf("%s", direcao)) != 0){
                for (int j = 0; direcao[j] != '\0'; j++) {
                    if (direcao[j] == 'C' && linha > 0) {
                        linha--;
                    } else if (direcao[j] == 'B' && linha < 2) {
                        linha++;
                    } else if (direcao[j] == 'E' && coluna > 0) {
                        coluna--;
                    } else if (direcao[j] == 'D' && coluna < 2) {
                        coluna++;
                    }
                }
                tecla_final_linha = teclas[linha][coluna];
                teclas_finais[i] = tecla_final_linha;
            }
        }

        for (int i = 0; i < n_linhas; i++) {
            printf("%c", teclas_finais[i]);
        }
        printf("\n");
    }

    return 0;
}