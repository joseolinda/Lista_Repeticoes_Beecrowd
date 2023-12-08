//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1133 - Nível 3

#include <stdio.h>

int main() {
    int x, y, i, aux;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }

    printf("Os números entre %d e %d que possuem resto 2 ou 3 na divisão por 5 são:\n", x, y);
    for (i = x + 1; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}