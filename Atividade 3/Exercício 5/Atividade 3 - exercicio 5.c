#include <stdio.h>

void exibirImpares(int n) {
	int i;
	for (i=1; i<=n; i++) {
		if(i % 2 != 0 && i % 7 != 0) {
			printf("\n%d", i);
		}
	}
	printf("\n");
}

int main() {
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	//Chama a fun��o
	exibirImpares(numero);
	
	return 0;
}
