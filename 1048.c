/* URI Online Judge | 1048
Aumento de Salário
Por Neilor Tonin, URI  Brasil

Timelimit: 1
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com
a tabela abaixo:





Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de
reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de
reajuste ganho, conforme exemplo abaixo. */

#include<stdio.h>

int main(){
    float salario, Nsalario, Reajuste;
    int Percentual;

    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400.00){
        Reajuste = salario * 0.15;
        Percentual = 0.15 * 100;
        Nsalario = salario + Reajuste;
    }
    if(salario >= 400.01 && salario <= 800.00){
        Reajuste = salario * 0.12;
        Percentual = 0.12 * 100;
        Nsalario = salario + Reajuste;
    }
    if(salario >= 800.01 && salario <= 1200.00){
        Reajuste = salario * 0.10;
        Percentual = 0.10 * 100;
        Nsalario = salario + Reajuste;
    }
    if(salario >= 1200.01 && salario <= 2000.00){
        Reajuste = salario * 0.07;
        Percentual = 0.07 * 100;
        Nsalario = salario + Reajuste;
    }
    if(salario > 2000){
        Reajuste = salario * 0.04;
        Percentual = 0.04 * 100;
        Nsalario = salario + Reajuste;
    }

    printf("Novo salario: %.2f\n", Nsalario);
    printf("Reajuste ganho: %.2f\n", Reajuste);
    printf("Em percentual: %d %%\n", Percentual);

    return 0;
}