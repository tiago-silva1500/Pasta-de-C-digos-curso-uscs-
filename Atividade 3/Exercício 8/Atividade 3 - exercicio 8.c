#include <stdio.h>
#include <locale.h>
void exibirPares(int numero) {
	int i;
	printf("N�meros pares de 1 at� %d:\n", numero);
	for (i=1; i<=numero; i++) {
		if(i%2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int numero;
	int i;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	exibirPares(numero);
	
	return 0;
}
