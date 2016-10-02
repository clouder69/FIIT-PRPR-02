/**
 * 
 * 7. Uloha
 * Hviezda
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

	for(i = 1; i <= n; i++)
	{

		for(j = 1; j <= n; j++)
			if( i == (n+1)/2 || j == (n+1)/2 || i == j || i+j == n+1 )
				putchar('*');
			else
				putchar('-');

		putchar('\n');
	}
	return 0;
}

