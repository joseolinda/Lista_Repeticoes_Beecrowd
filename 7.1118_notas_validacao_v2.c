//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1118 - Nível 1

#include <stdio.h>

#include <stdio.h>

int main() {
    float n1, n2, media;
    int X = 1;

    while (X == 1) {
        printf("Digite a primeira nota (entre 0 e 10): ");
        scanf("%f", &n1);
        while (n1 < 0 || n1 > 10) {
            printf("Nota inválida! Digite novamente: ");
            scanf("%f", &n1);
        }

        printf("Digite a segunda nota (entre 0 e 10): ");
        scanf("%f", &n2);
        while (n2 < 0 || n2 > 10) {
            printf("Nota inválida! Digite novamente: ");
            scanf("%f", &n2);
        }

        media = (n1 + n2) / 2;
        printf("Média = %.2f\n", media);

        printf("Deseja realizar um novo cálculo? (1-sim 2-não): ");
        scanf("%d", &X);
        while (X != 1 && X != 2) {
            printf("Opção inválida! Digite novamente: ");
            scanf("%d", &X);
        }
    }

    return 0;
}