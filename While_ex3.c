#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i=1, soma=0;
	while(i<=100){
		if(i%2 == 0){
			printf("\n%d ", i);
			soma+=i;
		}
		i++;
	}
	printf("\nA soma de todos os números pares: %d", soma);
	
	return 0;
}
