#include <stdio.h>

#define N 3
#define M 3

int main() {
	
	// endereco = i * M * tam(tipo) + j * tam(tipo) + end_iniciado =
	// 1 * 3 * 4 + 2 * 4 + 0x04
	//0x12 + 0x08 + 0x04 = 
	// 0x24
	
	int matriz[3][3];
	
	/*int matriz = {
		{2, 5, 3},
		{1, 18, 4},
		{7, 6, 9}
		
	};*/
	
	matriz[0][0] = 2;
	matriz[0][1] = 5;
	matriz[0][2] = 3;
	
	matriz[1][0] = 1;
	matriz[1][1] = 18;
	matriz[1][2] = 4;
	
	matriz[2][0] = 7;
	matriz[2][1] = 6;
	matriz[2][2] = 9;
	
	for(int i = 0; i < N; i++) { //percorrendo linha
	
		for(int j = 0; j < M; j++) { // percorrendo coluna
				
			printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);			
		}
		
	}
	
	return 0;
}