/*
	Autor: Janek Mander
	Kirjeldus: Tsükklid (for, while, do...while)
	Kuupäev: 09.12.16
	Muutmise kuupäev: 
*/

#include <stdio.h>

#define RIDU 20
#define VEERGE 20

int main() 
{
	//väljastada numbrid 1 - 10
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 ");
	
	int i;
	
	//i++ => i = i + 1 => i+=6;
	for(i = 1; i <= 100; i++) {
		printf("%d\n", i);
	}
	
	//numbrid järgmises vahemikus -400 kuni -30
	
	for(i = -400; i <= -30; i++) {
		printf("%d\n", i);
	}
	
	printf("\n");
	//numbrid järgmises vahemikus -100 kuni 100, aga iga kümnenda
	for(i = -100; i <= 100; i+=10) {
		printf("%d\n", i);
	}
	
	//numbrid järgmises vahemikus -100 kuni 100, aga ainult 4-ga jaguvad arvud
	printf("\n");
	for(i = -100; i <= 100; i++) {
		if(i % 4 == 0) {
			printf("%d\n", i);
		}
	}
	
	printf("+---+---+---+---+---+---+---+---+---+\n");
	printf("|  1|  2|  3|  4|  5|  6|  7|  8|  9|\n");
	printf("+---+---+---+---+---+---+---+---+---+\n");
	printf("|  2|  4|  6|  8| 10| 12| 14| 16| 18|\n");
	printf("+---+---+---+---+---+---+---+---+---+\n");
	
	printf("\n\n");
	
	int j, x;
	for(i = 1; i <= VEERGE; i++) {
		
		for(x = 1; x <= RIDU; x++) {
			printf("+---");
		}printf("+\n");
		
		for(j = 1; j <= RIDU; j++) {
			printf("|%3d", i * j);
		}printf("|\n");
	}
	for(x = 1; x <= RIDU; x++) {
		printf("+---");
	} printf("+\n");
	
	//Eelkontrolliga
	printf("\n\n");
	int number = 1;
	
	while(number <= RIDU) 
	{
		number++;
		printf("Jõudsid tsükkli!");	
	}
	
	printf("Tsükkel läbi!");
	
	//Vaja luua sisselogimise vorm. Kus kasutaja sisestab 
	//username (int) ja password (int)
	//valesti korral tuleb uuesti sisestada.
	
	printf("\n\nLOGIN\n");
	int username = 1234;
	int password = 4321;
	int usernameInput;
	int passwordInput;
	
	printf("Username: ");
	scanf("%d", &usernameInput);
	
	printf("Password: ");
	scanf("%d", &passwordInput);
	
	int counter = 0;
	
	while(username != usernameInput || password != passwordInput) {
		
		if(counter == 3) {
			printf("\nLogin failed! User: %d is blocked!\n", username);
			return 0;
		}
		
		printf("\nLogin failed! Please try again!\n");
		printf("Username: ");
		scanf("%d", &usernameInput);
		
		printf("Password: ");
		scanf("%d", &passwordInput);
		
		counter++;
	}
	
	printf("Success!");
	
	//Järelkontroll
	printf("\n\n");
	
	int number1 = 0;
	
	do {
		
		printf("Tsükkel töötab. Lisatakse +1\n");
		number1++;
		
	} while (number1 < 10);
	
	//Ülesanne kasutaja tohib sisestada ainult numbreid vahemikus 1 - 4
	
	int number2;
	printf("\n\n");
	
	int counter2 = 0;
	
	do {
		
		if(counter2 > 0) {
			printf("Tekkis viga!\n");
		}
		printf("Sisestage nr 1 - 4: ");
		scanf("%d", &number2);
		
		
		counter2++;
		
	} while (number2 < 1 || number2 > 4);
	
	printf("Success again!");
	
	return 0;	
}
