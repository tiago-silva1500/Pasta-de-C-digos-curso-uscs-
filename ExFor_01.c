#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int a, b;
	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite outro número: ");
	scanf("%d", &b);
	
	int i=1, soma=0;
	for (i=a; i<=b; i++){
		if(i%2 == 0){
			printf("\n%d ", i);
			soma+=i;
		}
		i++;
	}
	
	return 0;
}
