#include <stdio.h>

// Fun��o para calcular a m�dia das notas

float media() {
    float nota1, nota2, nota3, nota4;

    printf("Digite a nota 1: "); // Pede para o usu�rio inserir a 1� nota
    scanf("%.2f", &nota1);

    printf("Digite a nota 2: "); // Pede para o usu�rio inserir a 2� nota
    scanf("%.2f", &nota2);

    printf("Digite a nota 3: "); // Pede para o usu�rio inserir a 3� nota
    scanf("%.2f", &nota3);

    printf("Digite a nota 4: "); // Pede para o usu�rio inserir a 4� nota
    scanf("%.2f", &nota4);

    return (nota1 + nota2 + nota3 + nota4) / 4; // Calcula e retorna a m�dia
}

int main() {
    float M = media(); // Chama a fun��o e armazena o resultado

    printf("A m�dia e: %.2f\n", M);
    if (M >= 7.0) {
        printf("Aprovado!\n"); // Exibe Aprovado se a m�dia forma maior ou igual a 7
    } else {
        printf("Reprovado!\n"); // Exibe Reprovado se a m�dia for menor que 7
    }

    return 0;
}

7
