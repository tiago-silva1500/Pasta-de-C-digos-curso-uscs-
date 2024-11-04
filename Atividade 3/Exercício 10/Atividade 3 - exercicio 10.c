#include <stdio.h>
#include <locale.h>
void maiorNumero(int num1, int num2) {
	if(num1 > num2) {
		printf("%d é maior.", num1);
	} else if (num1 < num2) {
		printf("%d é maior.", num2);
	} else {
		printf("Os números são iguais.");
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int num1, num2;
	printf("Digite dois números:\n");
	scanf("%d %d", &num1, &num2);
	//Chamar a função e verificar o maior número
	maiorNumero(num1, num2);
	
	return 0;
}
