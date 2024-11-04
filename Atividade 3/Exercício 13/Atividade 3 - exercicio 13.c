#include <stdio.h>
#include <locale.h>
float calcularMedia(int num1, int num2, int num3) {
	return (num1+num2+num3)/3.0;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int num1, num2, num3;
	printf("Digite 3 números:\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int media = calcularMedia(num1, num2, num3);
	
	printf("Média: %d", media);
	return 0;
}
