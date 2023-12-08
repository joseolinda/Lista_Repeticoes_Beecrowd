//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1074 - Nível 2

#include <stdio.h>

int main() {
    int N; // total de valores da entrada

    scanf("%d", &N);    // lê o total de valores da entrada

    for(int i = 0; i < N; i++) {
        int X;  // valor da entrada
        scanf("%d", &X);    // lê o valor da entrada

        if(X == 0) {
            printf("NULL\n");  // se o valor da entrada for 0, imprime NULL
        } else if(X % 2 == 0) { // se o valor da entrada for par
            if(X > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else { // se o valor da entrada for ímpar
            if(X > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}