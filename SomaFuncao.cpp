#include <stdio.h>

// Soma simples com Fun��o

int soma(int x, int y){ // Cria��o da Fun��o soma
	return x + y; // conta usada para realizar a soma de 2 n�meros
}

int main(){
	int numb1, numb2, res;
	
	printf("Digite o primiero numero: ");
	scanf("%d", &numb1); // Primeiro n�mero inserido pelo usu�rio
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numb2); // Segundo n�mero inserido pelo usu�rio
	
	res = soma(numb1, numb2); // Fun��o � chamada com os n�meros inseridos pelo usu�rio e retorna o valor que � armazenado na vari�vel resultado
	
	printf("A soma dos numeros e: %d\n;", res); // Exibe o resultado
}
