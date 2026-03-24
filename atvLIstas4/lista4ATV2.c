#include <stdio.h>

int main() {
    int numero;


    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0) {
        printf("é múltiplo de 3\n");
    } else {
        printf("não é múltiplo de 3\n");
    }

    return 0;
}
