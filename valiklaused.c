/*
	Kirjeldus: Valiklaused
	Autor: Janek Mander
	Kuupäev: 02.11.16
	Muutmine:
*/

#include <stdio.h>

int main() 
{
	//tüüp 1
	int arv1 = 17;
	
	int arv2 = 20;
	
	printf("\n\n....::::Tyyp1::::....\n\n");
	
	if(arv1 > arv2) 
 	{	
		printf("Tingimus tõene: arv1 on suurem kui arv2");
	}
	else 
	{
		printf("Tingimus vale: arv1 väiksem kui arv2");	
	}
	
	//tüüp 2
	printf("\n\n....::::Tyyp2::::....\n\n");
	if(arv1 > arv2) 
	{
		printf("Tingimus tõene: arv1 on suurem kui arv2");	
	} 
	else if(arv1 == arv2)
	{
		printf("Tingimus tõene: arv1 võrdne arv2-ga");	
	} 
	else if(arv2 > 20) {
		printf("Tingimus tõene: arv1 väiksem kui arv2 ja arv2 on suurem kui 20");	
	}
	else
	{
		printf("Tingimus else: arv1 väiksem kui arv2");		
	}
	
	//tüüp n
	if(arv1 < 18) {
		printf("Sisestage suurem arv!");
	}
	
	if(arv1 < 18) 
		printf("Sisestage suurem arv!"); //ilma sulgudeta, esimese semikoolonini
	
	if(arv1 < 18) {
		arv1 += 20; //arv1 = arv1 + 20;
		printf("Lisati 20!");
	}
	
	printf("\nArv1: %d" , arv1);
	

	
	return 0; //programm lõppes edukalt
}
