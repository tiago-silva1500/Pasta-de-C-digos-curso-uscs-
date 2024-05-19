#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int i, vetor[8];
	printf("Digite 8 elementos:\n");
	for(i=0; i<8; i++) {
		scanf("%d", &vetor[i]);
	}

	for(i=7; i>=0; i--) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	return 0;
}
