#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor) { // A fun�� recebe tr�s par�metros, soma: soma dos elementos do vetor, primeiroValor: O primeiro valor do vetor, ultmoValor: O �ltimo valor do vetor
	return soma + (primeiroValor * 5) + (ultimoValor * 2); // A soma dos valores do vetor � somada ao produto do primeiro valor do vetor multiplicado por 5. Em seguida, o produto do �ltimo valor o vetor multiplicado por 2 � somado ao resultado. O valor final � retornado pela fun��o 
}

int main() {
	int vetor[10]; // Vetor declarado com 10 elementos
	int soma = 0;
	
	for (int i = 0; i < 10; i++) {  // o i percorre de 0 a 9
		vetor[i] = i + 1; // atribui o valor de i + 1 ao elemento na posi��o i do vetor. ex: o primeiro elemento do vetor recebe o valor1, o sgundo valor 2 e etc at� o 10 
	}
	
	for (int i = 0; i < 10; i++) { // Percorre todos os elementos do vetor
		soma += vetor[i]; // adiciona o valor de cada elemento do vetor � vari�vel soma
	}
	
	// A fun��o calcularResultado � chamada com os argumentos, soma: que � a soma dos valores do vetor, vetor[0]: o primeiro valor do vetor, que � 1 e o vetor[9]: o �ltimo valor do vetor, que � 10
	int resultado = calcularResultado(soma, vetor[0], vetor[9]); // A fun��o retorna o valor que � armazenado na vari�vel resultado
	
	printf("O resultado da funcao e: %d\n", resultado); // Exibe o resultado, que est� armazenado na vari�vel resultado
	
	return 0;
}

