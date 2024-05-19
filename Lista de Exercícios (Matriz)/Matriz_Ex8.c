#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	int i, j;
	int linha, soma=0;
	printf("Digite o número da linha: ");
	scanf("%d", &linha);
		if(linha<0 || linha>3) {
			printf("Linha errada, o número deve ser de 0 a 3: ");
			return 1;
		}
		//Calculo
		for(i=0; i<4; i++) {
			soma+=matriz[linha][i];
		}
		//Exibição do resultado
		printf("Soma dos números da linha %d: %d\n", linha, soma);
	return 0;
}
