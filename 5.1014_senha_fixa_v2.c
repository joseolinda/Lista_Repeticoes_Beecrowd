//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1014 - Nível 1

#include <stdio.h>

int main() {
    // A senha 2002 é fixa e definida pelo problema
    int senha = 2002, entrada;

    printf("Digite a senha: ");
    scanf("%d", &entrada);

    while (entrada != senha) {
        printf("Senha Invalida. Tente novamente: ");
        scanf("%d", &entrada);
    }

    // Como o loop só é quebrado quando a senha é válida
    // não é necessário verificar se a senha é válida novamente
    // basta imprimir a mensagem de acesso permitido

    printf("Acesso Permitido\n");
}