/* URI Online Judge | 1164
Número Perfeito
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores
positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito,
pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um determinado número é perfeito
ou não.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 20),
indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor 
inteiro X (1 ≤ X ≤ 108), que pode ser ou não, um número perfeito.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”,
de acordo com a especificação fornecida. */

#include <stdio.h>
int main()
{
    int N, X, a, b, c, d;
    scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        scanf("%d", &X);
        c = X/2;
        d = 0;
        for(b=1; b<=c; b++)
        {
            if(X % b == 0)
                d = d + b;
        }
        if(d == X)
            printf("%d eh perfeito\n",X);
        else
            printf("%d nao eh perfeito\n",X);
    }
    return 0;
}