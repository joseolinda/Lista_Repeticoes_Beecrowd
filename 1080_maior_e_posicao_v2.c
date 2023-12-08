//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1080 - Nível 2

#include <stdio.h>

int main() {
    int maior, posicao;

    // Inicializa o maior valor e a posição com zero
    maior = 0;
    posicao = 0;

    // Loop para ler os 100 valores
    for(int i = 1; i <= 100; i++) {
        int valor;

        // Solicita a entrada do valor
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);

        // Verifica se o valor lido é maior que o maior valor atual
        if (valor > maior) {
            // Atualiza o maior valor e a posição
            maior = valor;
            posicao = i;
        }
    }

    // Imprime o maior valor e a posição
    printf("O maior valor é: %d\n", maior);
    printf("A posição do maior valor é: %d\n", posicao);

    return 0;
}