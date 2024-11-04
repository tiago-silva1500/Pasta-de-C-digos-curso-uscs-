#include <stdio.h>

int somarValores(int vetor[], int tamanho) {
	int soma = 0;
	int i;
	for(i=0; i<tamanho; i++) {
		soma+=vetor[i];
	}
	return soma;
}

int main() {
	int tamanho;
	int i;
	printf("Digite o tamanho do seu vetor: ");
	scanf("%d", &tamanho);
	//Inicialização do vetor
	int vetor[tamanho];
	
	printf("Digite os valores: \n", tamanho);
	for(i=0; i<tamanho; i++) {
		scanf("%d", &vetor[i]);
	}
	
	int soma = somarValores(vetor, tamanho);
	
	float media = (float)soma/tamanho;
	
	printf("Soma dos valores: %d\n", soma);
	printf("Média dos valores: %.2f\n", media);
	
	return 0;
}
