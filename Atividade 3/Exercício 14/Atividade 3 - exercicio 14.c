#include <stdio.h>
#include <locale.h>
int calculaResultado(int soma, int primeiroValor, int ultimoValor) {
	int resultado;
		resultado = soma + (primeiroValor * 5) + (ultimoValor * 2);
	return resultado;
}


int main() {
	setlocale(LC_ALL, "portuguese");

	int i;
	int vetor[10];
	int primeiroValor;
	int ultimoValor;
	int soma;
	//Preenche o vetor de 1 a 10
	for(i=0; i<10; i++) {
		vetor[i] = i+1;
		soma += vetor[i];
	}
	primeiroValor = vetor[0];
	ultimoValor = vetor[9];
	
	//Chama a função
	int resultado = calculaResultado(soma, primeiroValor, ultimoValor);
	printf("Resultado: %d\n", resultado);
	
	return 0;
}
