/**
 * 
 * 5. Uloha
 * Vypis cisiel 2
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if(n >= 1 && n <= 15)
	{
		int i,j;
		
		for(i=0; i<n; i++)
		{
			printf("%d:", i+1);

			for(j = n-i; j > 0; j--)
				printf(" %d", j);

			putchar('\n');
		}
	} else
		printf("Cislo nie je z daneho intervalu");
	return 0;
}

