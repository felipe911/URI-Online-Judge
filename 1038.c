/* URI Online Judge | 1038
Lanche
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
A seguir, calcule e mostre o valor da conta a pagar.



Entrada

O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item
conforme tabela acima.

Saída

O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após
o ponto decimal. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int cod, qtd;
    float total;

    scanf("%d %d", &cod, &qtd);

    if(cod == 1)
        total = 4.00 * qtd;
    if(cod == 2)
        total = 4.50 * qtd;
    if(cod == 3)
        total = 5.00 * qtd;
    if(cod == 4)
        total = 2.00 * qtd;
    if(cod == 5)
        total = 1.50 * qtd;

    printf("Total: R$ %.2f\n", total);

return 0;
}