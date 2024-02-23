#include <stdio.h>

int main() {
	
	double departamentos[3][3], departamento1 = 0, departamento2 = 0, departamento3 = 0, total;
	
	printf("Digite os salarios do funcionarios de cada departamento: \n");


	for(int i = 0; i < 3; i++) {
		
		for( int j = 0; j< 3; j++) {
			
			scanf("%lf", &departamentos[i][j]);
			 
			if( i == 0 ) {
				departamento1 += departamentos[i][j];
				
			} else if( i == 1) {
				departamento2 += departamentos[i][j];
				
			} else {
				departamento3 += departamentos[i][j];
			}
		

	}
	
	}	
		printf("Departamento 1: %f\n", departamento1);
		printf("Departamento 2: %f\n", departamento2);
		printf("Departamento 3: %f\n", departamento3);
		total = departamento1 + departamento2 + departamento3;
		printf("Total: %f\n", total);
	return 0;
}