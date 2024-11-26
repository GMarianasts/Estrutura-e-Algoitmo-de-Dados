#include <stdio.h>

// Calcula a M�dia da tuma e a M�dia geral da escola

double mediaTurma(int numbAlunos) { // Calcula a m�dia de uma turma
    double soma = 0.0;
    double nota;

    for (int i = 1; i <= numbAlunos; i++) { // Insere a quantidade de alunos
        printf("Digite a nota do aluno %d: ", i); // Insere a nota de cada aluno
        scanf("%lf", &nota);
        soma += nota; // As notas inseridas � somada � vari�vel soma
    }

    return soma / numbAlunos; // A fun��o retorna a m�dia das notas 
}

double mediaEscola(int numbTurmas) {v // Calcula a m�dia geral da escola
    double somaMedias = 0.0; // Acumula as m�dias de todas as turmas

    for (int i = 1; i <= numbTurmas; i++) {
        int numbAlunos;
        printf("Digite o numero de alunos na turma %d: ", i); // pede a quantidade de alunos na turma
        scanf("%d", &numbAlunos);

        double media = mediaTurma(numbAlunos); // Fun��o � chamada para calcular a m�dia da turma e o valor retornado � armazenado na vari�vel media
        printf("A media da turma %d e: %.2lf\n", i, media); // Exibe a m�dia da turma
        somaMedias += media;  // A m�dia da turma � somada � vari�vel somaMedias, onde acumula a m�dia de todas as turmas
    }

    return somaMedias / numbTurmas; // A fun��o retorna a m�dia geral da escola
}

int main() {
    int numbTurmas; // armazena o n�mero de turmas fornecido pelo usu�rio
    
    printf("Digite o numero de turmas: "); // Solicita para inserir o n�mero de turmas
    scanf("%d", &numbTurmas);

    double mediaGeral = mediaEscola(numbTurmas); // A fun��o � chamada com o n�mero de turmas. O valor retornado, a m�dia geral da escola, � armazenado na vari�vel mediaGeral
    printf("A m�dia geral da escola e: %.2lf\n", mediaGeral); // Exibe a m�dia geral

    return 0;
}
