/* URI Online Judge | 1012
Área
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C.
Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. 
Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas
descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor.
O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal. */

#include <stdio.h>
 
int main() {
 
    double a, b, c;
    float tri, cir, tra, qua, ret;
    scanf ("%lf", &a);
    scanf ("%lf", &b);
    scanf ("%lf", &c);
    tri = (a * c) /2;
    cir = (c * c) *  3.14159;
    tra = (c * (a+b))/2;
    qua = b * b;
    ret = a * b;

    printf ("TRIANGULO: %.3f\n", tri);
    printf ("CIRCULO: %.3f\n", cir);
    printf ("TRAPEZIO: %.3f\n", tra);
    printf ("QUADRADO: %.3f\n", qua);
    printf ("RETANGULO: %.3f\n", ret);
 
    return 0;
}