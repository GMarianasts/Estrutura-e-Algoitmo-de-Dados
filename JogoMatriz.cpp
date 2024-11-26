#include <stdio.h>

// Pontuação de Jogos com Matriz

int main() {
    int pont[3][5]; //armazena as pontuações dos 3 jogadores em 5 jogos
    int total[3] = {0}; // armazena os pontos de cada jogador
    int vencedor = 0; // armazena os pontos do jogador vencedor
    int maior_pont = 0; // armazena a maior pontuação total

    // colocando os valores na matriz com as pontuações dos jogadores
    for (int i = 0; i < 3; i++) {
        printf("Digite as pontuacoes do jogador %d (5 jogos):\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Jogo %d: ", j + 1);
            scanf("%d", &pont[i][j]);
            total[i] += pont[i][j]; // Calcula a pontuação total do jogador
        }
    }

    // Mostra as pontuações totais de cada jogador
    printf("\n Pontuacoes totais dos jogadores:\n");
    for (int i = 0; i < 3; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, total[i]);
        // Verificando o jogador vencedor
        if (total[i] > maior_pont) {
            maior_pont = total[i];
            vencedor = i;
        }
    }

    //Mostra o vencedor
    printf("\nO jogador vencedor e o Jogador %d com %d pontos.\n", vencedor + 1, maior_pont);

    return 0;
}
