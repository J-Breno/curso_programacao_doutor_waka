#include <stdio.h>

#define TAM 5

void funcVet(int vet[]) {
	printf("Digite 5 numero: \n");
	for(int i = 0; i < TAM; i++ ){ 
		scanf("%d", &vet[i]);
	}
	printf("\n");
	printf("\n");
	
	for(int i = 0; i < TAM; i+=1 ){ 
		printf("%d\n", vet[i]);
	}
}

int main() {
	
	int vetor[TAM];
	
	
	
	funcVet(vetor);
	
	return 0;
}