#include <stdio.h>

int ePrimo(int x) {
	
	int isPrimo;
	
	int primo = 0;
	int naoPrimo = 0;
	
	for(int i = 1; i <= x; i++) {
		if(x % i == 0){
			primo+=1;
		} else {
			naoPrimo+=1;	
		}
	}
	
	if(primo > 2 || x == 1) {
		isPrimo = 0;
	} else {
		isPrimo = 1;
	}
	
	return isPrimo;
}

int main() {
	int x;
	printf("Digite um numero primo: ");
	scanf("%d", &x);
	
	printf("%d", ePrimo(x));
	
	return 0;
}