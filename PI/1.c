#include <stdio.h>

int main(){
	int n,max = 0;
	scanf("%d",&n);
	while(n != 0){
		max = (n > max) ? n : max;
		scanf("%d",&n);
	}
	printf("%d\n",max);
	return 0;
}

