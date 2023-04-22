#include <stdio.h>

float divInt(int dividendo, int divisor){
    int quociente = 0;
    while(dividendo >= divisor){
        dividendo -= divisor;
        quociente++;
    }

    return quociente;
}



int main(){
    int dividendo, divisor, quociente;
    scanf("%d/%d",&dividendo,&divisor);

    quociente = divInt(dividendo,divisor);

    printf("%d\n",quociente);
    return 0;
}