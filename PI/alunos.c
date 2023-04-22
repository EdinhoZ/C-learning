#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct Aluno{
	int numero;
	char nome[100];
	int miniT[6];
	float teste;
} Aluno;


void imprimeTurma(int ind[],Aluno t[],int N){
	for(int i = 0; i < N; i++){
		int indT = ind[i];
		Aluno a = t[indT];
		printf("%d | %5s | %d \n",a.numero,a.nome,nota(a));
	}
}

void ordenaPorNome(Aluno t[],int N,int ind[]){
	if(N <= 1) return;
	int l = ind[N-1];
	ordenaPorNome(t,N-1,ind);

	int i;
	for(i = N-2;i >= 0;i--){
		if(strcmp(t[ind[i]]).nome > t[ind[i+1]].numero){
			int temp = ind[i];
			ind[i] = ind [i+1];
			ind[i+1] = temp;
		}
	}
}

void criaIndPorNome(Aluno t[], int N,int ind[]){
	for(int i = 0; i < N; i++){
		ind[i] = i;
	}
	ordenaPorNome(t,N,ind);
}


int main(){
	Aluno t[] = {
		{4444,"Pedro",{2,1,0,2,2},10.5},
		{2222,"Luz",{2,2,2,2,1,0,0},14.5},
		{7777,"Rita",{2,2,2,2,2,1},18.5},
		{3333,"Bruno",{0,0,2,2,2,1},8.7}
	};

	int ind[] = {1,3,0,2};
	imprimeTurma(ind, t, 4);

	int ind[2];

	for(int i = 0;i < 4; i++){
		printf("%d",)
	}

	return 0;
}