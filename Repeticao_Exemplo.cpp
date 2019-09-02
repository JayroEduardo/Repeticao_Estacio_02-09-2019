#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	int idade=1,qtd=0;
	float soma=0, media=0;
	
	printf("Para finalizar Digite 0\n\n");
	while(idade != 0){
		printf("Digite a idade: ");
		scanf("%d", &idade);
		while(idade < 0){
			printf("idade inválida, digite novamente: ");
			scanf("%d", &idade);
		}
		soma = soma+idade;
		qtd = qtd + 1;
	}
	media = soma/qtd;
	printf("\nMédia: %f", media);
	return 0;
}
