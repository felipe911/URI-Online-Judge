/* URI Online Judge | 1143
Quadrado e ao Cubo
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de
saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido. */

#include <stdio.h>

int main(){
	int n, c;
	
	scanf("%d", &n);
	for(c=1;c<=n;c++)
	{
		printf("%d %d %d\n", c, (c*c), (c * c * c));
	}

	return 0;
}