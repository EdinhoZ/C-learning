#include <stdio.h>

int mdc2(int a, int b){
    if(a > b) return mdc2(a - b,b);
    if(a < b) return mdc2(a,b - a);
    return a;
}

int main(){
    int a = 20;
    int b = 8;
    int res;

    res = mdc2(a,b); 
    printf("%d\n",res);
    return 0;
}