#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int soma=0, i=2;
	for (i=2; i<=100; i++){
		if(i%2 == 0){
			soma+=i;
		}
		i++;
		printf("A soma dos números pares da o resultado final de: %d\n", soma);
	}
	return 0;
}
