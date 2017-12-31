/* URI Online Judge | 1133
Resto da Divisão
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da
divisão dele por 5 for igual a 2 ou igual a 3.

Entrada
O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem
crescente.

Saída
Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente. */

#include <stdio.h>

int main(){
	int x, y, c, valor;
	
	scanf("%d%d", &x, &y);
	if(x<y){
		for(c=(x+1);c<y;c++){
			if(c % 5 == 2 || c % 5 == 3)
				printf("%d\n", c);
		}
	}
	else{
		for(c=(y+1);c<x;c++){
			if(c % 5 == 2 || c % 5 == 3)
				printf("%d\n", c);
		}
	}

	return 0;
}