#include <stdio.h>

// Exibe os elementos do vetor na ordem inversa

void exibirInverso(int vetor[], int tamanho) { // A fun��o exibirInverso � declarada e recebe dois par�metros, vetor[]: um vetor de n�meros inteiros e tamanho: tamanho do vetor
	printf("N�meros na ordem inversa:\n");
	
	// � usado para percorrer os elementos do vetor, mas de forma inversa
	for (int i = tamanho - 1; i >= 0; i--) { // int i = tamanho - 1: A vari�vel i come�a na �ltima posi��o do vetor, i >= 0: o la�o continua enquanto o i for maior ou igual a 0 (enquanto n�o chegar no primeiro elemento do vetor), i--: A cada volta no la�o , o i � reduzido, indo para a posi��o anterior 
		printf("%d\n", vetor[i]); // Para cada posi��o de i, o �mero no vetor na osi��o i � exibido na tela
	}
}

int main() {
	int vetor[10]; // A vari�vel vetor � declarada como um vetor de 10 n�meros inteiros
	
	printf("Digite 10 n�meros inteiros:\n"); // Pede que o usu�rio insira 10 n�meros inteiros
	
	for (int i = 0; i < 10; i++) { // i = 0; i < 10; i++: a vari�vel vai de 0 a 9
		printf("N�mero %d: ", i + 1); // Pede o n�mero para o vetor, i + 1: n�mero da posi��o no vetor (de 1 a 10)
		scanf("%d", &vetor[i]); // L� o n�mero inserido pelo usu�rio e armazena esse valor no vetor
	}
	
	exibirInverso(vetor, 10); // A fun��o exibirInverso � chamada com o vetor e o tamanho = 10 como argumentos e exibe na tela os n�meros do vetor em ordem inversa
	
	return 0;
}

