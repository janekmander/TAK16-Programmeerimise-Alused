/*
	Autor: Janek Mander
	Kirjeldus: Mod tehe (jäägiga jagamine)
	Kuupäev: 21.11.16
	Muutmise kuupäev: 
*/

#include <stdio.h>

int main() 
{
	int arv = 40;
	
	if(arv % 5 == 0) {
		printf("arv jagub 5-ga");
	} else {
		printf("arv ei jagub 5-ga");
	}
	
	return 0;	
}
