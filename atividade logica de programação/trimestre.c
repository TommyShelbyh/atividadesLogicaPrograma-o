#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
        case 2:
        case 3:
            printf("1o Trimestre\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("2o Trimestre\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("3o Trimestre\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("4o Trimestre\n");
            break;
        default:
            printf("Erro: Numero invalido! Digite um valor entre 1 e 12.\n");
    }

    return 0;
}
