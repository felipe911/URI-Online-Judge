/* URI Online Judge | 1115
Quadrante
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema
cartesiano.Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando
pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

Entrada
A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.

Saída
Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida,
conforme o exemplo. */

#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d%d", &X, &Y);

    while(X != 0 && Y != 0){
        if(X > 0 && Y > 0){
            printf("primeiro\n");
            scanf("%d%d", &X, &Y);
        }
            else if(X > 0 && Y < 0){
                printf("quarto\n");
                scanf("%d%d", &X, &Y);
            }
                else if(X < 0 && Y < 0){
                printf("terceiro\n");
                scanf("%d%d", &X, &Y);
                }
                    else if(X < 0 && Y > 0){
                    printf("segundo\n");
                    scanf("%d%d", &X, &Y);
                    }

    }
    return 0;
}