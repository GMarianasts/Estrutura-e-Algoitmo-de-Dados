#include <stdio.h>

// Função para calcular a média das notas

float media() {
    float nota1, nota2, nota3, nota4;

    printf("Digite a nota 1: "); // Pede para o usuário inserir a 1º nota
    scanf("%.2f", &nota1);

    printf("Digite a nota 2: "); // Pede para o usuário inserir a 2º nota
    scanf("%.2f", &nota2);

    printf("Digite a nota 3: "); // Pede para o usuário inserir a 3º nota
    scanf("%.2f", &nota3);

    printf("Digite a nota 4: "); // Pede para o usuário inserir a 4º nota
    scanf("%.2f", &nota4);

    return (nota1 + nota2 + nota3 + nota4) / 4; // Calcula e retorna a média
}

int main() {
    float M = media(); // Chama a função e armazena o resultado

    printf("A média e: %.2f\n", M);
    if (M >= 7.0) {
        printf("Aprovado!\n"); // Exibe Aprovado se a média forma maior ou igual a 7
    } else {
        printf("Reprovado!\n"); // Exibe Reprovado se a média for menor que 7
    }

    return 0;
}

7
