/*
	Kirjeldus: Andmete j�rjekorda lisamine
	Autor: Janek Mander
	Kuup�ev: 27.10.16
	Muutmine:
*/

#include <stdio.h>

int main() 
{
	int A = 7, B = 1, C = 4, D = 9, E = 2;
	
	//71492
	//11492
	int buf = A;
	A = B;
	B = E; //12492
	E = D; //12499
	D = buf;
	
	printf("J�rjekord: %d %d %d %d %d",  A, B, C, D, E);
			
	return 0; //programm l�ppes edukalt
}
