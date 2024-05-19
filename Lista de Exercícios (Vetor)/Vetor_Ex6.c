#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int A[10] = {1,2,3,4,5,6,7,8,9,10}; //Vetor A preenchido
	int B[10]; //Vetor que receberá os valores de A
	int i;
	
	//Copiando os dados de A para B
	for(i=0; i<10; i++) {
		B[i] = A[i];
	}
	
	//Exibir o vetor B
	printf("Valores do Vetor B: ");
	for(i=0; i<10; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	return 0;
}
