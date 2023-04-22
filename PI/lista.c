#include <stdlib.h>
#include <stdio.h>

typedef struct lista
{
    int h;
    struct lista *t;
} *Lista;

Lista adiciona_cabeca(Lista l, int x){
    Lista nl = malloc(sizeof(struct lista));
    nl->h = x;
    nl->t = l;
    return nl;
}

Lista remove_cabeca(Lista l){
    Lista nl = l->t;
    free(l);
    return nl;
}

void imprimeLista(Lista l){
    while(l){
        printf("%d, ", l->h);
        l = l->t;
    }
}

int main(){
    Lista l = NULL;

    l = adiciona_cabeca(l,3);
    l = adiciona_cabeca(l,2);
    l = adiciona_cabeca(l,1);

    imprimeLista(l);

    return 0;
}