#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    
    antecessor = numero - 1;
    sucessor = numero + 1;

   
    printf("\nAnalise do numero %d:\n", numero);
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor:   %d\n", sucessor);

    return 0;
}
