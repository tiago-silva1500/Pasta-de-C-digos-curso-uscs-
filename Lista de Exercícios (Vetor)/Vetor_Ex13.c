#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(i=9; i>=0; i--) {
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	return 0;
}
