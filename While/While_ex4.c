#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, palpite, tnt=0; 
		
	srand(time(NULL)); //semente para gera��o de n�meros aleat�rios
	num = rand()%100+1; //gera n�meros aleat�rios
	while (1) {
		printf("Tente adivinhar um n�mero: ");
		scanf("%d", &palpite);
		tnt++;
		
		if (palpite == num) {
			printf("Voc� acertou o n�mero!");
			break;
		} else if (palpite < num) {
			printf("Tente novamente.\n");
			} 
	}

	return 0;
}
