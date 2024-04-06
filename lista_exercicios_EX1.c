#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int x, y, z;
	
	printf("Escreva o valor do lado X: ");
	scanf("%d", &x);
	
	printf("Escreva o valor do lado Y: ");
	scanf("%d", &y);
	
	printf("Escreva o valor do lado Z: ");
	scanf("%d", &z);
	
	if((x + y > z) && (x + z > y) && (y + z > x)){
		if (x == y && y == z){
			printf("Este é um triângulo equilátero, pois tem todos os lados iguais.");
		}
		else if (x == y || y == z || x == z){
			printf("Este é um triângulo isóceles, pois apenas 2 lados tem a mesma medida.");
		}
		else{
			printf("Este é um triângulo escaleno, pois os 3 lados possuem medidas diferentes.");
		}
	}
	else {
		printf("Não é triângulo.");
	}
	return 0;
}
