#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n=1, cont=1;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	while(cont<=n){
		printf("%d", cont);
		cont++;
	}

	return 0;	
}
