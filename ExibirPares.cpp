#include <stdio.h>

// Exibe somente os valores pares at� o n�mero inserido pelo usu�rio

void exibirPares(int numero) {
	for (int i = 2; i <= numero; i += 2) {
		printf("%d", i);
	if (i + 2 <= numero) { // se i + 2 for menor ou igual ao valor inserido ele imprime uma virgula
	printf(", ");
	}
}

	printf("\n");
}

int main() {
	int numero;
	
	printf("Digite um n�mero inteiro: "); 
	scanf("%d", &numero); // N�mero inserido pelo usu�rio
	
	exibirPares(numero); // Fun��o � chamada para exibir os n�meros pares de 2 ate o n�mero inserido pelo usu�rio
	
	return 0;
}

