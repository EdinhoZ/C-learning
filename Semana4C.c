#include <stdio.h>
#include <string.h>

int count_letters(char* str) {
    int alfabeto[26] = {0};

    for (int i = 0; i < (int)strlen(str); i++) {
      int indice = str[i] - 'A'; 
        alfabeto[indice]++; 
        if (alfabeto[indice] > 1) { 
            return 1; 
        }
    }
    return 0;
}


int main() {
    int casos = 0, diff_char = 0, res = 0;
    char linha[1000];

    if (scanf("%d", &casos) != 0) 
    {
        for (int i = 0; i < casos; i++) {
            if (scanf("%d", &diff_char) != 0) 
            {
                if (fgets(linha, 1000, stdin) != 0) 
               {
                 char sub_char[diff_char];
                
                  for (int j = 0; j < (int)strlen(linha) - diff_char; j++) {
                      for (int k = 0; k < diff_char; k++) {
                          sub_char[k] = linha[k + j];
                      }
                    sub_char[diff_char] = '\0';
                    if (count_letters(sub_char) == 0) {
                      res = j - 1;
                      break;
                    }
                    else res = -1; 
                  }
              }
            }
          printf("%d\n", res);
        }
    }
    return 0;
}
