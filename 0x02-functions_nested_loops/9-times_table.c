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
	int x = 0;
	int z = 0;
	int y;

	while (x <= 9)
	{
		putchar('0');
		for (y = 1 ; y <= 9; y++)
		{
		putchar(',');
		putchar(' ');

		z = x * y;

		if (z < 10)
		putchar(' ');
		else
		putchar((z / 10) + '0');
		putchar((z % 10) + '0');

		}
		putchar('\n');
		x++;
	}
}
