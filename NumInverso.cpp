#include <stdio.h>

// Exibe os elementos do vetor na ordem inversa

void exibirInverso(int vetor[], int tamanho) { // A função exibirInverso é declarada e recebe dois parâmetros, vetor[]: um vetor de números inteiros e tamanho: tamanho do vetor
	printf("Números na ordem inversa:\n");
	
	// é usado para percorrer os elementos do vetor, mas de forma inversa
	for (int i = tamanho - 1; i >= 0; i--) { // int i = tamanho - 1: A variável i começa na última posição do vetor, i >= 0: o laço continua enquanto o i for maior ou igual a 0 (enquanto não chegar no primeiro elemento do vetor), i--: A cada volta no laço , o i é reduzido, indo para a posição anterior 
		printf("%d\n", vetor[i]); // Para cada posição de i, o úmero no vetor na osição i é exibido na tela
	}
}

int main() {
	int vetor[10]; // A variável vetor é declarada como um vetor de 10 números inteiros
	
	printf("Digite 10 números inteiros:\n"); // Pede que o usuário insira 10 números inteiros
	
	for (int i = 0; i < 10; i++) { // i = 0; i < 10; i++: a variável vai de 0 a 9
		printf("Número %d: ", i + 1); // Pede o número para o vetor, i + 1: número da posição no vetor (de 1 a 10)
		scanf("%d", &vetor[i]); // Lê o número inserido pelo usuário e armazena esse valor no vetor
	}
	
	exibirInverso(vetor, 10); // A função exibirInverso é chamada com o vetor e o tamanho = 10 como argumentos e exibe na tela os números do vetor em ordem inversa
	
	return 0;
}

