#include <stdio.h>

#define MAX_GUICHE 100

void cicloinfernal(int n,int inicial,int seq[]){
    int now = inicial;
    while(now > 0 && now <= n){
        if(seq[now-1] == -1){
            printf(" CICLO INFERNAL");
            break;
        }
        if(now != inicial) printf(" ");
        printf("%d",now);
        int next = seq[now-1];
        seq[now-1] = -1;
        now = next;
    }
}

int main(){
    int casos = 0;

    if((scanf("%d",&casos)) != 1) return 1;
    for(int i = 0;i < casos;i++){
        int guiches = 0, guiche_inicial = 0,transicoes[MAX_GUICHE];
        if((scanf("%d",&guiches)) != 1) return 1;
        if(guiches < 1 || guiches > 100) return 1;
        if((scanf("%d",&guiche_inicial)) != 1) return 1;
        for(int j = 0; j < guiches;j++){
            if((scanf("%d",&transicoes[j])) != 1) return 1;
        }
        cicloinfernal(guiches,guiche_inicial,transicoes);
        printf("\n");
    }

    return 0;
}