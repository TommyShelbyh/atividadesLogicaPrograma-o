#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, mh, mq;

    
    printf("Digite os quatro valores (a, b, c, d) separados por espaco: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

   
    mh = 4 / ((1/a) + (1/b) + (1/c) + (1/d));


    mq = sqrt((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4);

    // Resultados
    printf("\n--- Resultados ---\n");
    printf("Media Harmonica (MH): %.2f\n", mh);
    printf("Media Quadratica (MQ): %.2f\n", mq);

    return 0;
}
