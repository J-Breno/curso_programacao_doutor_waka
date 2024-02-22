#include <stdio.h>

int main() {
	
	int v[] = {2, 5, 3, 1, 18};
	int x = 1, y = 4;
	// O exercicio era ver os resultado
	
	printf( "%d\n", x);
	printf("%d\n",y);
	printf("%d\n",v[x + y]);
	printf("%d\n",v[x * y]);
	printf("%d\n",v[v[x - y]]);
	
	
	return 0;
}