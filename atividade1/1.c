#include <stdio.h>

int main() {
    
    int valorA, valorB, resoma, ressub, resmult;
    float resdivisao;

    printf("--- Programa para calcular as operacoes ---\n");
    
    printf("Digite o valor de A: ");
    scanf("%d", &valorA); 
    
    printf("Digite o valor de B: ");
    scanf("%d", &valorB); 

    
    resoma = valorA + valorB;
    ressub = valorA - valorB;
    resmult = valorA * valorB;
    
    
    resdivisao = (float)valorA / valorB;

    
    printf("Soma: %d\n", resoma);
    printf("Subtracao: %d\n", ressub);
    printf("Multiplicacao: %d\n", resmult);
    printf("Divisao: %.2f\n", resdivisao); 

    return 0;
}
