#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	int a, b, soma;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &a);
	printf("Digite o 2� n�mero: ");
	scanf("%d", &b);
	soma = a+b;
	printf("\n%d + %d = %d", a,b,soma);
	
	return 0;
}
