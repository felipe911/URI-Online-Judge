/* URI Online Judge | 1049
Animal
Por Neilor Tonin, URI  Brasil

Timelimit: 1
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível
segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos
animais seguintes foi escolhido, através das três palavras fornecidas.



Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal
segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida. */

#include<stdio.h>
#include<string.h>

int main(){
    char palavra1[20], palavra2[20], palavra3[20];

    scanf("%s %s %s", &palavra1, &palavra2, &palavra3);

    if(strcmp(palavra1,"vertebrado") == 0){ // compara se a palavra1 que foi digitada pelo usuario é igual a
                                            // vertebrado, se for igual a 0 (quer dizer que é verdadeiro) entao passa para o proximo IF
        if(strcmp(palavra2,"ave") == 0){
            if(strcmp(palavra3,"carnivoro") == 0){
                printf("aguia\n");
            }
        }
    }

    if(strcmp(palavra1,"vertebrado") == 0){
        if(strcmp(palavra2,"ave") == 0){
            if(strcmp(palavra3,"onivoro") == 0){
                printf("pomba\n");
            }
        }
    }


    if(strcmp(palavra1,"vertebrado") == 0){
        if(strcmp(palavra2,"mamifero") == 0){
            if(strcmp(palavra3,"onivoro") == 0){
                printf("homem\n");
            }
        }
    }


    if(strcmp(palavra1,"vertebrado") == 0){
        if(strcmp(palavra2,"mamifero") == 0){
            if(strcmp(palavra3,"herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }


    if(strcmp(palavra1,"invertebrado") == 0){
        if(strcmp(palavra2,"inseto") == 0){
            if(strcmp(palavra3,"hematofago") == 0){
                printf("pulga\n");
            }
        }
    }


    if(strcmp(palavra1,"invertebrado") == 0){
        if(strcmp(palavra2,"inseto") == 0){
            if(strcmp(palavra3,"herbivoro") == 0){
                printf("lagarta\n");
            }
        }
    }


    if(strcmp(palavra1,"invertebrado") == 0){
        if(strcmp(palavra2,"anelideo") == 0){
            if(strcmp(palavra3,"hematofago") == 0){
                printf("sanguessuga\n");
            }
        }
    }


    if(strcmp(palavra1,"invertebrado") == 0){
        if(strcmp(palavra2,"anelideo") == 0){
            if(strcmp(palavra3,"onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}