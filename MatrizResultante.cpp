#include <stdio.h>

int main() {
    int n;

    // Pede pro usuário o tamanho da matriz
    printf("Digite o tamanho da matriz n: ");
    scanf("%d", &n);

    int mat[n][n];  // Declara a matriz de tamanho n x n

    // Preenche a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                mat[i][j] = 0; // Acima da diagonal, preenche com zero
            } else {
                mat[i][j] = j + 1; // Abaixo da diagonal, preenche com o número da coluna
            }
        }
    }

    // Mostra o resultado da matriz
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
