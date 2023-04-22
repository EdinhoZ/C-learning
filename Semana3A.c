#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000
#define MAX_POS 9

int main() {
    char pos[MAX_POS];
    char frase[MAX_LEN];
    int len, i, j, k;

    if((scanf("%s", pos)) != 0){
        if((scanf("%s", frase)) != 0){
            len = strlen(frase);
            for (i = 0; i < (int)strlen(pos); i++) {
            k = pos[i] - '0' - 1;
            
            for (j = k; j < len; j += strlen(pos)) {
            printf("%c", frase[j]);
            }
            }   

            printf("\n");
        }
    }

    return 0;
}