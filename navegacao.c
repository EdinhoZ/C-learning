#include <stdio.h>

int main() {
    int n, x = 0, y = 0;
    if((scanf("%d", &n)) != 0){
        int i, carta;
    for(i=0; i<n; i++) {
        if((scanf("%d", &carta)) != 0){
           if (carta < 1 || carta > 78) {
            printf("Carta inválida!\n");
            return 1;
        }
        switch(carta % 4) {
            case 0: x++; break;
            case 1: y--; break;
            case 2: y++; break;
            case 3: x--; break;
            case 4: x++; break;
        } 
        }
    }
    printf("%d %d\n", x, y);
    }
    return 0;
}