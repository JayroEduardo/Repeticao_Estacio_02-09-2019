#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int numero=-1;
	
	while(numero < 0 || numero > 9){
		printf("\nDigite um número: ");
		scanf("%d", &numero);
		if(numero < 0 || numero > 9){
			printf("Valor não válido. Entre com um valor entre 0 e 9: ");
			scanf("%d", &numero);
		}
	}
	
	for(int i=1; i<=10; i++){
		int m = numero * i;
		printf("\n%d x %d = %d", numero, i, m);
	}
	
	return 0;
}
