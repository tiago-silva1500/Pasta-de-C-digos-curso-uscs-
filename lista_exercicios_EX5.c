#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1=4, n2=7, n3=9;
	if(n1 < n2)
		if(n1 < n3)
			printf("N1 � o menor n�mero! %d", n1);
	else if(n2 < n3)
		printf("N2 � o menor n�mero! %d", n2);
	else printf("N3 � o menor n�mero! %d", n3);

	return 0;	
}

