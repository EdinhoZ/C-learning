#include <stdio.h>

#define Max 1000

struct staticStack {
    int sp;
    int values[Max];
};

typedef struct staticStack * SStack;

void SinitStack(SStack s){
    s->sp = 0;
    //(*s).sp = 0;
}

int SisEmpty(SStack s){
    return s->sp == 0;
}

int Spush(SStack s, int x){
    if(s->sp < Max){
        s->values[s->sp] = x;
        s->sp++;
        return 0;
    } else {
        return 1;
    }
}

void imprimeStack(SStack s){
    printf("+--------+\n");
    for(int i = s->sp-1; i >= 0;i--){
        printf("| %d | \n",s->values[i]);
    }
    printf("+--------+\n");
}

int Spop(SStack s,int x){
    if(s->sp >= 0){
        *x = s->values[s->sp-1];
        s->sp--;
        return 0;
    } else {
        return 1;
    }
}

int Stop(SStack s, int x){
    if(s->sp >= 0){
        *x = s->values[s->sp-1];
        return 0;
    } else {
        return 1;
    }
}

int main(){
    struct staticStack stack;
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