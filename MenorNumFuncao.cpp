#include <stdio.h>

// Determina o menor n�mero entre tr�s

int Menor(int num1, int num2, int num3) { // Tr�s par�metros que representa os tr�s n�meros que seram comparados
	int menorValor = num1; // Inicialmente ser� considerado que o num1 � o n�mero menor
	
	if (num2 < menorValor) { // Veficica se o num2 � menor que o valor atual armazenado em menorValor
		menorValor = num2;  // Se o num2 for menor que o valor armazenado em menorValor a vari�vel ser� atualizado para o valor de num2
	}
	
	if (num3 < menorValor) { // Verifica se o num3 � menor que o valor atual armazenado em menorValor
		menorValor = num3; // Se o num3 for menor que o valor armazenado em menorValor a vari�vel ser� atualizado para o valor de num3
	}
	
	return menorValor; // Depois da compara��o a fun��o retorna o valor de menorValor, que agora t�m o menor dos tr�s n�meros inseridos
}

int main() {
	int primeiroNumero, segundoNumero, terceiroNumero;
	
	printf("Digite o primeiro n�mero inteiro: "); // Pede para o usu�rio inserir o 1� n�mero inteiro
	scanf("%d", &primeiroNumero);
	
	printf("Digite o segundo n�mero inteiro: "); // Pede para o usu�rio inserir o 2� n�mero inteiro
	scanf("%d", &segundoNumero);
	
	printf("Digite o terceiro n�mero inteiro: "); // Pede para o usu�rip inserir o 3� n�mero inteiro
	scanf("%d", &terceiroNumero);
	
	int menor = Menor(primeiroNumero, segundoNumero, terceiroNumero); // A fun��o � hamda com os tr�s n�meros inseridos pelo usu�rio e o valor retornado � armazenado na vari�vel menor
	
	printf("O menor n�mero �: %d\n", menor); // Exibe o valor de menor, onde ta armazenado o n�mero menor entre os tr�s inseridos
	
	return 0;
}

