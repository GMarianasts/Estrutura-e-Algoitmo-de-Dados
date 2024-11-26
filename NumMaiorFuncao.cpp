#include <stdio.h>

// Compara dois números e exibe o maior

void maiorNumero(int num1, int num2) { // Função que compara os dois números
	if (num1 > num2) { // Se o num1 for maior que o num2
		printf("O maior número é: %d\n", num1); // imprime que o num1 é o maior número
	}else if (num2 > num1) { // Se o num2 for maior que o num1
		printf("O maior número é: %d\n", num2); // imprime qu o num2 é maior que o num1
	}else {
		printf("Os números são iguais.\n"); // Se as duas condições anteriores não forem verdadeiras, imprime que eles são números iguais
	}
}
int main() {
	int num1, num2;
	
	printf("Digite o primeiro número inteiro: "); // Pede para o usuário digitar o 1º número inteiro
	scanf("%d", &num1);
	
	printf("Digite o segundo número inteiro: "); // Pede para o usuário digitar o 2º número inteiro
	scanf("%d", &num2);
	
	maiorNumero(num1, num2); // A função chama os dois números inseridos pelo usuário e faz a comparação e exibe o resultado
	
	return 0;
}

