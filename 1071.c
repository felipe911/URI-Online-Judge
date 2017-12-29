/* URI Online Judge | 1071
Soma de Impares Consecutivos I
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre
os valores fornecidos na entrada que deverá caber em um inteiro. */

#include <stdio.h>
 
int main() {
 
int num, totalx = 0, totaly = 0, x, y, totalr;
scanf ("%d%d",&x, &y);

if (x < 0){
    x = x * (-1);
}
if (y < 0){
    y = y * (-1);
}
//** X **//
for(num=1;num<x;num++){
    if(num %2==1){
    totalx = totalx + num;}
                      }
//** Y ** //
for(num=1;num<y;num++){
    if(num %2==1){
    totaly = totaly + num;}
                      }
    totalr = totalx - totaly;
    printf("%d\n", totalr);
    return 0;
}