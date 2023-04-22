#include <stdio.h>

int soma(int v[],int N){
    int sum = 0;
    for (int i = 0;i < N;i++){
        sum = sum + v[i];
    }
    return sum;
}

int main(){
    int v[3] = {1,2,3};
    int res;

    res = soma(v,3);
    printf("%d\n",res);


    return 0;
}