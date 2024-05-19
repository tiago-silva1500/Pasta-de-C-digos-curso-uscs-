#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int par=0, i, vetor[10];
	printf("Digite 10 elementos:\n");
	for(i=0; i<10; i++) {
		scanf("%d", &vetor[i]);
	}
	//contagem dos números pares
	for(i=0; i<10; i++) {
		if(vetor[i] % 2 == 0) {
			par++;
		}
	}
	printf("Existem %d números pares.\n", par);
	return 0;
}
