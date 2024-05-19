#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int Matt[3][2] = {{0, 0, 0}, {0, 0, 0}};
	int i, j;
		for(i=0; i<2; i++) {
			for(j=0; j<2; j++) {
				printf("[%d] ", Matt[i][j]);
		}
		printf("\n");
	}
	return 0;
}
