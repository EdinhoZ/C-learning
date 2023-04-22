#include <stdio.h>

void swap(int v[], int i, int j){
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

int main(){
    int v[3];
    scanf("%d %d %d",v,v+1,v+2);
    int i = 1,j = 3;

    swap(v,i,j);
    printf("%d %d %d\n",*v,*v+1,*v+2);
    return 0;
}