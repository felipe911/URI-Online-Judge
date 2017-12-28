/* URI Online Judge | 1050
DDD
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia um número inteiro que representa um código de DDD para discagem interurbana.
Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:




Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa
deverá informar:
DDD nao cadastrado

Entrada
A entrada consiste de um único valor inteiro.

Saída
Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao
cadastrado caso não existir DDD correspondente ao número digitado. */

#include <stdio.h>
 
int main() {
 
    int ddd;
    scanf ("%i", &ddd);
    if(ddd != 61 && ddd != 71 && ddd != 11 && ddd != 21 && ddd != 32 && ddd != 19 && ddd != 27 && ddd != 31){

    printf ("DDD nao cadastrado\n");
    }

    if (ddd == 61){
        printf ("Brasilia\n");
    }
    if (ddd == 71){
        printf ("Salvador\n");
    }
    if (ddd == 11){
        printf ("Sao Paulo\n");
    }
    if (ddd == 21){
        printf ("Rio de Janeiro\n");
    }
    if (ddd == 32){
        printf ("Juiz de Fora\n");
    }
    if (ddd == 19){
        printf ("Campinas\n");
    }
    if (ddd == 27){
        printf ("Vitoria\n");
    }
    if (ddd == 31){
        printf ("Belo Horizonte\n");
    }
    return 0;
}