//Desafio SuperTrunfo - Aventureiro
//Aluno: Otniel Neres de Melo


#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (){
	char estado1, estado2, cod_estado1[5], cod_estado2[5], nome1[20], nome2[20];
	int populacao1, populacao2, p_turistico1, p_turistico2;
	float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_p1, pib_p2;
	
	//inserção de dados da primeira carta
	printf ("Insira os dados da primeira carta:\n") ;
	printf ("Insira uma letra de 'A' a 'H':\n");
	scanf ("%c", &estado1);
	printf ("Insira a letra do estado seguida de um numero de 01 a 04:\n");
	scanf ("%s", cod_estado1);
	printf ("Insira o nome da cidade:\n");
	fflush(stdin);
	fgets(nome1, 20, stdin);
	printf ("Insira a quantidade de habitantes:\n");
	scanf ("%d", &populacao1);
	printf ("Insira a area da cidade em quilometros quadrados:\n");
	scanf ("%f", &area1);
	printf ("Insira o Produto Interno Bruto da cidade:\n");
	scanf ("%f", &pib1);
	printf ("Insira o numero de pontos turisticos na cidade:\n");
	scanf ("%d", &p_turistico1);
	densidade_pop1 = populacao1 / area1;
	pib_p1 = pib1 / populacao1;
	
	printf ("\n\n");
	
	
	//inserção de dados da segunda carta
	printf ("Insira os dados da segunda carta:\n");
	printf ("Insira uma letra de 'A' a 'H':\n");
	fflush (stdin);
	scanf ("%c", &estado2);
	printf ("Insira a letra do estado seguida de um numero de 01 a 04:\n");
	scanf ("%s", cod_estado2);
	printf ("Insira o nome da cidade:\n");
	fflush(stdin);
	fgets(nome2, 20, stdin);
	printf ("Insira a quantidade de habitantes:\n");
	scanf ("%d", &populacao2);
	printf ("Insira a area da cidade em quilometros quadrados:\n");
	scanf ("%f", &area2);
	printf ("Insira o Produto Interno Bruto da cidade:\n");
	scanf ("%f", &pib2);
	printf ("Insira o numero de pontos turisticos na cidade:\n");
	scanf ("%d", &p_turistico2);
	densidade_pop2 = populacao2 / area2;
	pib_p2 = pib2 / populacao2;

	
	printf ("Carta 1:\n");
	printf ("Estado: %c\n", estado1);
	printf ("Codigo: %s\n", cod_estado1);
	printf ("Nome da Cidade: %s", nome1);
	printf ("Populacao: %d\n", populacao1);
	printf ("Area: %.2lf\n", area1);
	printf ("PIB: %.2lf bilhoes de reais\n", pib1);
	printf ("Numero de pontos turisticos: %d\n", p_turistico1);
	printf ("Densidade populacional: %.2lf\n", densidade_pop1);
	printf ("PIB Per Capita: %.2lf bilhoes de reais", pib_p1);
	
	
	printf ("Carta 2:\n");
	printf ("Estado: %c\n", estado2);
	printf ("Codigo: %s\n", cod_estado2);
	printf ("Nome da Cidade: %s", nome2);
	printf ("Populacao: %d\n", populacao2);
	printf ("Area: %.2lf\n", area2);
	printf ("PIB: %.2lf bilhoes de reais\n", pib2);
	printf ("Numero de pontos turisticos: %d\n", p_turistico2);
	printf ("Densidade populacional: %.2lf\n", densidade_pop2);
	printf ("PIB Per Capita: %.2lf bilhoes de reais", pib_p2);
	
	return 1;
}