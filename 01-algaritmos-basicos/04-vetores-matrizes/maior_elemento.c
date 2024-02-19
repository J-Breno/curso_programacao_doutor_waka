#include <stdio.h>

#define TAMV 5

int main() {
	
	int v[TAMV];
	int n = 0;

	
	for(int i = 0; i < TAMV; i++) {

		printf("Digite um numero: ");
		scanf("%d", &v[i]);
		
		if(v[i] > n) {
			n = v[i];
		}
	
	}
	
	/*int n = -9999;
	
	for(int i = 0; i < TAMV; i++) {
		
		if(v[i] > n) {
			n = v[i];
		}
	}*/
	printf("\n");
	printf("O maior valor e: %d", n);

	return 0;
}