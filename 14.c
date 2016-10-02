/**
 * 
 * 14. Uloha
 * Sachovnica
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int n,p;
	int i,j;

	scanf("%d %d", &n, &p);

	for(i = 1; i <= p*n; i++)
	{
		for(j = 1; j <= p*n; j++)
			if( ((i-1)/p % 2 == 0 && (j-1)/p % 2 == 0)
			 || ((i-1)/p % 2 == 1 && (j-1)/p % 2 == 1)  )
				putchar('*');
			else
				putchar(' ');

		putchar('\n');
	}
	return 0;
}

