#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int a=5, b=8, c=6;
	if(a > b){
		if(a > c)
			printf("A é o maior número! %d", a);
	}
	else if(b > c)
		printf("B é o maior número! %d", b);
		
	else printf("C é o maior número! %d", c);	
	
	return 0;
}
