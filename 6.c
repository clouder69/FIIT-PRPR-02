/**
 * 
 * 6. Uloha
 * Rovnoramenny trojuholnik
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if(n < 1 || n > 15 || n % 2 == 0)
		return printf("Zly vstup");

	int i,j;

	for(i = (n*2)-1; i > 0; i-- )
	{
		for(j = 1; j <= n; j++)
			if( (i > n && j <= (n*2)-i ) || (i <= n && j < i+1) )
				putchar('*');
			else
				putchar('-');

		putchar('\n');
	}
	return 0;
}

