//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1078 - Nível 1

#include <stdio.h>

int main() {
    int N; // total de valores da entrada

    printf("Digite um valor entre 2 e 1000: ");
    scanf("%d", &N);    // lê o total de valores da entrada

    // Verifica se o valor de N está dentro do intervalo válido
    while (N < 2 || N > 1000) {
        printf("Valor inválido! Digite um valor entre 2 e 1000: ");
        scanf("%d", &N);
    }

    printf("Tabuada de %d:\n", N);

    for(int i = 1; i <= 10; i++) {
        int resultado = i * N;
        printf("%d x %d = %d\n", i, N, resultado);
    }

    return 0;
}