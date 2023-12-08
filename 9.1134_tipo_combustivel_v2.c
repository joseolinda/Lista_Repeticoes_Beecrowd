//
// Created by JoseOlinda on 08/12/2023.
//
// Beecrowd 1134 - Nível 1

#include <stdio.h>

#include <stdio.h>

int main() {
    int alcool = 0, gasolina = 0, diesel = 0, tipo;
    
    printf("Informe o tipo de combustível (1 - Álcool, 2 - Gasolina, 3 - Diesel, 4 - Sair):\n");
    
    while (1) {
        scanf("%d", &tipo);
        
        if (tipo == 1) {
            alcool++;
        } else if (tipo == 2) {
            gasolina++;
        } else if (tipo == 3) {
            diesel++;
        } else if (tipo == 4) {
            break;
        } else {
            printf("Tipo de combustível inválido. Por favor, informe novamente:\n");
            continue;
        }
        
        printf("Tipo de combustível registrado com sucesso. Informe o próximo tipo (ou 4 para sair):\n");
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    
    return 0;
}