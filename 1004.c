/* URI Online Judge | 1004
Produto Simples
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta
operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   

Entrada

O arquivo de entrada contém 2 valores inteiros.

Saída

Imprima a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.
Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a
mensagem: “Presentation Error”. */

#include <stdio.h>

int main() {
 
	int A , B, PROD;
	scanf ("%i%i", &A, &B);
	PROD = A * B;
	printf ("PROD = %i\n", PROD);
 
    return 0;
}