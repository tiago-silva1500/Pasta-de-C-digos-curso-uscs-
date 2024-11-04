#include <stdio.h>
#include <locale.h>

double multiplicarValores(int vetor[], int n) {
    double resultado = 1.0; // Inicializa o resultado como 1
    int i;
    for (i = 0; i < n; i++) {
        resultado *= vetor[i]; // Multiplica cada elemento
    }
    return resultado; // Retorna o resultado da multiplica��o
}

int main() {
	setlocale(LC_ALL, "portuguese");
    int n;
	int i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Declara o vetor com o tamanho especificado
    int vetor[n];

    printf("Digite %d valores (n�meros inteiros):\n", n);
    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Chama a fun��o para multiplicar os valores do vetor
    double resultado = multiplicarValores(vetor, n);
    printf("O resultado da multiplica��o dos valores do vetor �: %.2f\n", resultado);

    return 0;
}
