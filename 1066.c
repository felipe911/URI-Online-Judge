/* URI Online Judge | 1066
Pares, Ímpares, Positivos e Negativos
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores
digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados 
foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final
de linha após cada uma. */

#include <stdio.h>

int main(){
    int val[5], c, pares, impares, positivos, negativos;

    pares = 0; impares = 0; positivos = 0; negativos = 0;

    for(c=0;c<5;c++){
        scanf("%d", &val[c]);

        if(val[c] > 0){
            positivos++;
        }
        if(val[c] < 0){
            negativos++;
        }

        if(val[c] % 2 == 0){
            pares++;
        }
        else{
            impares++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}