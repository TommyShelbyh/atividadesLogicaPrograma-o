#include <stdio.h>

int main() {
    float dolar, cotacao, real;

    printf("Qual o valor do produto em dolar: ");
    scanf("%f", &dolar); 

    printf("Qual o valor da cotacao do dolar: ");
    scanf("%f", &cotacao); 
    
   
    real = dolar * cotacao;
    
    
    printf("O valor do produto em real = R$%.2f\n", real);
    
    return 0;
}
