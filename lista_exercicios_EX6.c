#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int a=5, b=8, c=6;
	if(a > b){
		if(a > c)
			printf("A � o maior n�mero! %d", a);
	}
	else if(b > c)
		printf("B � o maior n�mero! %d", b);
		
	else printf("C � o maior n�mero! %d", c);	
	
	return 0;
}
