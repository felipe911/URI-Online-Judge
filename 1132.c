/* URI Online Judge | 1132
Múltiplos de 13
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos
de 13 entre X e Y, incluindo ambos.

Entrada
O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada,
inclusive ambos se for o caso. */

#include <stdio.h>

int main(){
	int x, y, c, total = 0;
	scanf("%d%d", &x, &y);
	if(x<y){
    for(c=x;c<=y;c++){
        if(c % 13 != 0)
        total+=c;
    }
	printf("%d\n", total);
	}
	else{
        for(c=y;c<=x;c++){
        if(c % 13 != 0)
        total+=c;
    }
	printf("%d\n", total);
	}
	return 0;
}