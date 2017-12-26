/* URI Online Judge | 1035
Teste de Seleção 1
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a
soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A
for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

Entrada

Quatro números inteiros A, B, C e D.

Saída

Mostre a respectiva mensagem após a validação dos valores. */

#include <stdio.h>
int main ()
{
    int A, B, C, D, auxCD, auxAB, auxA;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    auxCD = C + D;
    auxAB = A + B;

    if(A % 2 == 0){
        auxA = 1;}
    else
        auxA = 0;

    if(B > C && D > A && auxCD > auxAB && C >= 0 && D >= 0 && auxA == 1)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
return 0;
}