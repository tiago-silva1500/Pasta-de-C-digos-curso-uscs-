#include <stdio.h>
#include <locale.h>

void ordemInversa(int vetor[], int n) {
	int i;
	printf("Números na ordem inversa:\n");
	for(i = n - 1; i >= 0; i--) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[10];
	int i;
	printf("Digite 10 números:\n");
	for(i=0; i<10; i++) {
		printf("Valor %d: ", i+1);
		scanf("%d", &vetor[i]); //Lê o número e armazena no vetor
	}
	
	//Chama a função para a exibição
	ordemInversa(vetor, 10);
	
	return 0;
}
