#include <stdio.h>

// Calcula o n-ésimo termo da sequência de Fibonacci

int fibonacci(int n) {
    if (n == 0) { // Se o número for 0, a função retorna 0 (1º valor na sequÊncia de Fibonacci
        return 0; 
    } else if (n == 1) { // Se o número for 1, a função retorna 1 (2º valor na sequência de Fibonacci
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Fórmula da sequência de Fibonacci
    }
}

int main() {
    int n = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n); // número inserido pelo usuário

    int resultado = fibonacci(n); // Função é chamada com o número inserido pelo usuário e o valor retornado é armazenado na variável resultado
    printf("O %d-esimo termo da serie de Fibonacci e: %d\n", n, resultado);

    return 0;
}
