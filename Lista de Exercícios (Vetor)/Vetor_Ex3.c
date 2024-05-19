#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	float media, vetor[20];
	printf("Digite 20 números reais: ");
	scanf("%f", &vetor[0]);
	scanf("%f", &vetor[1]);
	scanf("%f", &vetor[2]);
	scanf("%f", &vetor[3]);
	scanf("%f", &vetor[4]);
	scanf("%f", &vetor[5]);
	scanf("%f", &vetor[6]);
	scanf("%f", &vetor[7]);
	scanf("%f", &vetor[8]);
	scanf("%f", &vetor[9]);
	scanf("%f", &vetor[10]);
	scanf("%f", &vetor[11]);
	scanf("%f", &vetor[12]);
	scanf("%f", &vetor[13]);
	scanf("%f", &vetor[14]);
	scanf("%f", &vetor[15]);
	scanf("%f", &vetor[16]);
	scanf("%f", &vetor[17]);
	scanf("%f", &vetor[18]);
	scanf("%f", &vetor[19]);
	
	media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5] + vetor[6] + vetor[7] + vetor[8] + vetor[9] + vetor[10] + vetor[11] + vetor[12] + vetor[13] + vetor[14] + vetor[15] + vetor[16] + vetor[17] + vetor[18] + vetor[19]) / 20;
	printf("Média dos números reais: %f", media);
	
	return 0;
}
