#include <stdio.h>

int main() {
    int numero, dobro;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    dobro = numero * 2;

    printf("O dobro de %d e: %d\n", numero, dobro);

    return 0;
}
