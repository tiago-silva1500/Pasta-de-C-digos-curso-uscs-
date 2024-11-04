#include <stdio.h>
#include <locale.h>
int menorNumero(int num1, int num2, int num3) {
    // Assume que o primeiro n�mero � o menor
    int menor = num1;

    if (num2 < menor) {
        menor = num2; // Atualiza se o segundo n�mero for menor
    }
    if (num3 < menor) {
        menor = num3; // Atualiza se o terceiro n�mero for menor
    }
    return menor; // Retorna o menor n�mero encontrado
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int num1, num2, num3;
    
    printf("Digite tr�s n�meros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Chama a fun��o e armazena o menor n�mero
    int menor = menorNumero(num1, num2, num3);
    
    printf("O menor n�mero �: %d\n", menor);
    
    return 0;
}
