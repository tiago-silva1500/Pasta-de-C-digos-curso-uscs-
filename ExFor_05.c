#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int soma, i;
	for (i=1; i<=100; i++){
		if(i%6 != 0){
			printf("Todos os n�meros exibidos, exceto os divis�veis por 6: %d\n", i);
		}
	}
	
	return 0;
}
