/* URI Online Judge | 1008
Salário
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que
recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do
funcionário, com duas casas decimais.

Entrada

O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o
número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada,
respectivamente.

Saída

Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco
antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $. */

#include <stdio.h>
 
int main() {
 
    int nFun, hTrab;
    float valH, valSal;

    scanf ("%i", &nFun);
    scanf ("%i", &hTrab);
    scanf ("%f", &valH);
    valSal = hTrab * valH;

    printf("NUMBER = %i\n", nFun);
    printf ("SALARY = U$ %.2f\n", valSal);
 
    return 0;
}