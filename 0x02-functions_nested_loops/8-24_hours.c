#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * jack_bauer - This program prints every minute of the day
 * @void
 * Return: "00:00" to "23:59"  
 */
void jack_bauer(void)
{
	int c;
	int d;

	for (c = 0; c <= 23; c++)
	for (d = 0; d <= 59; d++)
	{
	_putchar((c / 10) + 48);
	_putchar((c % 10) + 48);
	_putchar(':');
	_putchar((d / 10) + 48);
	_putchar((d % 10) + 48);
	_putchar('\n');
	}
}

