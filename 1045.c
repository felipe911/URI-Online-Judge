/* URI Online Judge | 1045
Tipos de Triângulos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A
representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam,
com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída

Imprima todas as classificações do triângulo especificado na entrada. */

#include<stdio.h>

int main()
{
    double A, B, C, primeiro, segundo, terceiro;

    scanf("%lf %lf %lf", &A, &B, &C);

    primeiro = 0;
    segundo = 0;
    terceiro = 0;

    if(A < B && A < C)
        terceiro = A;
    if(A < B && A > C || A < C && A > B)
        segundo = A;
    if(A > B && A > C)
        primeiro = A;

    if(B < A && B < C)
        terceiro = B;
    if(B < A && B > C || B < C && B > A)
        segundo = B;
    if(B > A && B > C)
        primeiro = B;

    if(C < A && C < B)
        terceiro = C;
    if(C < A && C > B || C < B && C > A)
        segundo = C;
    if(C > A && C > B)
        primeiro = C;

    if(A == B && A > C){
        primeiro = A;
        segundo = B;
        terceiro = C;
    }
    if(A == B && A < C){
        primeiro = C;
        segundo = A;
        terceiro = B;
    }
    if(A == C && A > B){
        primeiro = A;
        segundo = C;
        terceiro = B;
    }
    if(A == C && A < B){
        primeiro = B;
        segundo = A;
        terceiro = C;
    }

    if(B == C && B > A){
        primeiro = B;
        segundo = A;
        terceiro = C;
    }
    if(B == C && B < A){
        primeiro = A;
        segundo = B;
        terceiro = C;
    }

    if(A == B && A == C && B == C){
        primeiro = A;
        segundo = B;
        terceiro = C;
    }

    if(primeiro >= (segundo + terceiro)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((primeiro * primeiro) > (segundo * segundo) + (terceiro * terceiro)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((primeiro * primeiro) == (segundo * segundo) + (terceiro * terceiro)){
        printf("TRIANGULO RETANGULO\n");
    }
    if((primeiro * primeiro) < (segundo * segundo) + (terceiro * terceiro)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(primeiro == segundo && primeiro == terceiro && segundo == terceiro){
        printf("TRIANGULO EQUILATERO\n");
    }
    if(primeiro == segundo && primeiro != terceiro || primeiro == terceiro && primeiro != segundo || segundo == terceiro && segundo != primeiro){
        printf("TRIANGULO ISOSCELES\n");
    }

return 0;
}