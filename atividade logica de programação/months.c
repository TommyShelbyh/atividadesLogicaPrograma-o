#include <stdio.h>

int main() {
    int mes, ano;

    printf("Digite o numero do mes (1-12): ");
    scanf("%d", &mes);

    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Este mes tem 31 dias.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Este mes tem 30 dias.\n");
            break;
        case 2:
            printf("Digite o ano: ");
            scanf("%d", &ano);
        
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                printf("O ano %d eh bissexto. Fevereiro tem 29 dias.\n", ano);
            } else {
                printf("O ano %d nao eh bissexto. Fevereiro tem 28 dias.\n", ano);
            }
            break;

        default:
            printf("Erro: Mes invalido.\n");
    }

    return 0;
}
