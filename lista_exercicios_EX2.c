#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, i, resultado = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	for (i=2; i<=num/2; i++) {
		if(num % i == 0){
			resultado++;
			break;
		}
	}
	
	if (resultado == 0) {
		printf("%d é um número primo\n", num);
		int soma=0;
			soma=num+num;
			printf("A soma dos números primos: %d\n", soma);
	}	
		else {
		printf("%d não é um número primo\n", num);
		}
	return 0;
}
