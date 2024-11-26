#include <stdio.h>

//  Calcula a soma dos números no array

int soma(int numb[], int tam); // Declara a Função soma

int main() {
    int numb[3]; // Declaração de um array de 3 inteiros 
    int res;

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d° número inteiro: ", i + 1); // Solicita ao usuário que insira mais um número inteiro
        scanf("%d", &numb[i]); // Lê o número inserido pelo usuário e armazena o valor no array
    }

    res = soma(numb, 3); // Função é chamada com o array e o tamanho do array e o valor retornado é armazenado na variável res 

    printf("A soma dos valores e: %d\n", res); // Exibe o resultado

    return 0;
}

int soma(int numb[], int tam){  // numb[]: um array de inteiros e tam: o tamanho do array
	int total = 0; // Amazena a soma dos elementos do array
    for (int i = 0; i < tam; i++) { // tam = 3, já que o array tem 3 elementos
        total += numb[i]; // em cada iteração o valor de numb[i] é adiconado a total
    }
    return total;
}
