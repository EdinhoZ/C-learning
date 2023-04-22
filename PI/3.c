#include <stdio.h>

int main(){
    int n,max = 0, max2 = 0;
    scanf("%d",&n);
    while(n != 0){
        max2 = max;
        max = n;
        scanf("%d",&n);
    }
    printf("%d",max2);
    return 0;
}