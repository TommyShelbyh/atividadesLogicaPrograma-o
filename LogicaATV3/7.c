#include <stdio.h>

int main() {
    int numero, milhar, centena, dezena, unidade, soma;


    printf("Digite um numero inteiro de quatro algarismos: ");
    scanf("%d", &numero);

 
    milhar = numero / 1000;

   
    centena = (numero % 1000) / 100;

  
   
    dezena = (numero % 100) / 10;

    unidade = numero % 10;

    soma = milhar + centena + dezena + unidade;

    printf("\nA soma dos digitos e: %d + %d + %d + %d = %d\n", 
            milhar, centena, dezena, unidade, soma);

    return 0;
}
