#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "portuguese");
	
	int matriz[2][2];
	int i, j;
	int numult;
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("Digite os n�meros de sua matriz: ");
			scanf("%d", &matriz[i][j]);
		}
	}
		printf("Agora digite um n�mero aleat�rio para realizar o c�lculo: ");
		scanf("%d", &numult);
		for(i=0; i<2; i++) {
			for(j=0; j<2; j++) {
			numult=numult*matriz[i][j];
			}
		}
		printf("Multiplica��o dos elementos: %d", numult);	
	return 0;
}
