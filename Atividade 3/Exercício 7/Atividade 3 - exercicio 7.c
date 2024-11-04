#include <stdio.h>
#include <locale.h>
int encontrarMaior(int vetor[], int n, int *posicao) {
    int maior = vetor[0]; // Assume que o primeiro elemento � o maior
    *posicao = 0; // Inicializa a posi��o do maior valor

    // Percorre o vetor para encontrar o maior valor
    int i;
    for (i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            *posicao = i; // Atualiza a posi��o
        }
    }
    return maior;
}

int main() {
	setlocale(LC_ALL, "portuguese");
    int n;
	int i;
    // Solicita ao usu�rio o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Verifica se o tamanho do vetor � positivo
    if (n <= 0) {
        printf("O tamanho do vetor deve ser um n�mero positivo.\n");
        return 1; // Retorna um erro
    }

    // Declara o vetor com o tamanho especificado
    int vetor[n];

    // L� os valores do vetor
    printf("Digite %d valores:\n", n);
    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Declara a vari�vel para armazenar a posi��o do maior valor
    int posicao;
    // Encontra o maior valor
    int maiorValor = encontrarMaior(vetor, n, &posicao);

    // Imprime o maior valor e sua posi��o
    printf("O maior valor �: %d\n", maiorValor);
    printf("A posi��o do maior valor no vetor �: %d\n", posicao + 1); // +1 para mostrar a posi��o em base 1

    return 0;
}

