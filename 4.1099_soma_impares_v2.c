//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1099 - Nível 1

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
        printf("A soma dos números ímpares entre X e Y é: %d\n", soma);
    }
    return 0;
}