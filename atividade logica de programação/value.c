#include <stdio.h>

int main() {
    float valor_total, valor_final, diferenca, valor_parcela;
    int opcao, parcelas = 1;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_total);

    printf("\n--- MENU DE PAGAMENTO ---\n");
    printf("1 - A vista (15%% de desconto)\n");
    printf("2 - Cheque pre-datado 30 dias (10%% de desconto)\n");
    printf("3 - Parcelado em 3x (5%% de desconto)\n");
    printf("4 - Parcelado em 6x (Sem desconto)\n");
    printf("5 - Parcelado em 12x (8%% de acrescimo)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            valor_final = valor_total * 0.85; // 100% - 15% = 85%
            break;
        case 2:
            valor_final = valor_total * 0.90; // 10% de desconto
            break;
        case 3:
            valor_final = valor_total * 0.95; // 5% de desconto
            parcelas = 3;
            break;
        case 4:
            valor_final = valor_total; // Sem desconto
            parcelas = 6;
            break;
        case 5:
            valor_final = valor_total * 1.08; // 8% de acréscimo
            parcelas = 12;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1; // Encerra o programa
    }

    diferenca = valor_total - valor_final;
    valor_parcela = valor_final / parcelas;
    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Valor Total Original: R$ %.2f\n", valor_total);
    printf("Valor Final a Pagar: R$ %.2f\n", valor_final);

    if (diferenca > 0) {
        printf("Desconto obtido: R$ %.2f\n", diferenca);
    } else if (diferenca < 0) {
        printf("Juros aplicados: R$ %.2f\n", -diferenca); 
    } else {
        printf("Nao houve desconto ou juros.\n");
    }

    if (parcelas > 1) {
        printf("Pagamento em %dx de: R$ %.2f\n", parcelas, valor_parcela);
    } else {
        printf("Pagamento em cota unica.\n");
    }

    return 0;
}
