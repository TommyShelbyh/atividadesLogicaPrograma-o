#include <stdio.h>

int main() {
    float valor_total, valor_desconto, valor_acrescimo;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_total);

    valor_desconto = valor_total * 0.90;

    valor_acrescimo = valor_total * 1.05;

    printf("\n--- Simulacao de Valores --- \n");
    printf("Valor original:          R$ %.2f\n", valor_total);
    printf("Com desconto (10%%):     R$ %.2f\n", valor_desconto);
    printf("Com acrescimo (5%%):      R$ %.2f\n", valor_acrescimo);

    return 0;
}
