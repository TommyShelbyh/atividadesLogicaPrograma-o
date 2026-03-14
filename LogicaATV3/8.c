#include <stdio.h>

int main() {
    int tempoTotal, horas, minutos, segundos, resto;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempoTotal);

    horas = tempoTotal / 3600;

    resto = tempoTotal % 3600;
    minutos = resto / 60;

    segundos = resto % 60;

    printf("\n%ds = %d:%d:%d\n", tempoTotal, horas, minutos, segundos);

    return 0;
}
