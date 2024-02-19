#include <stdio.h>

#define N 3
#define M 3

int main() {
	
	float matriz[N][M] = {
		
		{100, 50, 50},
		{120, 30, 20}
		
	};
	
	float soma = 0;
	
	for(int i = 0; i < N; i++) {
	
		for(int j = 0; j < M; j++) {
		
			soma += matriz[i][j];
		
		}
		
	}
	
	printf("O valor do salario total e: %f",soma);

   return 0;	
}