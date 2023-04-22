char *strstr2(char s1[],char s2[]){
	if (*s2 == '\0') {
        return s1;
    }
    const size_t len = strlen(s2);
    for (; *s1; s1++) {
        if (*s1 == *s2) {
            if (strncmp(s1, s2, len) == 0) {
                return s1;
            }
        }
    }
    return NULL;
}