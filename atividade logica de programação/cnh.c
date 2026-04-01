#include <stdio.h>
#include <ctype.h>

int main() {
    char categoria;

    printf("Digite a categoria da CNH: ");
    scanf(" %c", &categoria);
    
    categoria = toupper(categoria);

    switch(categoria) {
        case 'A':
            printf("Veiculo permitido: Moto\n");
            break;
        case 'B':
            printf("Veiculo permitido: Carro\n");
            break;
        case 'C':
            printf("Veiculo permitido: Caminhao\n");
            break;
        case 'D':
            printf("Veiculo permitido: Onibus\n");
            break;
        case 'E':
            printf("Veiculo permitido: Carreta\n");
            break;
        default:
            printf("Categoria invalida.\n");
    }

    return 0;
}
