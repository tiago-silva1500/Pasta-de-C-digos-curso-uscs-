#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int n, i;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	int vetor[n];
	
	printf("Digite os elementos do vetor:\n");
	for(i=0; i<n; i++) {
		printf("Elemento %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("Números registrados no vetor:\n");
	for(i=0; i<n; i++) {
		printf("%d \n", vetor[i]);
	}
	printf("Este é o tamanho do seu vetor.");
	return 0;
}
