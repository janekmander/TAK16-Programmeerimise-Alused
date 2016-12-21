/*
	Kirjeldus: C keeles arvutamine
	Autor: Janek Mander
	Kuupäev: 02.11.16
	Muutmine:
*/

#include <stdio.h>
#include <math.h>

int main() 
{
	//LIITMINE
	printf("\n\n....::::LIIMINE::::....\n\n");
	int number1 =  10;
	int number2 =  20;
	
	int vastus = number1 + number2;
	printf("Vastus: %d" , vastus);
	
	printf("\nTehe: %d + %d = %d", number1, number2, number1 + number2);
	
	//lahutamine
	printf("\n\n....::::LAHUTAMINE::::....\n\n");
	int number3 = 9;
	int number4 = 13;
	
	int vastus2 = number3 - number4;
	printf("Vastus: %d", vastus2);
	
	printf("\nTehe %d - %d = %d", number3, number4, number3 - number4);
	
	//Korrutamine
	printf("\n\n....::::KORRUTAMINE::::....\n\n");
	double number5 = 345;
	double number6 = 654;
	
	double vastusKorrutamine = number5 * number6;
	printf("Vastus: %.0lf", vastusKorrutamine);
	
	printf("\nTehe %.0lf * %.0lf = %.0lf", number5, number6, number5 * number6);
	
	//Jagamine
	printf("\n\n....::::JAGAMINE::::....\n\n");
	float kommid = 345;
	float opilased = 123;
	
	float kommideArvOpilasele = kommid / opilased;
	printf("Vastus: %.3f", kommideArvOpilasele);
	
	printf("\nTehe %.0f / %.0f = %.3f", kommid, opilased, kommid / opilased);
	
	//Astendamine
	printf("\n\n....::::ASTENDAMINE::::....\n\n");
	double astendaja = 3;
	double astendatav = 5;
	
	double vastusAstendamine = pow(astendatav, astendaja);
	printf("Vastus: %.0lf", vastusAstendamine);
	
	printf("\nTehe %.0lf ^ %.0lf = %.0lf", astendaja, astendatav, pow(astendatav, astendaja));
	
	//Ruutjuur
	printf("\n\n....::::RUUTJUUR::::....\n\n");
	float ruutjuur = 5;
	
	float vastusRuutjuur = sqrt(ruutjuur);
	printf("Vastus: %.3f", vastusRuutjuur);
	
	printf("\nTehe: ruutjuur %.3f = %.3f", ruutjuur, sqrt(ruutjuur));
			
	return 0; //programm lõppes edukalt
}
