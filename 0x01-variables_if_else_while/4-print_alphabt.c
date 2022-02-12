#include <stdio.h>

/**
 * main - prints random number: positive, negative or zero
 * Rerturns: Always 0
 */
int main(void)
{
       	char ch;
	char dh;

	for(ch = 'a' ; ch <= 'z' ; ch++)
       	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	}
	putchar('\n');

	return(0);
}
