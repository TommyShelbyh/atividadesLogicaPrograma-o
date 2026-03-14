#include <stdio.h>

int main() {
    float valorTotal, valorPrestacao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);

    
    valorPrestacao = valorTotal / 5;

    printf("\nCompra parcelada\n");
    printf("5 x %.2f = %.2f\n", valorPrestacao, valorTotal);

    return 0;
}
