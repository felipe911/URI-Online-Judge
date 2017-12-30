/* URI Online Judge | 1079
Médias Ponderadas
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada
para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor
tem peso 3 e o terceiro valor tem peso 5.

Entrada
O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um
caso de teste com três valores com uma casa decimal cada valor.

Saída
Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo. */

#include <stdio.h>
 
int main() {
 
    int n, cont;
    float val1, val2, val3, media;

    scanf ("%i", &n);
    cont = 0;

    while (n > cont)
    {
        scanf ("%f%f%f", &val1, &val2, &val3);
        val1 = val1 * 2;
        val2 = val2 * 3;
        val3 = val3 * 5;
        media = ((val1 + val2 + val3) /10);
        printf ("%.1f\n", media);
        cont = cont + 1;
    }
    return 0;
}