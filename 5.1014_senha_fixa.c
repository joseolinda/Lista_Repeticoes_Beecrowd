//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1014 - Nível 1

#include <stdio.h>

int main() {
    int senha = 2002, entrada;

    do {
        scanf("%d", &entrada);
        if (entrada != senha) {
            printf("Senha Invalida\n");
        }
    } while (entrada != senha);

    printf("Acesso Permitido\n");
}