#include <stdio.h>

int main() {
    int n, vic_inzel = 0, vic_cmd = 0, empates = 0;
    char jogada_inzel, jogada_cmd;

    if((scanf("%d", &n)) != 0){
        for (int i = 0; i < n; i++) {
        if((scanf(" %c %c", &jogada_inzel, &jogada_cmd)) != 0){
            if (jogada_inzel == '@' && jogada_cmd == '-') {
            vic_cmd++;
        } else if (jogada_inzel == '@' && jogada_cmd == '+') {
            vic_inzel++;
        } else if (jogada_inzel == '|' && jogada_cmd == '*') {
            vic_inzel++;
        } else if (jogada_inzel == '|' && jogada_cmd == '+') {
            vic_cmd++;
        } else if (jogada_inzel == 'X' && jogada_cmd == '-') {
            vic_inzel++;
        } else if (jogada_inzel == 'X' && jogada_cmd == '*') {
            vic_cmd++;
        } else {
            empates++;
        }
        }
    }

    printf("%d %d %d\n", vic_inzel, vic_cmd, empates);
    }

    return 0;
}