#include <stdio.h>

int main() {

    int x;
	int y;
	
	printf("Informe o valor de X: ");
	scanf("%d", x);
	printf("Informe o valor de Y: ");
	scanf("%d", y);
	
	if( x > y ){
		printf("%d e maior que %d.\n", x, y);
	}
	else if( x == y ) {
		printf("%d e igual a %d.\n", x, y);
	}
	else {
		printf("%d e menor que %d.\n", x, y);
	}
	
	return 0;
		
}	