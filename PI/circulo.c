#include <stdio.h>

int dentro_circulo(int raio){

}

int circulo(int raio){
    int cardinais = 0;
    int x,y;
    for(y = 0; y < 2*raio +1 ; y++){
        for (x = 0; x < 2 * raio +1; x++){
            if(dentro_circulo(raio y,x)){
                putchar('#');
                cardinais++;
            }
            else
            putchar(' ');
        }
        putchar('\n');
    }
    return cardinais;
}

int main(void){
   int raio, cardinais;
   scanf("%d");
}