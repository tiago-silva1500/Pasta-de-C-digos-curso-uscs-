#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[2][2] = {{1,1}, {1,1}};
	int i, j;
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
