//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1099 - Nível 1

#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d", &N); // Quantidade de casos/testes
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);
        if (X > Y) {
            // Troca de valores sem variável auxiliar
            X = X + Y;
            Y = X - Y;
            X = X - Y;
        }
        int soma = 0; // Zerando a soma para cada caso
        for (int j = X + 1; j < Y; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}