#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int n, i;
	double media, soma=0.0;
	printf("Digite 10 números");
	
	for(i=1; i<=10; i++) {
		printf("\nDigite um número: ");
		scanf("%d", &n);
		soma+=n;
	}
	
	media = soma/10;
	printf("Média dos dez números fornecidos: %.2f\n", media);
	
	return 0;
}
