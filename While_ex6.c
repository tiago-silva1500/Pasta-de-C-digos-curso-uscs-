#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, lista[num], maior;
	printf("Forne�a uma quantidade para lista de n�meros: ");
	scanf("%d", &num);
	
	while (i=0, i<num, i++) {
		printf("Digite um n�mero: %d", i+1);
		scanf("%d", &lista[i]);
	}
	
	//encontrar o maior n�mero
	maior = lista[0];
	while (i=1, i<num, i++) {
		if(lista[i]>maior) {
			maior=lista[i];
		}
	}
	
	printf("O maior n�mero da lista �: %d\n", maior);
	
	return 0;
}
