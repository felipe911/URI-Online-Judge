/* URI Online Judge | 1007
Diferença
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B
pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada

O arquivo de entrada contém 4 valores inteiros.

Saída

Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em
branco antes e depois da igualdade. */

#include <stdio.h>
 
int main() {
 
    int a, b, c, d, dif;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    dif = (a * b) - (c * d);
    printf ("DIFERENCA = %i\n", dif);
 
    return 0;
}