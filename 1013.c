/* URI Online Judge | 1013
O Maior
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem
“eh o maior”. Utilize a fórmula:



Entrada

O arquivo de entrada contém três valores inteiros.

Saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior". */

#include <stdio.h>
 
int main() {
 
    int a, b, c, maior;
    scanf ("%i", &a);
    scanf ("%i", &b);
    scanf ("%i", &c);

    maior = (a + b + abs(a - b))/2;
    maior = (maior + c + abs(maior - c))/2;
    printf ("%i eh o maior\n", maior);
 
    return 0;
}