#include <stdio.h>

int mdc1(int a,int b){
    //int menor = a < b ? a : b; -> significa o mesmo que está em baixo
    
    int menor;
    if(a<b) menor = a;
    else menor = b;

    while(a % menor != 0 || b % menor != 0){
        menor--;
    }
    return menor;
}

int main(){
    int a,b,res;
    scanf("%d %d", &a, &b);

    res = mdc1(a,b); 
    printf("%d\n",res);
    return 0;
}