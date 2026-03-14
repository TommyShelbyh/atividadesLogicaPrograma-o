#include <stdio.h>
#include <math.h>

int main(){
	double x, raiz;
	printf("Informe o valor para calcular a raiz quadrada: ");
	scanf("%lf", &x);
	raiz = sqrt(x);
	printf("Resultado = %.0f", raiz);
	return 0;
}
