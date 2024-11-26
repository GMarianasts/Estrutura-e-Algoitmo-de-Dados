#include <stdio.h>

// Calcula a Média de 3 números com uso de Função

float calcularMedia(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3.0; // conta usada para calcular a Média de três números
}

int main() {
	int numero1, numero2, numero3;
	
	printf("Digite o primeiro número inteiro: ");
	scanf("%d", &numero1); // Primeiro número inserido pelo usuário
	
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &numero2); // Segundo número inserido pelo usuário
	
	printf("Digite o terceiro número inteiro: ");
	scanf("%d", &numero3); // Terceiro número inserido pelo usuário
	
	float media = calcularMedia(numero1, numero2, numero3); // Função é chamada e armazena o valor resultante na variável media
	
	printf("A média dos três números é: %.2f\n", media); // Exibe a média dos 3 números
	
	return 0;
}

