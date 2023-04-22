#include <stdio.h>
#include <string.h>

#define MAX_DIAS 365
#define MAX_FUNC 40
#define MAX_NOME 20
#define MAX_LINHA 1000

int main() {
    int n_dias, i, j, presencas[MAX_FUNC], menor_presenca = MAX_DIAS, num_func = 0;
    char nomes[MAX_FUNC][MAX_NOME], linha[MAX_LINHA], *nome;

    if((scanf("%d", &n_dias)) != 1) return 1;
    getchar();

    memset(presencas, 0, sizeof(presencas));

    for (i = 0; i < n_dias; i++) {
        if (fgets(linha, MAX_LINHA, stdin) == NULL) {
            return 1;
        }

        nome = strtok(linha, " \n");

        while (nome != NULL) {
            for (j = 0; j < num_func; j++) {
                if (strcmp(nomes[j], nome) == 0) {
                    presencas[j]++;
                    break;
                }
            }

            if (j == num_func && num_func < MAX_FUNC) {
                strcpy(nomes[num_func], nome);
                presencas[num_func]++;
                num_func++;
            }
            else if (j == MAX_FUNC) {
                return 1;
            }

            nome = strtok(NULL, " \n");
        }
    }

    for (i = 0; i < num_func; i++) {
        if (presencas[i] < menor_presenca) {
            menor_presenca = presencas[i];
            nome = nomes[i];
        }
    }

    printf("%s\n", nome);

    return 0;
}