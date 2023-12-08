//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1116 - Nível 1

#include <stdio.h>

int main() {
    int N, X, Y;
    printf("Digite a quantidade de casos/testes: ");
    scanf("%d", &N); // Quantidade de casos/testes

    for (int i = 0; i < N; i++) {
        printf("Digite o valor de X: ");
        scanf("%d", &X);
        printf("Digite o valor de Y: ");
        scanf("%d", &Y);

        if (Y == 0) {
            printf("Divisão impossível!\n");
        } else {
            // Use (float) para converter/forçar o resultado da divisão para float
            // Pois dividir inteiros resulta em um inteiro
            printf("Resultado da divisão: %.1f\n", (float) X / Y);
        }
    }

    return 0;
}