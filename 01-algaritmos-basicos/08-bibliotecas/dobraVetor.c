#include <stdio.h>

int leNumeroNaTela(char *s) {
	
	int num;
	printf("%s", s);
	scanf("%d", &num);
	
	return num;
}

void dobraValoresVetor(int n, int v[n]) {
	
	for(int i = 0; i < n; i++ ){
		
		v[i] *= 2;
		
	}
	
}

int main() {

	int n = leNumeroNaTela("Por favor, informe o valor de n: ");
		
	int v[n];
	
	
	for(int i = 0; i < n; i++) {
		v[i] = leNumeroNaTela("Por favor, informe o valor para o vetor: ");
		
	}
	
	dobraValoresVetor(n, v);
	
	printf("\n");
	
	for(int i = 0; i < n; i++ ){
		printf("v[%d]: %d\n", i, v[i]);
		
	}
	return 0;
}