#include <stdio.h>

// Calcula a Média da tuma e a Média geral da escola

double mediaTurma(int numbAlunos) { // Calcula a média de uma turma
    double soma = 0.0;
    double nota;

    for (int i = 1; i <= numbAlunos; i++) { // Insere a quantidade de alunos
        printf("Digite a nota do aluno %d: ", i); // Insere a nota de cada aluno
        scanf("%lf", &nota);
        soma += nota; // As notas inseridas é somada à variável soma
    }

    return soma / numbAlunos; // A função retorna a média das notas 
}

double mediaEscola(int numbTurmas) {v // Calcula a média geral da escola
    double somaMedias = 0.0; // Acumula as médias de todas as turmas

    for (int i = 1; i <= numbTurmas; i++) {
        int numbAlunos;
        printf("Digite o numero de alunos na turma %d: ", i); // pede a quantidade de alunos na turma
        scanf("%d", &numbAlunos);

        double media = mediaTurma(numbAlunos); // Função é chamada para calcular a média da turma e o valor retornado é armazenado na variável media
        printf("A media da turma %d e: %.2lf\n", i, media); // Exibe a média da turma
        somaMedias += media;  // A média da turma é somada à variável somaMedias, onde acumula a média de todas as turmas
    }

    return somaMedias / numbTurmas; // A função retorna a média geral da escola
}

int main() {
    int numbTurmas; // armazena o número de turmas fornecido pelo usuário
    
    printf("Digite o numero de turmas: "); // Solicita para inserir o número de turmas
    scanf("%d", &numbTurmas);

    double mediaGeral = mediaEscola(numbTurmas); // A função é chamada com o número de turmas. O valor retornado, a média geral da escola, é armazenado na variável mediaGeral
    printf("A média geral da escola e: %.2lf\n", mediaGeral); // Exibe a média geral

    return 0;
}
