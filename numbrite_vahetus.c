/*
	Kirjeldus: Andmet��bid (int, float, double)
	Autor: Janek Mander
	Kuup�ev: 19.10.16
	Muutmine:
*/

#include <stdio.h>

int main() 
{
	//Mul on kaks arvu. Arv x ja arv y
	int A = 10, B = 20;
	//V�ljastan arvud x ja y
	printf("A= %d ja B= %d", A, B);
	//Vahetan arvud x ja y omavahel. Ehk x saab y v��rtuse ja y saab x v��rtuse
	
	int buffer;
	buffer = A; //salvestan buffrisse
	A = B;
	B = buffer;
	
	//v�ljastan arvud x ja y
	printf("\nA= %d ja B= %d", A, B);
			
	return 0; //programm l�ppes edukalt
}
