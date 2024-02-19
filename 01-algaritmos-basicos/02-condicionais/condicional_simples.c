#include <stdio.h>

int main() {

	float numeroReal;
	
	printf("Informe o numero a ser verificado: ");
	
	scanf("%f", &numeroReal);
	
	if(numeroReal > 0 && numeroReal < 1) {

		printf("O valor do numero e: %lf.", numeroReal);
	
	}else {
		printf("O valor %lf nao esta entre 0 e 1", numeroReal);
	}	
	
	return 0;
}	