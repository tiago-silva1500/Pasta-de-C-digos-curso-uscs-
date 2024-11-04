#include <stdio.h>
#include <locale.h>
int encontrarMaior(int vetor[], int n, int *posicao) {
    int maior = vetor[0]; // Assume que o primeiro elemento é o maior
    *posicao = 0; // Inicializa a posição do maior valor

    // Percorre o vetor para encontrar o maior valor
    int i;
    for (i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            *posicao = i; // Atualiza a posição
        }
    }
    return maior;
}

int main() {
	setlocale(LC_ALL, "portuguese");
    int n;
	int i;
    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Verifica se o tamanho do vetor é positivo
    if (n <= 0) {
        printf("O tamanho do vetor deve ser um número positivo.\n");
        return 1; // Retorna um erro
    }

    // Declara o vetor com o tamanho especificado
    int vetor[n];

    // Lê os valores do vetor
    printf("Digite %d valores:\n", n);
    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Declara a variável para armazenar a posição do maior valor
    int posicao;
    // Encontra o maior valor
    int maiorValor = encontrarMaior(vetor, n, &posicao);

    // Imprime o maior valor e sua posição
    printf("O maior valor é: %d\n", maiorValor);
    printf("A posição do maior valor no vetor é: %d\n", posicao + 1); // +1 para mostrar a posição em base 1

    return 0;
}

