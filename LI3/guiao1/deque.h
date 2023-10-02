#ifndef DEQUE_H
#define DEQUE_H

#include <stdbool.h>

typedef struct node{
    void *data;
    struct node* next;
    struct node* prev;   
}Node;

typedef struct deque{
    int size;
    Node* first;
    Node* last;
    bool reversed;
}Deque;

Deque* create();
void push(Deque* deque, void* data);
void pushFront(Deque* deque, void* data);
void* pop(Deque* deque);
void* popFront(Deque* deque);
int size(Deque* deque);
bool isEmpty(Deque* deque);
void reverse(Deque* deque);
void printDeque(Deque* deque, void(*printFunc)(void*));
void destroy(Deque* deque);
#endif