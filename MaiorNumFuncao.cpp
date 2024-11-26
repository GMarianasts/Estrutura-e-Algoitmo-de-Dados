#include <stdio.h>

//  Compara dois números e retorna o maior com Função

int maior(int x, int y){ // A função recebe dois parâmetros
	if (x > y){ // se o número x for maior que y
		return x; // a função retorna o valor de x
	}else{ // Caso o número y for maior que x
		return y; // a função retorna o valor de y
	}
}

int main(){
	int numb1, numb2, res; // As varoáveis numb1 e numb2 são declaradas para armazenar os números inseridos pelo usuário e a variável res foi declarada para armazenar o resultado da comparação
	
	printf("Digite o primeiro numero: "); // Pede para o usuário inserir o 1º número inteiro
	scanf("%d", &numb1);
	printf("Digite o segundo numero: "); // Pede para o usuário inserir o 2º número inteiro
	scanf("%d", &numb2);
	
	res = maior(numb1, numb2); // A função maior é chamada com os valores de numb1 e numb2 e retorna o maior deles
	
	printf("O maior numero e: %d", res); // Exibe na tela o valor de res, que é o maior número entre os dois inseridos pelo usuário
}
