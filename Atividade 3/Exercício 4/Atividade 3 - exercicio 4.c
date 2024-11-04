#include <stdio.h>
#include <locale.h>
float calcularMedia(float n1, float n2, float n3, float n4) {
	return(n1+n2+n3+n4)/4.0;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3, n4, media;
	printf("Digite as notas: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = calcularMedia(n1, n2, n3, n4);
	printf("A média é: %.2f\n", media);
	
	if(media >= 7.0) {
		printf("Aprovado");
	} else {
		printf("Reprovado");
	}
	return 0;
}
