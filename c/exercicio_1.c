/**
 * Programa que recebe de entrada o vetor:
 * {2,2,3,4,5,6,6,9,11,12},
 * calcula e exibe:
 *      a) Soma de todos os elementos do vetor,
 *      b) Média aritmética entre os elementos do vetor,
 *      c) Nº de elementos que estão acima da média,
 *      d) Porcentagem de elementos que estão acima da média,
 *      e) Nº de elementos que estão abaixo da média,
 *      f) Porcentagem de elementos que estão abaixo da média,
 *      g) Nº de elementos que são iguais à média,
 *      h) Porcentagem de elementos que são iguais à média,
 *      i) Valor do elemento que é o maior no conjunto,
 *      j) valor do menor elemento pertencente ao conjunto
 */
#include <stdio.h>

int main() {

	int vetor[10] = {2,2,3,4,5,6,6,9,11,12};
	int soma = 0, count = 0, quant_acima = 0, quant_abaixo = 0, quant_igual = 0, menor = 0, maior = 0, media = 0;

	for (int i = 0; i < 10; i++)
	{
		soma += vetor[i];
		count++;
		if(i == 0) {
			maior = menor = vetor[i];
		} else {
			if(vetor[i] > maior)
				maior = vetor[i];
			if(vetor[i] < menor)
				menor = vetor[i];
		}
	}

	media = soma / count;

	for (int i = 0; i < 10; i++)
	{
		if(vetor[i] > media)
			quant_acima++;
		if(vetor[i] < media)
			quant_abaixo++;
		if (vetor[i] == media){
			quant_igual++;
		}
	}

	printf("Soma de todos os elementos: %d\n", soma);
	printf("Média aritmética simples: %d\n", media);
	printf("Nº de elementos que estão acima da média: %d\n", quant_acima);
	printf("Porcentagem de elementos que estão acima da média: %d%%\n", (100 * quant_acima)/count);
	printf("Nº de elementos que estão abaixo da média: %d\n", quant_abaixo);
	printf("Porcentagem de elementos que estão abaixo da média: %d%%\n", (100 * quant_abaixo)/count);
	printf("Nº de elementos que são iguais à média: %d\n", quant_igual);
	printf("Porcentagem de elementos que são iguais à média: %d%%\n", (100 * quant_igual)/count);
	printf("O valor do maior elemento: %d\n", maior);
	printf("O valor do menor elemento: %d\n", menor);

	return 0;
}