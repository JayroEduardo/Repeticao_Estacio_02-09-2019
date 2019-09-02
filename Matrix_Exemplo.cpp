#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tamanho 3

int m[Tamanho][Tamanho];

int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	int c;
	
	for(int i=0; i<Tamanho; i++){
		for(int j=0; j<Tamanho; j++){
			printf("Linha %d Coluna %d: ", i,j);
			scanf("%d", &m[i][j]);
			for(int a=i+1; a<Tamanho; a++){
				for(int b=j+1; b<Tamanho; b++){
					if(m[i][j] == m[a][b]){
						printf("Valores iguais");
						c++;
					}
				}
			}
		}
	}
	printf("Quantidade de repetidos %d", c);
	return 0;
}
