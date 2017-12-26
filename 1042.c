/* URI Online Judge | 1042
Sort Simples
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente,
uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada

A entrada contem três números inteiros.

Saída

Imprima a saída conforme foi especificado. */

#include<stdio.h>

int main()
{
    int a, b, c, primeiro, segundo, terceiro;

    scanf("%d %d %d", &a, &b, &c);

    primeiro = 0;
    segundo = 0;
    terceiro = 0;

    if(a > b && a > c)
        terceiro = a;
    if(a > b && a < c || a > c && a < b)
        segundo = a;
    if(a < b && a < c)
        primeiro = a;

    if(b > a && b > c)
        terceiro = b;
    if(b > a && b < c || b > c && b < a)
        segundo = b;
    if(b < a && b < c)
        primeiro = b;

    if(c > a && c > b)
        terceiro = c;
    if(c > a && c < b || c > b && c < a)
        segundo = c;
    if(c < a && c < b)
        primeiro = c;

    printf("%d\n", primeiro);
    printf("%d\n", segundo);
    printf("%d\n", terceiro);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}