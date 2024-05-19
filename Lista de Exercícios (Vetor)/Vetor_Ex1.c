#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[10];
	printf("Digite 10 números: ");
	scanf("%d", &vetor[0]);
	scanf("%d", &vetor[1]);
	scanf("%d", &vetor[2]);
	scanf("%d", &vetor[3]);
	scanf("%d", &vetor[4]);
	scanf("%d", &vetor[5]);
	scanf("%d", &vetor[6]);
	scanf("%d", &vetor[7]);
	scanf("%d", &vetor[8]);
	scanf("%d", &vetor[9]);
	
	printf("Exibindo todos os números: %d - %d - %d - %d - %d - %d - %d - %d - %d - %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6], vetor[7], vetor[8], vetor[9]);
	
	return 0;
}
