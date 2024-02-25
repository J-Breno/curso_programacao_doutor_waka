#include <stdio.h>

int recursaoFibonacci(int x) {
	
	if(x == 0 || x == 1)
		return x;

	return recursaoFibonacci(x - 1) + recursaoFibonacci(x - 2);

	

	
}

int main() {
	
	int x;
	
	printf("Digite o numero para calcular o fibonacci: ");
	scanf("%d", &x);
	
	printf("Fibonacci: ");
	for(int i = 0; i < x; i++ ) {
		printf("%d ", recursaoFibonacci(i));
	}
 
	return 0;
}