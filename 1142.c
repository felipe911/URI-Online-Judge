/* URI Online Judge | 1142
PUM
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão
apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido. */

#include <stdio.h>
int main()
{
    int N, a,b,c=1,d=4;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        for(b=c;b<=d;b++)
        {
            if(b%4==0)
                printf("PUM\n");
            else
                printf ("%d ",b);
        }
        c+=4; d+=4;
    }
    return 0;
}