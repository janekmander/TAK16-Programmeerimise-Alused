/*
	Kirjeldus: Andmetüübid (int, float, double)
	Autor: Janek Mander
	Kuupäev: 19.10.16
	Muutmine:
*/

#include <stdio.h>

int main() 
{
	/*INT*/
	int muutuja, muutuja2 = 10, muutuja3;
	int inimesteArv = 30;
	int majadeArvKylas = 20; //seotud majade arvuga
		
	majadeArvKylas = 10;
	
	printf("\tMajade arv külas: %d.", majadeArvKylas);
	printf("\nInimesi elab: %d.", inimesteArv);	
	
	/*FLOAT*/
	float number;
	number = 12.3;
	
	printf("\nFloat number: %.3f.", number);
	
	/*DOUBLE*/
	double number2;
	number2 = 200000;
	
	printf("\nDouble number: %lf.", number2);
			
	return 0; //programm lõppes edukalt
}
