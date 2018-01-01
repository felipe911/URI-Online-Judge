/* URI Online Judge | 1134
Tipo de Combustível
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.
Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser
solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado
for o número 4.

Entrada
A entrada contém apenas valores inteiros e positivos.

Saída
Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de
combustível, conforme exemplo. */

#include <stdio.h>

int main(){
	int combustivel, alcool = 0, gasolina = 0, diesel = 0;
	
	scanf("%d", &combustivel);
	while(combustivel != 4){
		if(combustivel == 1)
			alcool+= 1;
		if(combustivel == 2)
			gasolina+= 1;
		if(combustivel == 3)
			diesel+= 1;
	scanf("%d", &combustivel);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	
	return 0;
}

