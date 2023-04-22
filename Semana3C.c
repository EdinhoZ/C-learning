#include <stdio.h>

int main() {
    int casos, n_anoes, n_alturas , alturas, altura_max, n_visiveis;
    if((scanf("%d", &casos)) != 0){
        for (int i = 0; i < casos; i++) {
        if((scanf("%d", &n_anoes)) != 0){
        altura_max = 0;
        n_visiveis = 0;
        for (n_alturas = 0; n_alturas < n_anoes; n_alturas++) {
            if((scanf("%d", &alturas)) != 0){
                if (alturas > altura_max) {
                n_visiveis++;
                altura_max = alturas;
            }
            }
        }
        printf("%d\n", n_visiveis);
        }
    }
    }
    return 0;
}