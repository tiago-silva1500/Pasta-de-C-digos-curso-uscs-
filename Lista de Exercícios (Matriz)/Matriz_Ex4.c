#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[2][2] = {{1, 0}, {1, 0}};
	int i, j;
		for(i=0; i<2; i++) {
			for(j=0; j<2; j++) {
				printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Lembrando que: �ndice 0 � par, �ndice 1 � impar!");
	return 0;
}
