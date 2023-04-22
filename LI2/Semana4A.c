#include <stdio.h>
#include <string.h>

int isVogal(char* palavra){
        int alternadas = 1;
        char vogais[6] = {'A', 'E', 'I', 'O', 'U','Y'};
        char letra_anterior = palavra[0];
        for(int i = 1;palavra[i] != '\0';i++){
                char letra = palavra[i];
                if((letra_anterior == vogais[0] || letra_anterior == vogais[1] || letra_anterior == vogais[2] || letra_anterior == vogais[3] || letra_anterior == vogais[4] || letra_anterior == vogais[5]) && (letra == vogais[0] || letra == vogais[1] || letra == vogais[2] || letra == vogais[3] || letra == vogais[4] || letra == vogais[5])){
                        alternadas = 0;
                        break;
                }
                if((letra_anterior != vogais[0] && letra_anterior != vogais[1] && letra_anterior != vogais[2] && letra_anterior != vogais[3] && letra_anterior != vogais[4] && letra_anterior != vogais[5]) && (letra != vogais[0] && letra != vogais[1] && letra != vogais[2] && letra != vogais[3] && letra != vogais[4] && letra != vogais[5])){
                        alternadas = 0;
                        break;
                }
                letra_anterior = letra;
        }
    return alternadas;
}

int main(){
        int casos;
        char linha[1000];

        if((scanf("%d",&casos)) != 0){
                getchar();
                if(casos > 0){
                        for(int i = 0;i<casos;i++){
                                if((fgets(linha,1000,stdin)) != 0){
                                        linha[strcspn(linha, "\n")] = '\0';
                                        char *palavra = strtok(linha, " ");
                                        int contagem = 0;
                                        while (palavra != NULL) { 
                                                contagem += isVogal(palavra);
                                                palavra = strtok(NULL, " ");
                                        }
                                        printf("%d\n",contagem);
                                }
                        }  
                }
        }
        return 0;
}