#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int n, fat;
	printf("Digite um n�mero: !");
	scanf("%d", &n);
	
	for(fat=1; n>1; n=n-1) {
		fat=fat*n;
	}
	
	printf("\n%d", fat);
	
	return 0;
}
