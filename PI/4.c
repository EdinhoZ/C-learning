#include <stdio.h>

int bitsUm(unsigned int n){
    int n1;
    while((n / 2) != 0){
        if((n % 2) == 1){
            n1++;
        }
        n = n/2;
    }
    n1++;
    return n1;
}

int main(){
    int n,res = 0;
    scanf("%d",&n);
    res = bitsUm(n);
    printf("%d",res);
    return 0;
}