/* URI Online Judge | 1043
Triângulo
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo,
calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a
mensagem


Area = XX.X

Entrada

A entrada contém três valores reais.

Saída

O resultado deve ser apresentado com uma casa decimal. */

#include<stdio.h>

int main()
{
    float A, B, C, perimetro, area;
    int aux;

    aux = 0;
    scanf("%f %f %f", &A, &B, &C);

    //* para calcular se tres pontos sao um triangulo:
    if(A > (B - C) && A < (B + C))
        aux = aux + 1;
    if(B > (C - A) && B < (C + A))
        aux = aux + 1;
    if(C > (A - B) && C < (A + B))
        aux = aux + 1;

    if(aux == 3){
        perimetro = A + B + C;
        printf("Perimetro = %.1f\n", perimetro);
    }
    else{
        area = ((A + B) * C) / 2;
        printf("Area = %.1f\n", area);
    }
return 0;
}