#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 * followed by a new line, except q and e
 * @void
 * Return: Nothing
 */
void times_table(void)
{	
	int a = 0;
	int b = 1;
	int c = 0;

	while ( a <= 9)
	{
		_putchar('0');
		while ( b <= 9)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;
			if(c <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		a++;
		_putchar('n');
	}
}
