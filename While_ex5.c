#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float n1, n2, n3, n4, n5, media;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &n1); 
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	printf("Digite o terceiro número: ");
	scanf("%f", &n3);
	printf("Digite o quarto número: ");
	scanf("%f", &n4);
	printf("Digite o quinto número: ");
	scanf("%f", &n5);
	//processamento
	media = (n1 + n2 + n3 + n4 + n5)/2;
	
	printf("Média dos cinco números fornecidos: %.1f\n", media);
	
	return 0;
}
