#include <stdio.h>

float multInt2(int n,float m){
    float res = 0;
    while(n>0){
        if(n % 2 == 1) res += m;
        n /= 2;
        m *= 2;
    }
    return res;
}

int main(){
    int n = 81;
    int m = 423;

    float res = multInt2(n,m);
    printf("%d * %f = %f\n",n,(float)m,res);
    return 0;
}