#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int Vetor[15], i, maior, menor;
	
	for(i=0; i<15; i++) {
		printf("Digite um número: ");
		scanf("%d", &Vetor[i]);
	}
	maior = Vetor[0];
	menor = Vetor[0];
	for(i=0; i<15; i++) {
		if(Vetor[i] > maior)
			maior = Vetor[i];
			
		if(Vetor[i] < menor)
			menor = Vetor[i];
	}
	
	printf("Maior = %d Menor = %d", maior, menor);
	return 0;
}

