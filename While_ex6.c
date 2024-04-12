#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, lista[num], maior;
	printf("Forneça uma quantidade para lista de números: ");
	scanf("%d", &num);
	
	while (i=0, i<num, i++) {
		printf("Digite um número: %d", i+1);
		scanf("%d", &lista[i]);
	}
	
	//encontrar o maior número
	maior = lista[0];
	while (i=1, i<num, i++) {
		if(lista[i]>maior) {
			maior=lista[i];
		}
	}
	
	printf("O maior número da lista é: %d\n", maior);
	
	return 0;
}
