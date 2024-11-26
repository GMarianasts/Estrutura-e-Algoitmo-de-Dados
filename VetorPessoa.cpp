#include <stdio.h>

// Insere e exibe os dados e informações da pessoa

// Define o campos para peso, idade e altura
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Função para imprimir os dados de uma pessoa na tela
void imprimePessoa(pessoa p) {
    printf("Peso: %.2lf kg. Idade: %d anos. Altura: %.2lf m.\n", p.peso, p.idade, p.altura);
}

// Função para ler os dados de uma pessoa do teclado
void lerPessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite a altura: ");
    scanf("%lf", &p->altura);
}

int main() {
    pessoa pessoas[5];
    
     // Lê os dados de cada pessoa e armazena no vetor
    for (int i = 0; i < 5; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        lerPessoa(&pessoas[i]); // Passa o endereço da pessoa atual para a função lerPessoa
    }
    
    // Imprime os dados de cada pessoa armazenada no vetor
    for (int i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]); // Chama a função para imprimir os dados da pessoa
    }

    return 0;
}
