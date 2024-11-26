#include <stdio.h>


// Função para exibir os números ímpares de 1 até o número fornecido, excluindo múltiplos de 7
void exibirImpares(int n) {
    for (int i = 1; i <= n; i++) {
    	 // Verifica se o número atual (i) é ímpar e não é múltiplo de 7
        if (i % 2 != 0 && i % 7 != 0) { 
            printf("%d ", i); 
        } 
    }
    printf("\n");
}

int main() {
    int num;  // Declara uma variável inteira para armazenar o número digitado
    printf("Digite um número: ");
    scanf("%d", &num);
    
    // Chama a função para exibir os números ímpares
    exibirImpares(num);
    return 0; 
}

