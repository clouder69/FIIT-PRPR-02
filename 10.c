/**
 * 
 * 10. Uloha
 * Pocet n cisel v intervale (0,100>
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int n,a,i;

	scanf("%d", &n);

	while( --n >= 0 )
	{
		scanf("%d", &a);

		if( a > 0 && a <= 100)
			i++;
	}

	printf("%d\n", i);
	return 0;
}

