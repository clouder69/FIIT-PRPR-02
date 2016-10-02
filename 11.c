/**
 * 
 * 11. Uloha
 * Faktorial
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int a,f;

	scanf("%d", &a);

	f = a;

	while( --a > 1 )
		f *= a;

	printf("%d\n", f);
	return 0;
}

