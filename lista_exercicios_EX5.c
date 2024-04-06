#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1=4, n2=7, n3=9;
	if(n1 < n2)
		if(n1 < n3)
			printf("N1 é o menor número! %d", n1);
	else if(n2 < n3)
		printf("N2 é o menor número! %d", n2);
	else printf("N3 é o menor número! %d", n3);

	return 0;	
}

