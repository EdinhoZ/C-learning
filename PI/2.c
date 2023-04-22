#include <stdio.h>

int main(){
	int count = 0;
	float n, soma = 0,media;

	scanf("%f",&n);

	while(n != 0){
		soma += n;
		count++;

		scanf("%f",&n);
	}

	if(count != 0){
		media = soma / count;
		printf("%.2f\n",media);
	}else{
		printf("Não dá para calcular\n");
	}

	return 0;
}
