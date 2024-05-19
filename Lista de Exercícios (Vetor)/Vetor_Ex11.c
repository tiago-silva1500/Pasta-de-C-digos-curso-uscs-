#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int n, i, soma=0;
	printf("Digite um número que defina o tamanho do seu vetor: ");
	scanf("%d", &n);
	
	int vetor[n];
	
	printf("Digite os elementos do seu vetor:\n");
		for(i=0; i<n; i++) {
			scanf("%d", &vetor[i]);
		}
		
		for(i=0; i<n; i++) {
			soma+=vetor[i];
		}
		//Exibindo resultados
		printf("Soma = %d\n", soma);
		
	return 0;
}
