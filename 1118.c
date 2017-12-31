/* URI Online Judge | 1118
Várias Notas Com Validação
Por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima
a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo
[0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe
um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os 
código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir
um novo cálculo, caso contrário o programa deve ser encerrado.

Entrada
O arquivo de entrada contém vários valores reais, positivos ou negativos. Quando forem lidas duas notas
válidas, deve ser lido um valor inteiro X . O programa deve parar quando o valor lido para este X for
igual a 2.

Saída
Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”. Quando duas notas válidas
forem lidas, deve ser impressa a mensagem “media = ” seguido do valor do cálculo.

Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser
apresentada novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme
o exemplo abaixo.

A média deve ser impressa com dois dígitos após o ponto decimal. */

#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h=1,x=1,y=1,z=1;
    for(h=1;;h=1,x=1,y=1,z=1)
    {
        scanf("%lf",&a);
        if(a<0 || a>10)
        {
            printf("nota invalida\n");
            continue;
        }
        while(x==1)
        {
            scanf("%lf",&b);
            if(b<0 || b>10)
            {
                printf("nota invalida\n");
                continue;
            }
            x+=2;
        }
        c=(a+b)/2.0;
        printf("media = %.2lf\n",c);
        printf("novo calculo (1-sim 2-nao)\n");
        while(y==1)
        {
            scanf("%lf", &g);
            if(g<1 || g>2)
            {
                printf("novo calculo (1-sim 2-nao)\n");
                continue;
            }
            y+=2;
        }
        if(g==2)
            break;
    }
    return 0;
}