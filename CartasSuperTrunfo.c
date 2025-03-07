// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Aluno: Otniel Neres de Melo


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	
	//criação das variaveis
	char estado1, estado2, codigo_estado1[4], codigo_estado2[4], nome_cidade1[20], nome_cidade2[20];
	int populacao1, populacao2, p_turistico1, p_turistico2, contador;
	float area1, area2, pib1, pib2;
	
	
	//inserindo os parametros da primeira carta
	printf ("Insira os parametros da primeira carta:\n");
	printf ("Insira uma letra de 'A' a 'H':\n");
	scanf ("%c", &estado1);
	printf ("Insira a letra do estado seguida de um numero de 01 a 04:\n");
	scanf ("%s", &codigo_estado1);
	printf ("Insira o nome da cidade:\n");
	scanf ("%s", &nome_cidade1);
	printf ("Insira o numero de habitantes da cidade:\n");
	scanf ("%d", &populacao1);
	printf ("Insira a area da cidade em quilometros quadrados:\n");
	scanf ("%f", &area1);
	printf ("Insira o Produto Interno Bruto da cidade:\n");
	scanf ("%f", &pib1);
	printf ("Insira a quantidade de pontos turisticos na cidade:\n");
	scanf ("%d", &p_turistico1);
	
	//pular linha para inserção de dados da segunda carta
	printf ("\n\n\n");
	
	//inserindo os parametros da segunda carta
	printf ("Insira os parametros da segunda carta:\n");
	printf ("Insira uma letra de 'A' a 'H':\n");
	fflush(stdin);
	scanf ("%c", &estado2);
	printf ("Insira a letra do estado seguida de um numero de 01 a 04:\n");
	scanf ("%s", &codigo_estado2);
	printf ("Insira o nome da cidade:\n");
	scanf ("%s", &nome_cidade2);
	printf ("Insira o numero de habitantes da cidade:\n");
	scanf ("%d", &populacao2);
	printf ("Insira a area da cidade em quilometros quadrados:\n");
	scanf ("%f", &area2);
	printf ("Insira o Produto Interno Bruto da cidade:\n");
	scanf ("%f", &pib2);
	printf ("Insira a quantidade de pontos turisticos na cidade:\n");
	scanf ("%d", &p_turistico2);
	

	//escrevendo os dados da primeira carta na tela
	printf ("Carta 1:\n");
	printf ("Estado: %c\n", estado1);
	printf ("Codigo: %s\n", codigo_estado1);
	printf ("Nome da Cidade: %s\n", nome_cidade1);
	printf ("Populacao: %d\n", populacao1);
	printf ("Area: %.2f\n", area1);
	printf ("PIB: %.2f\n", pib1);
	printf ("Numero de Pontos Turisticos: %d\n\n", p_turistico1);
	
	//escrevendo os dados da segunda carta na tela
	printf ("Carta 2:\n");
	printf ("Estado: %c\n", estado2);
	printf ("Codigo: %s\n", codigo_estado2);
	printf ("Nome da Cidade: %s\n", nome_cidade2);
	printf ("Populacao: %d\n", populacao2);
	printf ("Area: %.2lf\n", area2);
	printf ("PIB: %.2lf\n", pib2);
	printf ("Numero de Pontos Turisticos: %d\n\n", p_turistico2);
	
	 
	return 1;
}