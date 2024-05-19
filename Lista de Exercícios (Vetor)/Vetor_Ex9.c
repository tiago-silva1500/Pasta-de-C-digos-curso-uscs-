#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int i;
	int vetor[12] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12};	
	printf("Inicialmente o vetor tem números negativos:\n");
	for(i=0; i<12; i++) {
		if(vetor[i]<0) {
			printf("%d ", vetor[i]);
		}
	}
	printf("\n");
	
	for(i=0; i<12; i++) {
		if(vetor[i]=0); {
		   vetor[i]=0;
		}
	}
	printf("Vetor modificado: \n");
	for(i=0; i<12; i++) {
		printf("[%d]", vetor[i]);
	}
	printf(". \nAgora todos são zero!");
	return 0;
}
