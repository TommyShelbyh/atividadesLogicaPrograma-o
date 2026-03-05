#include <stdio.h>

int main() {
    float vendas, comissao;

    printf("Digite o total de vendas: ");

    scanf("%f", &vendas);
    
  
    comissao = vendas * 0.10;
    
   
    printf("Comissao (10%%): R$ %.2f\n", comissao);

    return 0;
}
