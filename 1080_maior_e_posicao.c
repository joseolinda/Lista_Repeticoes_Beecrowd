//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1080 - Nível 2

#include <stdio.h>

int main() {
    int  maior, posicao;

    for(int i = 1; i <= 100; i++) {
        int valor;
        scanf("%d", &valor);
        if (i == 1) {
            // Na primeira iteração, o maior valor é o primeiro valor
            // Logo, o maior valor é o valor lido e a posição é 1
            maior = valor;
            posicao = i;
        } else {
            if (valor > maior) {
                maior = valor;
                posicao = i;
            }
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}