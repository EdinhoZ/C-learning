#include <stdio.h>
#include <string.h>

char *strcat2(char s1[],char s2[]){
	int i,j;
	i = strlen(s1);

	for(j = 0; s2[j] != '\0';j++){
		s1[i++] = s2[j];
	}

	s1[i] = '\0';
	return s1;
}

int main(){
	char s1[] = "Hello";
	char s2[] = "World!";
	char res;
	res = *strcat2(s1,s2);
	printf("%c",res);
	return 0;

}