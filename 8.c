#include <stdio.h>

char *strcpy2(char *dest, char source[]){
	char *p = dest;
	while(*source != '\0'){
		*p++ = *source++;
	}
	*p = '\0';
	return dest;
}