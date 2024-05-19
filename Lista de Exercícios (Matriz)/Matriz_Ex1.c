#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int mat[3][3];
	int i, j;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("Elementos da Matriz[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("Valores da matriz:\n");
		for(i=0; i<3; i++) {
			for(j=0; j<3; j++) {
				printf("%d ", mat[i][j]);
			}
			printf("\n");
		}
	return 0;
}
