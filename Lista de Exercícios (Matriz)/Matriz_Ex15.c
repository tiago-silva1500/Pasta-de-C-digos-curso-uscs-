#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[4][4];
	int soma=0,i, j;
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("Digite os valores da sua matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	soma+=matriz[i][j];
	printf("Soma de todos os elementos: %d", soma);	
	return 0;
}
