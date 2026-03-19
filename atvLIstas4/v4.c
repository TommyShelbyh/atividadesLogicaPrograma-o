#include <stdio.h>

int main(){
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num == 0){
		printf("NULO");
	}else if(num > 0){
		printf("POSITIVO");
    }else{
		printf("NEGATIVO");
	}
	
	return 0;
	
}
