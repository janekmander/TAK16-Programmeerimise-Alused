/*
	Autor: Janek Mander
	Kirjeldus: AND, OR, !
	Kuupäev: 09.12.16
	Muutmise kuupäev: 
*/

#include <stdio.h>

int main() 
{
	
	//AND &&
	
	/*int user = 1000;
	int pass = 1235;
	
	if(user == 1000) {
		if(pass == 1234) {
			printf("Kasutaja on sisselogitud!");
		} else {
			printf("Sisselogimine ebaõnnestus, parool on vale!");	
		}
	} else {
		printf("Sisselogimine ebaõnnestus, kasutaja nimi on vale!");	
	}
	
	if(user == 1000 && pass == 1234) {
		printf("Kasutaja on sisselogitud!");
	} else {
		printf("Sisselogimine ebaõnnestus!");	
	}*/
	
	//OR
	
	int oun = 0;
	int pirn = 0;
	int apelsiin = 0;
	
	if(oun > 0 || pirn > 0 || apelsiin > 0) {
		
		printf("Poes on puuvilju");
		
		if(oun > 0) {
			printf("Poes on %d õuna", oun);
		}
		
		if(pirn > 0) {
			printf("Poes on %d pirni", pirn);
		}
		
		if(apelsiin > 0) {
			printf("Poes on %d apelsiini", apelsiin);
		}
	} else {
		printf("Poes ei ole puuvilju!");
	}
	
	return 0;	
}
