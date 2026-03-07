#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Informe o valor da base do retangulo: ");
    scanf("%f", &base);

    printf("Informe o valor da altura do retangulo: ");
    scanf("%f", &altura);
    
    area = base * altura;
    printf("\n--- Resultados --- \n");
    printf("Base:   %.2f\n", base);
    printf("Altura: %.2f\n", altura);
    printf("Area total: %.2f unidades de medida\n", area);

    return 0;
}
