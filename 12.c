/**
 * 
 * 12. Uloha
 * Delitelnost 3-mi
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>
#include <math.h>

int main()
{
	double f,g;
	int i;

	scanf("%lf %lf", &f, &g);

	f = (f - floor(f) > 0.0) ? floor(f)+1 : floor(f);
	g = (g - floor(g) >= 0.0) ? floor(g)+1 : floor(g);

	for(i = f; i < g; i++)
		if(i % 3 == 0)
			printf("%d ",i);

	putchar('\n');

	return 0;
}

