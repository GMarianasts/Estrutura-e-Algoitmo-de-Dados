#include <stdio.h>

// Determina o menor número entre três

int Menor(int num1, int num2, int num3) { // TrÊs parâmetros que representa os três números que seram comparados
	int menorValor = num1; // Inicialmente será considerado que o num1 é o número menor
	
	if (num2 < menorValor) { // Veficica se o num2 é menor que o valor atual armazenado em menorValor
		menorValor = num2;  // Se o num2 for menor que o valor armazenado em menorValor a variável será atualizado para o valor de num2
	}
	
	if (num3 < menorValor) { // Verifica se o num3 é menor que o valor atual armazenado em menorValor
		menorValor = num3; // Se o num3 for menor que o valor armazenado em menorValor a variável será atualizado para o valor de num3
	}
	
	return menorValor; // Depois da comparação a função retorna o valor de menorValor, que agora têm o menor dos três números inseridos
}

int main() {
	int primeiroNumero, segundoNumero, terceiroNumero;
	
	printf("Digite o primeiro número inteiro: "); // Pede para o usuário inserir o 1º número inteiro
	scanf("%d", &primeiroNumero);
	
	printf("Digite o segundo número inteiro: "); // Pede para o usuário inserir o 2º número inteiro
	scanf("%d", &segundoNumero);
	
	printf("Digite o terceiro número inteiro: "); // Pede para o usuárip inserir o 3º número inteiro
	scanf("%d", &terceiroNumero);
	
	int menor = Menor(primeiroNumero, segundoNumero, terceiroNumero); // A função é hamda com os três números inseridos pelo usuário e o valor retornado é armazenado na variável menor
	
	printf("O menor número é: %d\n", menor); // Exibe o valor de menor, onde ta armazenado o número menor entre os três inseridos
	
	return 0;
}

