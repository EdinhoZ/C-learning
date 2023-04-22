#include <stdio.h>

int mdc2(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b) return mdc2(a % b,b);
    if(a < b) return mdc2(a,b % a);
    return a;
}

int main(){
    int a = 126;
    int b = 45;
    int res;

    res = mdc2(a,b); 
    printf("%d\n",res);
    return 0;
}