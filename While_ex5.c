#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	float n1, n2, n3, n4, n5, media;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1); 
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro n�mero: ");
	scanf("%f", &n3);
	printf("Digite o quarto n�mero: ");
	scanf("%f", &n4);
	printf("Digite o quinto n�mero: ");
	scanf("%f", &n5);
	//processamento
	media = (n1 + n2 + n3 + n4 + n5)/2;
	
	printf("M�dia dos cinco n�meros fornecidos: %.1f\n", media);
	
	return 0;
}
