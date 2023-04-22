#include <stdlib.h>
#include <stdio.h>

typedef struct dinStack{
    int size; //guarda o tamanho do array values
    int sp;
    int *values;
} *DStack;

void SinitStack(DStack s){
    s->sp = 0;
    s->size = 10;
    s->values = malloc(10*sizeof(int)); //reserva os blocos
    //s->values = calloc(10,sizeof(int));
    //(*s).sp = 0;
}

int SisEmpty(DStack s){
    return s->sp == 0;
}

int Spush(DStack s, int x){
    if(s->sp >= s->size){
        s->size *= 2;
        s->values = (int*)realloc(s->values,s->size); //cria novos blocos na stack sem remover os valores anteriores
    }
    s->values[s->sp] = x;
    s->sp++;
    return 0;
}

void imprimeStack(DStack s){
    printf("+--------+\n");
    for(int i = s->sp-1; i >= 0;i--){
        printf("| %3d | \n",s->values[i]);
    }
    printf("+--------+\n");
}

int Spop(DStack s,int x){
    if(s->sp >= 0){
        *x = s->values[s->sp-1];
        s->sp--;
        if(s->sp < s->size / 2){
            s->size = s->size / 2;
            s->values = realloc(s->values,s->size); // usamos a função para apagar metade dos blocos se essa metade não estiver a ser usada
            //não podemos usar a função free porque iriamos perder dados
        }
        return 0;
    } else {
        return 1;
    }
}

int Stop(DStack s, int x){
    if(s->sp > 0){
        *x = s->values[s->sp-1];
        return 0;
    } else {
        return 1;
    }
}

int main(){
    struct dinStack stack;
    SinitStack(&stack);
    // imprimeStack(&stack);

    Spush(&stack,1);
    Spush(&stack,2);
    Spush(&stack,3);

    // imprimeStack(&stack);

    int x,y;
    Spop(&stack,&x);
    Stop(&stack,&y);

    imprimeStack(&stack);
    
    printf("Elemento removido: %d\n",x);
    printf("Elemento no topo: %d\n",y);
}