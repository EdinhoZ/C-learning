#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
} *Palavras;

void libertaLista(Palavras p){
    while(p){
        Palavras proxP = p->prox;
        free(p);
        p = proxP;
    }
}

int quantasP(Palavras p){
    int total = 0;
    while(p){
        total += 1;
        p = p->prox;
    }
    return total;
}

void listaPal(Palavras p){
    while(p){
        printf("%s - %d",p->palavras,p->ocorr);
        p = p->prox;
    }
}

int main(){
    Palavras p1 = malloc(sizeof(struct celula));
    p1->palavra = strdup("amor");
    p1->ocorr = 3;
    p1->prox = NULL;

    Palavras p2 = malloc(sizeof(struct celula));
    p2->palavra = strdup("orgulho");
    p2->ocorr = 2;
    p2->prox = p1;
}