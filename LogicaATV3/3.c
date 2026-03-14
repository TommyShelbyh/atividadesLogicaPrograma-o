#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    
    printf("Digite um numero real: ");
    scanf("%lf", &numero);

 
    printf("\nNumero original: %.2f\n", numero);
    printf("Arredondamento para baixo (floor): %.0f\n", floor(numero));
    printf("Arredondamento para cima (ceil): %.0f\n", ceil(numero));

    return 0;
}
