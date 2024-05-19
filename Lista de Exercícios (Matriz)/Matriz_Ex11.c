#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[3][3] = {{4, 0, 9}, {87, 16, 0}, {57, 90, 0}};
	int i, j;
	int contador=0;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			if(matriz[i][j]==0) {
				contador++;
			}
		}
	}
	printf("Quantidade de zeros presente na matriz: %d", contador);	
	return 0;
}
