#include <stdio.h>

int qDig(unsigned int n){
	int count = 0;
	while(n != 0){
		count ++;
		n /= 10;
	}
	return count;
}

int main(){
	int n,res = 0;
	scanf("%d",&n);
	res = qDig(n);
	printf("%d\n",res);
	return 0;
}