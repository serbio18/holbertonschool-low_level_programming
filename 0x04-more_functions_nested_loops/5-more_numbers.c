#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * @void
 */
void more_numbers(void)
{
	int t = 0;
	int n;
	int p;
	int l;

	while (t < 11)
	{
		for (n = 0; n <= 14; n = n + 1)
		{
			if (n > 9 && n <= 14)
			{
				p = n / 10;
				_putchar(p + '0');
				l = n % 10;
				_putchar(l + '0');
			}
			else
				 _putchar(n + '0');
		}
		 _putchar('\n');
		t++;
	}
}
