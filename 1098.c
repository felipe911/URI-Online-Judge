/* URI Online Judge | 1098
Sequencia IJ 4
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo. */

#include <stdio.h>
int main()
{
    double a,b,c=1,d=3,e,f;
    int x;
    for(a=0; a<=1.9; a=a+.2)
    {
        for(b=1.0; b<=3.0; b++)
        {
            e=b+a;
            if(a==0.0||a==1.0) printf("I=%.0lf J=%.0lf",a,e);
            else if(e==3.0||e==4.0||e==5.0) printf("I=%.0lf J=%.0lf",a,e);
            else printf("I=%.1lf J=%.1lf",a,e);
            printf("\n");
        }
    }
    for(x=3; x<=5; x++) printf("I=2 J=%d\n",x);
    return 0;
}