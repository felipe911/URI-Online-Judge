/* URI Online Judge | 1095
Sequencia IJ 1
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo */

#include <stdio.h>
main()
{

  int I=1,J=60;

  while(J>=0)
  {
    printf("I=%d J=%d\n",I,J);
    I=I+3;
    J=J-5;
  }
  return 0;
}