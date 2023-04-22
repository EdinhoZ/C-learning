#include <stdio.h>

void verificaOrdem(int a, int b, int c){
  if(a > 0 && b > 0 && c > 0){
    if(a >= b && b >= c){
        printf("OK\n");
    } else if(a <= b && b <= c){
        printf("OK\n");
    } else if(a == b && b == c && a == c) {
        printf("OK\n");
    }
      else{
        printf("NAO\n");
      }
    } else {
    printf("Erro! Valores Negativos.\n");
    }
}


int main(){
    int a, b, c;

    if((scanf("%d %d %d", &a, &b, &c)) != 0){
        verificaOrdem(a, b, c);
    }

    return 0;
}