#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	float a, b;
	int qtd=0;

  	while (a < b){
    	a = a + a*0.03;
    	b = b + b*0.015;
    	qtd++;
  	
  	printf("São nécessarios %d anos", qtd);
	return 0;
}
