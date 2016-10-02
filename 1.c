/**
 * 
 * 1. Uloha
 * Znak / cislo
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char c;

	scanf("%c", &c);

	(c >= '0' && c <= '9') ? printf("%c\n", c) : printf("Znak\n");

	if(c >= '0' && c <= '9')
		printf("%c\n", c);
	else
		printf("Znak\n");
	return 0;
}

