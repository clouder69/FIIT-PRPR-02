/**
 * 
 * 9. Uloha
 * Pocty malych a velkych pismen
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	int m,v;
	char c;

	while( (c = getchar()) != '\n')
	{
		if(c >= 'a' && c <= 'z')
			m++;
		else if(c >= 'A' && c <= 'Z')
			v++;
	}

	printf("%d %d\n", m, v);
	return 0;
}

