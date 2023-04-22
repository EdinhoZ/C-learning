#include <stdio.h>

int maximum(int v[],int N,int *m){
    if(N == 0) return 1;
    int m_temp = v[0];
    for(int i = 0; i < N;i++){
        if(v[i] > m_temp) m_temp = v[i];
    }
    *m = m_temp;
    return 0;
}

int main(){
    int v[6] = {4,6,2,8,3,1};
    int m;

    if((maximum(v,5,&m)) == 0){
        printf("%d\n",m);
    }
    else{
        printf("Vetor vazio\n");
    }
    return 0;
}