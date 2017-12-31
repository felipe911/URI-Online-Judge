/* URI Online Judge | 1131
Grenais
Adaptado por Neilor Tonin, URI  Brasil

Timelimit: 1
A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do
resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo
Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta.
Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos
times em uma nova partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor",
caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo
Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo
for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra
"Gremio" deve ser impressa sem acento, conforme o exemplo abaixo. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int val1, val2, vitoriaInter = 0, vitoriaGremio = 0, empates = 0, escolha;
	
	do{
	scanf("%d %d", &val1, &val2);
	if(val1 == val2)
		empates = empates + 1;
	
	if(val1 > val2)
		vitoriaInter = vitoriaInter + 1;
	else
		vitoriaGremio = vitoriaGremio + 1;
	
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &escolha);

	}while(escolha == 1);
	
	printf("%d grenais\n", (vitoriaInter + vitoriaGremio + empates));
	printf("Inter:%d\n", vitoriaInter);
	printf("Gremio:%d\n", vitoriaGremio);
	printf("Empates:%d\n", empates);
	
	if(vitoriaGremio == vitoriaInter)
		printf("Nao houve vencedor\n");
	if(vitoriaGremio > vitoriaInter)
		printf("Gremio venceu mais\n");
	else
		printf("Inter venceu mais\n");
	
	return 0;
}