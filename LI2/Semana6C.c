#include <stdio.h>

typedef struct {
    int numPedido;
    char dificuldade;
    int preco;
} Pedido;

void ordenaPedidos(Pedido *pedidos, int n) {
    int i, j;
    Pedido temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (pedidos[i].preco < pedidos[j].preco) {
                temp = pedidos[i];
                pedidos[i] = pedidos[j];
                pedidos[j] = temp;
            } else if (pedidos[i].preco == pedidos[j].preco) {
                if (pedidos[i].dificuldade > pedidos[j].dificuldade) {
                    temp = pedidos[i];
                    pedidos[i] = pedidos[j];
                    pedidos[j] = temp;
                } else if (pedidos[i].dificuldade == pedidos[j].dificuldade) {
                    if (pedidos[i].numPedido > pedidos[j].numPedido) {
                        temp = pedidos[i];
                        pedidos[i] = pedidos[j];
                        pedidos[j] = temp;
                    }
                }
            }
        }
    }
}

int main() {
    int n = 0, i;
    if((scanf("%d", &n)) != 1) return 1;
    Pedido pedidos[n];
    for (i = 0; i < n; i++) {
        if((scanf("%d %c %d", &pedidos[i].numPedido, &pedidos[i].dificuldade, &pedidos[i].preco)) != 3){
            break;
        }
        getchar();
    }
    ordenaPedidos(pedidos, i);
    for (int j = 0; j < i; j++) {
        printf("%d %c %d\n", pedidos[j].numPedido, pedidos[j].dificuldade, pedidos[j].preco);
    }
    return 0;
}