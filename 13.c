/**
 * 
 * 13. Uloha
 * Delitelnost d
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int f,g,d;

	scanf("%d %d %d", &f, &g, &d);

	for( ; f <= g; f++)
		if(f % d == 0)
			printf("%d ",f);

	putchar('\n');

	return 0;
}

