 #include <stdio.h>
 
 // Calcula a soma dos valores do vetor

float somarValores(int vetor[], int tamanho) { // vetor[]: array de números inteiros e tamanho: o número de elementos no vetor
	float soma = 0.0;
	for (int i = 0; i < tamanho; i++) { // Percorre todos os elementos do vetor até o tamanho inserido pelo usuário
  		soma += vetor[i]; // Soma os elementos do vetor
}

	return soma; // A função retorna a soma total dos elementos do vetor
}

int main() {

	int tamanho;

	printf("Digite o tamanho do vetor: "); // Solicita ao usuário o tamanho do vetor
	scanf("%d", &tamanho);

	int vetor[tamanho]; // Declara um vetor com o tamanho especificado pela variável tamanho, que é determinada pelo usuário

	for (int i = 0; i < tamanho; i++) { // Percorre o vetor, pedindo ao usuário que insira os valores para cada posição do vetor
	printf("Digite o valor %d: ", i + 1); // pede o valor do número da n posição do vetor
	scanf("%d", &vetor[i]); } // lê o valor inserido pelo usuário e armazena na posição i do vetor.

	float soma = somarValores(vetor, tamanho); // A função é chamada com dois argumentos, vetor: tem os valores inseridos pelo usuário e tamanho: o número de elementos no vetor

	float media = soma / tamanho; // Calcula a média dos valores armazenados no vetor

	printf("Soma: %.2f\n", soma); // Exibe a soma total dos elementos do vetor 
	printf("Media: %.2f\n", media); // Exibe a média dos valores armazenados no vetor

	return 0; 
}

