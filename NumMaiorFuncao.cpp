#include <stdio.h>

// Compara dois n�meros e exibe o maior

void maiorNumero(int num1, int num2) { // Fun��o que compara os dois n�meros
	if (num1 > num2) { // Se o num1 for maior que o num2
		printf("O maior n�mero �: %d\n", num1); // imprime que o num1 � o maior n�mero
	}else if (num2 > num1) { // Se o num2 for maior que o num1
		printf("O maior n�mero �: %d\n", num2); // imprime qu o num2 � maior que o num1
	}else {
		printf("Os n�meros s�o iguais.\n"); // Se as duas condi��es anteriores n�o forem verdadeiras, imprime que eles s�o n�meros iguais
	}
}
int main() {
	int num1, num2;
	
	printf("Digite o primeiro n�mero inteiro: "); // Pede para o usu�rio digitar o 1� n�mero inteiro
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero inteiro: "); // Pede para o usu�rio digitar o 2� n�mero inteiro
	scanf("%d", &num2);
	
	maiorNumero(num1, num2); // A fun��o chama os dois n�meros inseridos pelo usu�rio e faz a compara��o e exibe o resultado
	
	return 0;
}

