#include <stdio.h>

int main() {
    int andar_local, num_andares, num_butoes;
    if((scanf("%d %d %d", &andar_local, &num_andares, &num_butoes)) != 0){
        int i, botao;
    for (i = 0; i < num_butoes; i++) {
        if((scanf("%d", &botao)) != 0){
            andar_local += botao;
        
        if (andar_local < 0) {
            andar_local = 0;
        } else if (andar_local > num_andares) {
            andar_local = num_andares;
        }
        }
    }
    
    printf("%d\n", andar_local);
    }

    return 0;
}