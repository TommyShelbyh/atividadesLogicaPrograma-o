#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    printf("--- Calculadora de Consumo de Combustível ---\n");

   
    printf("Digite a distância percorrida (km): ");
    scanf("%f", &distancia);

   
    printf("Digite o total de combustível gasto (litros): ");
    scanf("%f", &combustivel);

    
    if (combustivel > 0) {
        
        consumo = distancia / combustivel;

        
        printf("\nO consumo médio do veículo é: %.2f km/l\n", consumo);
    } else {
        printf("\nErro: O combustível gasto deve ser maior que zero.\n");
    }

    return 0;
}
