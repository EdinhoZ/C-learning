#include <stdio.h>

void swapM(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int inverteArray(int v[],int N){
    int half = N / 2;
    for(int i = 0; i < half;i++){
        swapM(v+i,v+N-i-1);
    }
}

int main(){
    int v[3] = {1,2,3};

    inverteArray(v,3);
    for(int i = 0;i < 3;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}