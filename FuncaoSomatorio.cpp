#include <stdio.h>

// Calcula a soma dos elementos do vetor

int soma(int numb[], int tam); // Assinatura da Função com dois parâmetros, numb[]: um vetor de valores inteiros e tam: tamanho do vetor

int main() {
    int numb[5] = {5, 1, 2, 1, 8}; // A variável numb[5] declarada com um vetor de 5 números inteiros, com valores já atribuidos
    int tam = 5; // A variável tam declarada com o tamanho do vetor = 5

    int res = soma(numb, tam); // A função soma é chamada com o vetor numb e o tamanho tam como argumento. O valoe retornado pela função é armazenado na variável res

    printf("O resultado da soma e: %d\n", res); // Exibe na tela o resultado da soma dos elementos do vetor, que está armazenado na variável res

    return 0;
}

int soma(int numb[], int tam) { // A função soma e definida e recebe dois parâmetros, numb[]: vetor de números e tam: tamanho do vetor
    int total = 0; // acumula a soma dos elementos do vetor
    for (int i = 0; i < tam; i++) { // A posição i vai de 0 até a útima posição do vetor
        // Vai somando cada valor de numb[i] à variável total
		total += numb[i]; // numb[i] acessa o valor do vetor na posição i
    }
    return total; // A função retorna a soma de todos os elementos do vetor, que está armazenado na variável total
}
