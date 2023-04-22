#include <stdio.h>

int fib2(int n){
    int num1 = 1, num2 = 1, res = 1,i;
    for(i = 2; i <= n; i++){
        res = num1 + num2;
        num1 = num2;
        num2 = res;
    }
    return res;
}

int main(){
    int n, res;

    scanf("%d",&n);
    res = fib2(n);
    printf("%d\n",res);
    return 0;
}