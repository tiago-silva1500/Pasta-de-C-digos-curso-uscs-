#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, palpite, tnt=0; 
		
	srand(time(NULL)); //semente para geração de números aleatórios
	num = rand()%100+1; //gera números aleatórios
	while (1) {
		printf("Tente adivinhar um número: ");
		scanf("%d", &palpite);
		tnt++;
		
		if (palpite == num) {
			printf("Você acertou o número!");
			break;
		} else if (palpite < num) {
			printf("Tente novamente.\n");
			} 
	}

	return 0;
}
