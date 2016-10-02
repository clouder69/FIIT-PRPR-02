/**
 * 
 * 8. Uloha
 * Uprava znakov
 * Patrik Suchovsky (c) 2016
 * 
**/

#include <stdio.h>

int main()
{
	char c;
	while( 1 )
	{
		c = getchar();

		if(c >= 'a' && c <= 'z')
			putchar( c - ('a'-'A') );
		else if(c >= 'A' && c <= 'Z')
			putchar(c);
		else if( c == '\t' || c == '\n')
			putchar(' ');
		else if( c == '*' )
		{
			printf("%c\n", c);
			break;
		} else
			putchar('-');
	}
	return 0;
}

