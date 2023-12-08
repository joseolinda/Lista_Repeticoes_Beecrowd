//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1134 - Nível 1

#include <stdio.h>

int main() {
    int alcool = 0, gasolina = 0, diesel = 0, tipo;
    while (tipo != 4) {
        scanf("%d", &tipo);
        if (tipo == 1) {
            alcool++;
        } else if (tipo == 2) {
            gasolina++;
        } else if (tipo == 3) {
            diesel++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}