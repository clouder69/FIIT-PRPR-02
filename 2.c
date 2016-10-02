/**
 * 
 * 2. Uloha
 * Minimum & maximum
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int n;
	double x,min,max;

	scanf("%d", &n);

	if(n > 0)
	{
		scanf("%lf", &x);
		min = max = x;

		while(--n > 0)
		{
			scanf("%lf", &x);

			if(x < min)
				min = x;
			else if(x > max)
				max = x;
		}

		printf("Minimum: %.2f\n", min);
		printf("Maximum: %.2f\n", max);
	}
	return 0;
}

