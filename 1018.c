/* URI Online Judge | 1018
Cédulas
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o
valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o
valor lido e a relação de notas necessárias.

Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída

Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o
exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa
apresentará a mensagem: “Presentation Error”. */

#include <stdio.h>
 
int main(){
    int val, n100, n50, n20, n10, n5, n2, n1;

    scanf("%d", &val);

    while (val>0 && val<1000000){
    n100 = val/100;
    n50 = (val%100)/50;
    n20 = ((val%100)%50)/20;
    n10 = (((val%100)%50)%20)/10;
    n5 = ((((val%100)%50)%20)%10)/5;
    n2 = (((((val%100)%50)%20)%10)%5)/2;
    n1 = (((((val%100)%50)%20)%10)%5)%2;

    printf("%d\n", val);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    break;
    }
return 0;
}