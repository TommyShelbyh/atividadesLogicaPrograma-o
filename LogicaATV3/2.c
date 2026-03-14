#include <stdio.h>
#include <math.h> 

int main() {
    double numero, quadrado, cubo;

    
    printf("Digite um numero: ");
    scanf("%lf", &numero);

   
    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);

    
    printf("\nnumero\tquadrado\tcubo\n");
    printf("%.0f\t%.0f\t\t%.0f\n", numero, quadrado, cubo);

    return 0;
}
