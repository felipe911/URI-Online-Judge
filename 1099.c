/* URI Online Judge | 1099
Soma de Ímpares Consecutivos II
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste
consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre
X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y. */

#include <stdio.h>
int main()
{
    int N,X,Y,A,b,c=0;
    scanf("%d", &N);
    for(A=1;A<=N;A++)
    {
        scanf("%d%d",&X,&Y);
        if(X==Y)
        {
            c=0;
            printf("%d\n",c);
        }
        else if(X<Y)
        {
            for(b=X+1,c=0;b<Y;b++)
            {
                if(b%2==1||b%2==-1)
                    c+=b;
            }
            printf("%d\n",c);
        }
        else
        {
            for(b=Y+1,c=0;b<X;b++)
            {
                if(b%2==1||b%2==-1)
                    c+=b;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}