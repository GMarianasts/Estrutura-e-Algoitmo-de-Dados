#include <stdio.h>

//  Compara dois n�meros e retorna o maior com Fun��o

int maior(int x, int y){ // A fun��o recebe dois par�metros
	if (x > y){ // se o n�mero x for maior que y
		return x; // a fun��o retorna o valor de x
	}else{ // Caso o n�mero y for maior que x
		return y; // a fun��o retorna o valor de y
	}
}

int main(){
	int numb1, numb2, res; // As varo�veis numb1 e numb2 s�o declaradas para armazenar os n�meros inseridos pelo usu�rio e a vari�vel res foi declarada para armazenar o resultado da compara��o
	
	printf("Digite o primeiro numero: "); // Pede para o usu�rio inserir o 1� n�mero inteiro
	scanf("%d", &numb1);
	printf("Digite o segundo numero: "); // Pede para o usu�rio inserir o 2� n�mero inteiro
	scanf("%d", &numb2);
	
	res = maior(numb1, numb2); // A fun��o maior � chamada com os valores de numb1 e numb2 e retorna o maior deles
	
	printf("O maior numero e: %d", res); // Exibe na tela o valor de res, que � o maior n�mero entre os dois inseridos pelo usu�rio
}
