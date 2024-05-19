#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[2][2];
	int i, j;
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("Digite os valores da sua matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	if(matriz[i][j]==matriz[i][j]) 
	{
		printf("As matrizes tem os mesmo valores, portanto são iguais.");
	} 
 	else if(matriz[i][j]!=matriz[i][j])
	{
		printf("As matrizes não são iguais, pois possuem elementos distintos.");
	}
	return 0;
}
