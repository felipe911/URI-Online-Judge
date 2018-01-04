/* URI Online Judge | 1154
Idades
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Fa�a um algoritmo para ler um n�mero indeterminado de dados, contendo cada um, a idade de um indiv�duo. O �ltimo dado, que n�o entrar� nos
c�lculos, cont�m o valor de idade negativa. Calcular e imprimir a idade m�dia deste grupo de indiv�duos.

Entrada

A entrada cont�m um n�mero indeterminado de inteiros. A entrada ser� encerrada quando um valor negativo for lido.

Sa�da

A sa�da cont�m um valor correspondente � m�dia de idade dos indiv�duos.

A m�dia deve ser impressa com dois d�gitos ap�s o ponto decimal. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    int idade, i = 0;
    double tot = 0;

    scanf("%d", &idade);
    while(idade >= 0){

        tot = tot + idade;
        i++;
        scanf("%d", &idade);

    }
    tot = tot / i;
    printf("%.2lf\n", tot);
}
