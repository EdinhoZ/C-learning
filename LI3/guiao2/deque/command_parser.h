#include "deque.h"

typedef struct cmd {
    char* command;
    int* args; // NULL se n~ao houver
    int nargs; // n´umero de argumentos
} Cmd;