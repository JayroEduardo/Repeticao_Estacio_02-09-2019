#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Soma_Valores(int a, int b){
	int soma;
	soma = a + b;
	return soma;
}

int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	int a, b;
	
	printf("Digite o 1º número: ");
	scanf("%d", &a);
	printf("Digite o 2º número: ");
	scanf("%d", &b);
	printf("\n%d + %d = %d", a,b,Soma_Valores(a, b));
	
	return 0;
}
