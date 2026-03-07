#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;


    printf("Digite os 4 valores reais separados por espaco: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    
    media = (n1 + n2 + n3 + n4) / 4;

    
    printf("\nA media dos valores informados é: %.2f\n", media);

    return 0;
}
