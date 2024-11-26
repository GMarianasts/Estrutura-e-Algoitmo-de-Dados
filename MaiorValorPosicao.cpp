#include <stdio.h>

// Função para encontrar o maior valor e sua posição no vetor
void encontrarMaiorValor(int vetor[], int tamanho) {
    int maiorValor = vetor[0]; 
    int posicao = 0;           

    // Percorre o vetor para encontrar o maior valor
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];  // Atualiza o maior valor
            posicao = i;            // Atualiza a posição do maior valor
        }
    }

    // Imprime o maior valor e sua posição
    printf("O maior valor é %d e está na posição %d.\n", maiorValor, posicao);
}

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Cria o vetor com o tamanho fornecido
    int vetor[tamanho];

    // Preenche o vetor com valores fornecidos pelo usuário
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Chama a função para encontrar o maior valor e sua posição
    encontrarMaiorValor(vetor, tamanho);

    return 0;
}

