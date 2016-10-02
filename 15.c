/**
 * 
 * 15. Uloha
 * Semafor
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char c;

	while(1)
	{
		scanf("%c", &c);

		if(c == 'c' || c == 'C')
			printf("STOP\n");
		else if(c == 'z' || c == 'Z')
			printf("IDES\n");
		else if(c == 'o' || c == 'O')
			printf("POZOR\n");
		else if(c == 'k' || c == 'K')
			break;
	}
	return 0;
}

