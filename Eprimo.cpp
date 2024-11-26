#include <stdio.h>

// Verificação se um número é primo e a soma dos primos

int Eprimo(int num) {
    if (num <= 1) return 0; // Verifica se o número é menor ou igual a 1
    for (int i = 2; i * i <= num; i++) { // inicia um laço de repetição que começa em 2 e vai até a raiz quadrada de numero
        if (num % i == 0) return 0; // verifica se o numero é divisível por i. Se for, o número não é primo
    }
    return 1; // Num não divisivel por nenhum valor de i, então ele é primo e por isso retorna 1
}

int somaPrimos(int limite) { // Limita a soma dos primos (até o número inserido)
    int soma = 0; // Armazena a soma dos números primos
    for (int i = 2; i <= limite; i++) {
        if (Eprimo(i)) { // Verifica se o número i é primo
            soma += i;
        }
    }
    return soma; // Soma de todos os números primos até o limite estabelecido
}

int main() {
    int numb;

    printf("Digite um numero: ");
    scanf("%d", &numb);

    
    if (Eprimo(numb)) { // função é chamada para verificar se é primo
        printf("%d e primo.\n", numb);
    } else {
        printf("%d nao e primo.\n", numb);
    }

    int soma = somaPrimos(numb); // Função é chamada para calcular a soma dos números primos até o número inserido pelo usuário
    printf("A soma dos numeros primos ate %d e: %d.\n", numb, soma);

    return 0;
}
