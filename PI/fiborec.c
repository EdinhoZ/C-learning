#include <stdio.h>

int fib1(int n){
    if(n<2) return 1;
    else return fib1(n-1) + fib1(n-2);
}

int fib1_alt(int n){
    int res;
    if(n < 2) res = 1;
    else res = fib1_alt(n-1) + fib1_alt(n-2);
    return res;
}

int main(){
    int n = 5;
    int r = fib1(n);
    printf("%d\n",r);
    return 0;
}