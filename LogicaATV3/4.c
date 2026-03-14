#include <stdio.h>

int main() {
    int nota1, nota2, nota3;
    float media;

    
    printf("Digite a primeira nota (inteiro): ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota (inteiro): ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota (inteiro): ");
    scanf("%d", &nota3);

  
    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("\nA media aritmetica e: %.2f\n", media);

    return 0;
}
