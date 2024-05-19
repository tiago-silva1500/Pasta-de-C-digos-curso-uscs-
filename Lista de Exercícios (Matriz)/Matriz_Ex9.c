#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i;
	
	printf("Elementos da diagonal principal: ");
	for(i=0; i<3; i++) {
		printf("%d ", matriz[i][i]);
	}
	printf("\n");
	return 0;
}
