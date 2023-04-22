#include <stdio.h>

#define BUFFER 1000

int eVogal(char c){
    return c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int retiraVogaisRep(char* s){
    char s_aux[BUFFER];
    int j = 0;
    int vogaisRem = 0;

    for(int i = 0;s[i] != '\0';i++){
        if(eVogal(s[i]) || s[i+1] ! s[i]){
            s_aux[j] = s[i];
            j++;
        } else {
            vogaisRem++;
        }
    }
    s_aux[j] = '\0';
    for(j = 0;s_aux[j] != '\0';j++){
        s[j] = s_aux[j];
    }
    s[j] = '\0';
    return vogaisRem;
}

int main(){
    char s[] = "oolaaaaaaaa muuuuuuuundooo!";
    int vogaisRem = retiraVogaisRep(s);
    printf("Strings sem vogais repetidas: %s\n",s);
    printf("Foram removidas %d vogais\n",vogaisRem);

    return 0;
}