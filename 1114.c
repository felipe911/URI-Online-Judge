/* URI Online Judge | 1114
Senha Fixa
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada 
corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a
senha correta é o valor 2002. 

Entrada
A entrada é composta por vários casos de testes contendo valores inteiros.

Saída
Para cada valor lido mostre a mensagem correspondente à descrição do problema. */

#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);

    while(1){
        if(x == 2002){
            printf("Acesso Permitido\n");
            break;
        }
        else
            printf("Senha Invalida\n");
            scanf("%d", &x);

    }
    return 0;
}