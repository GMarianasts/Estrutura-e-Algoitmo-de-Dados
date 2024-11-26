#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor) { // A funçã recebe três parâmetros, soma: soma dos elementos do vetor, primeiroValor: O primeiro valor do vetor, ultmoValor: O último valor do vetor
	return soma + (primeiroValor * 5) + (ultimoValor * 2); // A soma dos valores do vetor é somada ao produto do primeiro valor do vetor multiplicado por 5. Em seguida, o produto do último valor o vetor multiplicado por 2 é somado ao resultado. O valor final é retornado pela função 
}

int main() {
	int vetor[10]; // Vetor declarado com 10 elementos
	int soma = 0;
	
	for (int i = 0; i < 10; i++) {  // o i percorre de 0 a 9
		vetor[i] = i + 1; // atribui o valor de i + 1 ao elemento na posição i do vetor. ex: o primeiro elemento do vetor recebe o valor1, o sgundo valor 2 e etc até o 10 
	}
	
	for (int i = 0; i < 10; i++) { // Percorre todos os elementos do vetor
		soma += vetor[i]; // adiciona o valor de cada elemento do vetor à variável soma
	}
	
	// A função calcularResultado é chamada com os argumentos, soma: que é a soma dos valores do vetor, vetor[0]: o primeiro valor do vetor, que é 1 e o vetor[9]: o último valor do vetor, que é 10
	int resultado = calcularResultado(soma, vetor[0], vetor[9]); // A função retorna o valor que é armazenado na variável resultado
	
	printf("O resultado da funcao e: %d\n", resultado); // Exibe o resultado, que está armazenado na variável resultado
	
	return 0;
}

