/* URI Online Judge | 1037
Intervalo
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em
qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra.
Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem
“Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

Entrada

O arquivo de entrada contém um número com ponto flutuante qualquer.

Saída

A saída deve ser uma mensagem conforme exemplo abaixo. */

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	float valor;

	scanf("%f", &valor);

	if(valor >= 0 && valor <= 25)
		printf("Intervalo [0,25]\n");
	if(valor > 25 && valor <= 50)
		printf("Intervalo (25,50]\n");
	if(valor > 50 && valor <= 75)
		printf("Intervalo (50,75]\n");
	if(valor > 75 && valor <= 100)
		printf("Intervalo (75,100]\n");
	if(valor < 0 || valor > 100)
		printf("Fora de intervalo\n");

	return 0;
}