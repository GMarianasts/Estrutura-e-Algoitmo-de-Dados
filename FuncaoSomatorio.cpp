#include <stdio.h>

// Calcula a soma dos elementos do vetor

int soma(int numb[], int tam); // Assinatura da Fun��o com dois par�metros, numb[]: um vetor de valores inteiros e tam: tamanho do vetor

int main() {
    int numb[5] = {5, 1, 2, 1, 8}; // A vari�vel numb[5] declarada com um vetor de 5 n�meros inteiros, com valores j� atribuidos
    int tam = 5; // A vari�vel tam declarada com o tamanho do vetor = 5

    int res = soma(numb, tam); // A fun��o soma � chamada com o vetor numb e o tamanho tam como argumento. O valoe retornado pela fun��o � armazenado na vari�vel res

    printf("O resultado da soma e: %d\n", res); // Exibe na tela o resultado da soma dos elementos do vetor, que est� armazenado na vari�vel res

    return 0;
}

int soma(int numb[], int tam) { // A fun��o soma e definida e recebe dois par�metros, numb[]: vetor de n�meros e tam: tamanho do vetor
    int total = 0; // acumula a soma dos elementos do vetor
    for (int i = 0; i < tam; i++) { // A posi��o i vai de 0 at� a �tima posi��o do vetor
        // Vai somando cada valor de numb[i] � vari�vel total
		total += numb[i]; // numb[i] acessa o valor do vetor na posi��o i
    }
    return total; // A fun��o retorna a soma de todos os elementos do vetor, que est� armazenado na vari�vel total
}
