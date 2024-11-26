#include <stdio.h>

//  Calcula a soma dos n�meros no array

int soma(int numb[], int tam); // Declara a Fun��o soma

int main() {
    int numb[3]; // Declara��o de um array de 3 inteiros 
    int res;

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d� n�mero inteiro: ", i + 1); // Solicita ao usu�rio que insira mais um n�mero inteiro
        scanf("%d", &numb[i]); // L� o n�mero inserido pelo usu�rio e armazena o valor no array
    }

    res = soma(numb, 3); // Fun��o � chamada com o array e o tamanho do array e o valor retornado � armazenado na vari�vel res 

    printf("A soma dos valores e: %d\n", res); // Exibe o resultado

    return 0;
}

int soma(int numb[], int tam){  // numb[]: um array de inteiros e tam: o tamanho do array
	int total = 0; // Amazena a soma dos elementos do array
    for (int i = 0; i < tam; i++) { // tam = 3, j� que o array tem 3 elementos
        total += numb[i]; // em cada itera��o o valor de numb[i] � adiconado a total
    }
    return total;
}
