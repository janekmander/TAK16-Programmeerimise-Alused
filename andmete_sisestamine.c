/*
	Kirjeldus: Andmete sisestamine
	Autor: Janek Mander
	Kuup�ev: 27.10.16
	Muutmine:
*/

#include <stdio.h>

int main() 
{
	int arv, arv2, arv3;
	
	printf("Palun sisestage t2is arv: ");
	scanf("%d", &arv);
	
	printf("Palun sisestage t2is arv: ");
	scanf("%d", &arv2);
	
	printf("Palun sisestage t2is arv: ");
	scanf("%d", &arv3);
	
	printf("\nKasutaja sisestas: %d, %d, %d", arv, arv2, arv3);
	
	//�lesanne: kasutaja sisestab kolm arvu ja need v�ljastatakse!
			
	return 0; //programm l�ppes edukalt
}
