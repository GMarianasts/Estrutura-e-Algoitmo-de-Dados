 #include <stdio.h>
 
 // Calcula a soma dos valores do vetor

float somarValores(int vetor[], int tamanho) { // vetor[]: array de n�meros inteiros e tamanho: o n�mero de elementos no vetor
	float soma = 0.0;
	for (int i = 0; i < tamanho; i++) { // Percorre todos os elementos do vetor at� o tamanho inserido pelo usu�rio
  		soma += vetor[i]; // Soma os elementos do vetor
}

	return soma; // A fun��o retorna a soma total dos elementos do vetor
}

int main() {

	int tamanho;

	printf("Digite o tamanho do vetor: "); // Solicita ao usu�rio o tamanho do vetor
	scanf("%d", &tamanho);

	int vetor[tamanho]; // Declara um vetor com o tamanho especificado pela vari�vel tamanho, que � determinada pelo usu�rio

	for (int i = 0; i < tamanho; i++) { // Percorre o vetor, pedindo ao usu�rio que insira os valores para cada posi��o do vetor
	printf("Digite o valor %d: ", i + 1); // pede o valor do n�mero da n posi��o do vetor
	scanf("%d", &vetor[i]); } // l� o valor inserido pelo usu�rio e armazena na posi��o i do vetor.

	float soma = somarValores(vetor, tamanho); // A fun��o � chamada com dois argumentos, vetor: tem os valores inseridos pelo usu�rio e tamanho: o n�mero de elementos no vetor

	float media = soma / tamanho; // Calcula a m�dia dos valores armazenados no vetor

	printf("Soma: %.2f\n", soma); // Exibe a soma total dos elementos do vetor 
	printf("Media: %.2f\n", media); // Exibe a m�dia dos valores armazenados no vetor

	return 0; 
}

