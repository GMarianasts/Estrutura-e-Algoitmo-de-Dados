#include <stdio.h>

// Exibe somente os valores pares até o número inserido pelo usuário

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
	
	printf("Digite um número inteiro: "); 
	scanf("%d", &numero); // Número inserido pelo usuário
	
	exibirPares(numero); // Função é chamada para exibir os números pares de 2 ate o número inserido pelo usuário
	
	return 0;
}

