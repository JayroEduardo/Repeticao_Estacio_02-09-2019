#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, impar=1, qtd=0;
	
	printf("Digite um número, no qual quer saber a raiz: ");
	scanf("%d", &n);
	
	while(n!=0 && n>=impar){
		n = n - impar;
		impar = impar + 2;
		qtd++;
	}
	if(n == 0){
		printf("Raiz exata %d", qtd);
	}
	else{
		printf("Raiz aproximada %d", qtd);
	}
	return 0;
}
