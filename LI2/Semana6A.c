#include <stdio.h>
#include <string.h>

#define MAX_K 100

int check_anagram(char word1[], char word2[]) {
    int freq1[26] = {0};
    int freq2[26] = {0};
    int i;

    // calcula a frequência de cada letra na primeira palavra
    for (i = 0; i < (int)strlen(word1); i++) {
        freq1[word1[i] - 'A']++;
    }

    // calcula a frequência de cada letra na segunda palavra
    for (i = 0; i < (int)strlen(word2); i++) {
        freq2[word2[i] - 'A']++;
    }

    // verifica se as frequências são iguais
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int N, K, i, j;
    char villain[101], candidates[MAX_K][101];
    int anagrams[MAX_K];
    int count;

    if((scanf("%d", &N)) != 1) return 1;

    for (i = 0; i < N; i++) {
        if((scanf("%d", &K)) != 1) return 1;
        if((scanf(" %[^\n]", villain)) != 1) return 1;

        count = 0; // zera o contador de anagramas para cada caso

        for (j = 0; j < K; j++) {
            if((scanf(" %[^\n]", candidates[j])) != 1) return 1;

            if (check_anagram(villain, candidates[j])) {
                anagrams[count] = j + 1;
                count++;
            }
        }

        if (count > 0) {
            printf("%d", anagrams[0]);
            for (j = 1; j < count; j++) {
                printf(" %d", anagrams[j]);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}