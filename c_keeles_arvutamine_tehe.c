/*
	Kirjeldus: C keeles arvutamine [tehe1]
	Autor: Janek Mander
	Kuupäev: 02.11.16
	Muutmine:
*/

#include <stdio.h>
#include <math.h>

int main() 
{

	float a=1, b=2, c=3;
	
	printf("Sisestage a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	
	float vastus = sqrt(((pow(a+b, 3))-(4*(a+b+c)))/((c+b)*(a+b)*(a+b)));
	
	printf("Vastus: %.3f", vastus);
	
	return 0; //programm lõppes edukalt
}
