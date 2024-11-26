#include <stdio.h>

// Soma simples com Função

int soma(int x, int y){ // Criação da Função soma
	return x + y; // conta usada para realizar a soma de 2 números
}

int main(){
	int numb1, numb2, res;
	
	printf("Digite o primiero numero: ");
	scanf("%d", &numb1); // Primeiro número inserido pelo usuário
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numb2); // Segundo número inserido pelo usuário
	
	res = soma(numb1, numb2); // Função é chamada com os números inseridos pelo usuário e retorna o valor que é armazenado na variável resultado
	
	printf("A soma dos numeros e: %d\n;", res); // Exibe o resultado
}
