#include "deque.h"
#include <stdlib.h>

Deque* create(){
    Deque* deque = malloc(sizeof(Deque));
    deque->size = 0;
    deque->first = NULL;
    deque->last = NULL;
    deque->reversed = false;
    return deque;
}

void push(Deque* deque, void* data){
    Node* new = malloc(sizeof(Node));
    new->data = data;
    new->prev = deque->last;
    new->next = NULL;
    deque->last = new;
    if (deque->size == 0) {
        deque->first = new;
    } 
    else {
        new->prev->next = new;
    }
    deque->size++;

}