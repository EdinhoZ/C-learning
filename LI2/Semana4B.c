#include <stdio.h>
#include <string.h>

void has_repeated_letters(char* str, char* str_final) {
    int freq[26] = {0};
    int i, indice;
    int len = strlen(str);
    int count = 0;

    for (i = 0; i < len; i++) {
        indice = str[i] - 'A';
        if (freq[indice] == 1) {
            if (strchr(str_final, str[i]) == NULL) {
                strncat(str_final, &str[i], 1);
                count++;
            }
        }
        freq[indice]++;
    }
    if (count == 0) {
        strcpy(str_final, "-1");
    }
}

int main(){
    int casos = 0;
    char str[1000];
    char str_final[100][27] = {0};

    if((scanf("%d",&casos)) != 0){
        getchar();
    for(int i = 0; i < casos; i++){
        if((fgets(str, 1000, stdin)) != 0){
            str[strcspn(str, "\n")] = '\0';
            has_repeated_letters(str, str_final[i]);
        }
    }
    for(int j = 0; j < casos; j++){
        printf("%s", str_final[j]);
    }
    printf("\n");
    }
    return 0;
}