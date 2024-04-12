#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int numero, digito, soma=0;
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	while (numero>0) {
		digito=numero%10;
		soma=soma+digito;
		numero=numero/10;
	}
	printf("Soma dos digitos: %d\n", soma);
	return 0;
}
