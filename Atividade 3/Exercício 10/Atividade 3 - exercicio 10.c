#include <stdio.h>
#include <locale.h>
void maiorNumero(int num1, int num2) {
	if(num1 > num2) {
		printf("%d � maior.", num1);
	} else if (num1 < num2) {
		printf("%d � maior.", num2);
	} else {
		printf("Os n�meros s�o iguais.");
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int num1, num2;
	printf("Digite dois n�meros:\n");
	scanf("%d %d", &num1, &num2);
	//Chamar a fun��o e verificar o maior n�mero
	maiorNumero(num1, num2);
	
	return 0;
}
