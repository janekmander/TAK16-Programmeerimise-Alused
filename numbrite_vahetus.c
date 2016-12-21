/*
	Kirjeldus: Andmetüübid (int, float, double)
	Autor: Janek Mander
	Kuupäev: 19.10.16
	Muutmine:
*/

#include <stdio.h>

int main() 
{
	//Mul on kaks arvu. Arv x ja arv y
	int A = 10, B = 20;
	//Väljastan arvud x ja y
	printf("A= %d ja B= %d", A, B);
	//Vahetan arvud x ja y omavahel. Ehk x saab y väärtuse ja y saab x väärtuse
	
	int buffer;
	buffer = A; //salvestan buffrisse
	A = B;
	B = buffer;
	
	//väljastan arvud x ja y
	printf("\nA= %d ja B= %d", A, B);
			
	return 0; //programm lõppes edukalt
}
