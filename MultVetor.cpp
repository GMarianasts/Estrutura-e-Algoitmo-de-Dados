#include <stdio.h>

// multiplicação dos valores do vetor

float multiplicarValores(float vetor[], int tamanho) { // declarada a função multiplicarValores que recebe dois parâmetros, vetor: um vetor com números do tipo float e tamanho: o tamanho do vetor
	float produto = 1.0; // A variável produto é inicializada com o valor 1.0. Ela armazena o resultado da multiplicação dos elementos do vetor
	
	for (int i = 0; i < tamanho; i++) { // Percorre todos as posições do vetor
		produto *= vetor[i]; // Em cada volta do laço o valor atual de produto é multiplicado pelo elemento do vetor vetor[i]
	}
	
	return produto; // A função retorna o resultado da multiplicação de todos os elementos do vetor, que esta armazenado na variável produto
}

int main() {
	int tamanho; // A variável tamanho é declarada para armazenar o número de elementos que o vetor terá
	
	printf("Digite o tamanho do vetor: "); // Pede para o usuário inserir o tamanho do vetor
	scanf("%d", &tamanho);
	
	float vetor[tamanho]; // O vetor é declarado com tamanho definido pelo usuário no parâmetro vetor
	
	printf("Digite %d valores:\n", tamanho); // Pede para o usuário insira o número de valores que corresponde ao tamanho do vetor.
	
	for (int i = 0; i < tamanho; i++) { // O índice i percorre de 0 até o último índice
	scanf("%f", &vetor[i]); // lê um número do tipo float e o armazena no vetor vetor[i]
}

	 // A função multiplicarValores é chamada com o vetor e tamanho como argumento.
	float resultado = multiplicarValores(vetor, tamanho); // A função retorna o produto dos elementos do vetor, que é armazenado na variável resultado
	
	printf("O resultado da multiplicacao dos valores e: %.2f\n", resultado); // Exibe na tela o resultado da multiplicação dos valores do vetor
	
	return 0;
}

