#include <stdio.h>

// Calcula o n-�simo termo da sequ�ncia de Fibonacci

int fibonacci(int n) {
    if (n == 0) { // Se o n�mero for 0, a fun��o retorna 0 (1� valor na sequ�ncia de Fibonacci
        return 0; 
    } else if (n == 1) { // Se o n�mero for 1, a fun��o retorna 1 (2� valor na sequ�ncia de Fibonacci
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // F�rmula da sequ�ncia de Fibonacci
    }
}

int main() {
    int n = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n); // n�mero inserido pelo usu�rio

    int resultado = fibonacci(n); // Fun��o � chamada com o n�mero inserido pelo usu�rio e o valor retornado � armazenado na vari�vel resultado
    printf("O %d-esimo termo da serie de Fibonacci e: %d\n", n, resultado);

    return 0;
}
