#include <stdio.h>

// Verifica��o se um n�mero � primo e a soma dos primos

int Eprimo(int num) {
    if (num <= 1) return 0; // Verifica se o n�mero � menor ou igual a 1
    for (int i = 2; i * i <= num; i++) { // inicia um la�o de repeti��o que come�a em 2 e vai at� a raiz quadrada de numero
        if (num % i == 0) return 0; // verifica se o numero � divis�vel por i. Se for, o n�mero n�o � primo
    }
    return 1; // Num n�o divisivel por nenhum valor de i, ent�o ele � primo e por isso retorna 1
}

int somaPrimos(int limite) { // Limita a soma dos primos (at� o n�mero inserido)
    int soma = 0; // Armazena a soma dos n�meros primos
    for (int i = 2; i <= limite; i++) {
        if (Eprimo(i)) { // Verifica se o n�mero i � primo
            soma += i;
        }
    }
    return soma; // Soma de todos os n�meros primos at� o limite estabelecido
}

int main() {
    int numb;

    printf("Digite um numero: ");
    scanf("%d", &numb);

    
    if (Eprimo(numb)) { // fun��o � chamada para verificar se � primo
        printf("%d e primo.\n", numb);
    } else {
        printf("%d nao e primo.\n", numb);
    }

    int soma = somaPrimos(numb); // Fun��o � chamada para calcular a soma dos n�meros primos at� o n�mero inserido pelo usu�rio
    printf("A soma dos numeros primos ate %d e: %d.\n", numb, soma);

    return 0;
}
