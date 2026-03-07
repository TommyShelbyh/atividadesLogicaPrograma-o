#include <stdio.h>

int main() {
    float valor_pago, preco_produto, troco;

    
    printf("Digite o preco do produto (R$): ");
    scanf("%f", &preco_produto);

    printf("Digite o valor pago pelo cliente (R$): ");
    scanf("%f", &valor_pago);

   
    if (valor_pago >= preco_produto) {
        troco = valor_pago - preco_produto;
        printf("\ntroco a devolver: R$ %.2f\n", troco);
    } else {
       
        printf("\nvalor insuficiente seu pobre! Faltam: R$ %.2f\n", preco_produto - valor_pago);
    }

    return 0;
}
