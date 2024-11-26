#include <stdio.h>

// Calcula a M�dia de 3 n�meros com uso de Fun��o

float calcularMedia(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3.0; // conta usada para calcular a M�dia de tr�s n�meros
}

int main() {
	int numero1, numero2, numero3;
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d", &numero1); // Primeiro n�mero inserido pelo usu�rio
	
	printf("Digite o segundo n�mero inteiro: ");
	scanf("%d", &numero2); // Segundo n�mero inserido pelo usu�rio
	
	printf("Digite o terceiro n�mero inteiro: ");
	scanf("%d", &numero3); // Terceiro n�mero inserido pelo usu�rio
	
	float media = calcularMedia(numero1, numero2, numero3); // Fun��o � chamada e armazena o valor resultante na vari�vel media
	
	printf("A m�dia dos tr�s n�meros �: %.2f\n", media); // Exibe a m�dia dos 3 n�meros
	
	return 0;
}

