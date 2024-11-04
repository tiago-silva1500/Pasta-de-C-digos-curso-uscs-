#include <stdio.h>
#include <locale.h>
int menorNumero(int num1, int num2, int num3) {
    // Assume que o primeiro número é o menor
    int menor = num1;

    if (num2 < menor) {
        menor = num2; // Atualiza se o segundo número for menor
    }
    if (num3 < menor) {
        menor = num3; // Atualiza se o terceiro número for menor
    }
    return menor; // Retorna o menor número encontrado
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int num1, num2, num3;
    
    printf("Digite três números:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Chama a função e armazena o menor número
    int menor = menorNumero(num1, num2, num3);
    
    printf("O menor número é: %d\n", menor);
    
    return 0;
}
