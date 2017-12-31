/* URI Online Judge | 1117
Validação de Nota
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média
semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo
[0,10]). Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. O programa deve ser encerrado quando forem 
idas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do
cálculo. O valor deve ser apresentado com duas casas após o ponto decimal. */

#include <stdio.h>
int main()
{
    double a,b,c=0,d=0;
    while(1)
    {
        if(d==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            d++;
            c+=a;
        }
        else
            printf("nota invalida\n");
    }
    b=c/2.00;
    printf("media = %.2lf\n", b);
    return 0;
}