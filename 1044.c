/* URI Online Judge | 1044
Múltiplos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao
sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada

A entrada contém valores inteiros.

Saída

A saída deve conter uma das mensagens conforme descrito acima. */

#include<stdio.h>

int main()
{
    int A, B, val;

    scanf("%d %d", &A, &B);

    if(A > B){
        val = A % B;
    }
    else{
        val = B % A;}

    if(val == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }

return 0;
}