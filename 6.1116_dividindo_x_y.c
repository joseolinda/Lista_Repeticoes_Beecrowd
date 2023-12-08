//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1116 - Nível 1

#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d", &N); // Quantidade de casos/testes
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            // Use (float) para converter/forçar o resultado da divisão para float
            // Pois dividir inteiros resulta em um inteiro
            printf("%.1f\n", (float) X / Y);
        }
    }
    return 0;
}