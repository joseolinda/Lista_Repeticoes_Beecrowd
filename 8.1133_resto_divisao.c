//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1133 - Nível 3

#include <stdio.h>

int main() {
    int x, y, i, aux;
    scanf("%d %d", &x, &y);
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    for (i = x + 1; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }
    return 0;
}