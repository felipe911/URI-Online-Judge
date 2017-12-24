/* URI Online Judge | 1020
Idade em Dias
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias.
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364.
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada

O arquivo de entrada contém um valor inteiro.

Saída

Imprima a saída conforme exemplo fornecido. */

#include <stdio.h>
 
int main() {
 
    int ano, mes, dia, entrada;
    scanf ("%i", &entrada);
    ano = entrada / 365;
    mes = (entrada % 365) / 30;
    dia = (entrada % 365) % 30;

    printf ("%i ano(s)\n", ano);
    printf ("%i mes(es)\n", mes);
    printf ("%i dia(s)\n", dia);
 
    return 0;
}