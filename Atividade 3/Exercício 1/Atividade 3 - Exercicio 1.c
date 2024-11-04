#include <stdio.h>

typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf kg. Idade: %d anos. Altura: %.2lf m.\n\n", p.peso, p.idade, p.altura);
}

void lerDados(pessoa *p) {
    printf("Digite o peso: ");
    while (scanf("%lf", &p->peso) != 1) {
        printf("Entrada inválida. Tente novamente: ");
        while(getchar() != '\n'); // Limpa o buffer
    }
    
    printf("Digite a idade: ");
    while (scanf("%d", &p->idade) != 1) {
        printf("Entrada inválida. Tente novamente: ");
        while(getchar() != '\n'); // Limpa o buffer
    }
    
    printf("Digite a altura: ");
    while (scanf("%lf", &p->altura) != 1) {
        printf("Entrada inválida. Tente novamente: ");
        while(getchar() != '\n'); // Limpa o buffer
    }
}

int main() {
    pessoa pessoas[5];

    // Lê os dados para cada pessoa
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        lerDados(&pessoas[i]);
    }

    // Imprime os dados de todas as pessoas
    printf("\nDados das pessoas:\n");
    for (i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }

    return 0;
}
