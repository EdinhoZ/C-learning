#include <stdio.h>

float multInt1(int n, float m){
    int i,res = 0;
    for(i = 0;i < n; i++){
        res += m;
    }
    return res;
}

int main(){
    int n = 81;
    int m = 423;

    float res = multInt1(n,m);
    printf("%d * %f = %f\n",n,(float)m,res);
    return 0;
}