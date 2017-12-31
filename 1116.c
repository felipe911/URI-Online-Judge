/* URI Online Judge | 1116
Dividindo X por Y
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 2
Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo.
Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

Entrada
A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros (X e Y) que
serão lidos em seguida.

Saída
Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel"
caso não seja possível efetuar o cálculo.

Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro.
Utilize cast :) */

#include <stdio.h>

int main(){
    int X, Y, N, c;
    double R;

    scanf("%d", &N);
    for(c=0;N>c;c++){
        scanf("%d%d", &X, &Y);
        if(Y == 0)
            printf("divisao impossivel\n");
        else {
        R = (float)X/Y;
        printf("%.1lf\n", R);
        }
    }
    return 0;
}