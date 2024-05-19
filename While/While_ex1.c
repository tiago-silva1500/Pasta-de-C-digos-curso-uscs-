#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=0;
	
	while(i<10){
		i = i + 1;
		printf("\n%d ", i);
	}

	return 0;	
}
