/**
 * 
 * 3. Uloha
 * Postupnost
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int i,li,n,b = 1;

	scanf("%d", &n);

	if( n > 0)
	{
		scanf("%d", &li);
		
		if(li < 0 || li > 10)
			b = 0;

		while(--n > 0)
		{
			scanf("%d", &i);

			if(i > (2*li) || i < (li/2.0))
				b = 0;

			li = i;
		}

		if(b)
			printf("Postupnost je spravna\n");
		else
			printf("Postupnost nie je spravna\n");
	}
	return 0;
}

