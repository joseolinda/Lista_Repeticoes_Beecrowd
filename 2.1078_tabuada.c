//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1078 - Nível 1

#include <stdio.h>

int main() {
    int N; // total de valores da entrada

    scanf("%d", &N);    // lê o total de valores da entrada

    for(int i = 1; i <= 10; i++) {
        int resultado = i * N;
        printf("%d x %d = %d\n", i, N, resultado);
    }

    return 0;
}