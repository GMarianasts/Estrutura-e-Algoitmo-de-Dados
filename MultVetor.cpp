#include <stdio.h>

// multiplica��o dos valores do vetor

float multiplicarValores(float vetor[], int tamanho) { // declarada a fun��o multiplicarValores que recebe dois par�metros, vetor: um vetor com n�meros do tipo float e tamanho: o tamanho do vetor
	float produto = 1.0; // A vari�vel produto � inicializada com o valor 1.0. Ela armazena o resultado da multiplica��o dos elementos do vetor
	
	for (int i = 0; i < tamanho; i++) { // Percorre todos as posi��es do vetor
		produto *= vetor[i]; // Em cada volta do la�o o valor atual de produto � multiplicado pelo elemento do vetor vetor[i]
	}
	
	return produto; // A fun��o retorna o resultado da multiplica��o de todos os elementos do vetor, que esta armazenado na vari�vel produto
}

int main() {
	int tamanho; // A vari�vel tamanho � declarada para armazenar o n�mero de elementos que o vetor ter�
	
	printf("Digite o tamanho do vetor: "); // Pede para o usu�rio inserir o tamanho do vetor
	scanf("%d", &tamanho);
	
	float vetor[tamanho]; // O vetor � declarado com tamanho definido pelo usu�rio no par�metro vetor
	
	printf("Digite %d valores:\n", tamanho); // Pede para o usu�rio insira o n�mero de valores que corresponde ao tamanho do vetor.
	
	for (int i = 0; i < tamanho; i++) { // O �ndice i percorre de 0 at� o �ltimo �ndice
	scanf("%f", &vetor[i]); // l� um n�mero do tipo float e o armazena no vetor vetor[i]
}

	 // A fun��o multiplicarValores � chamada com o vetor e tamanho como argumento.
	float resultado = multiplicarValores(vetor, tamanho); // A fun��o retorna o produto dos elementos do vetor, que � armazenado na vari�vel resultado
	
	printf("O resultado da multiplicacao dos valores e: %.2f\n", resultado); // Exibe na tela o resultado da multiplica��o dos valores do vetor
	
	return 0;
}

