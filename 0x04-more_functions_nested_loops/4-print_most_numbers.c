#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * Do not print 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int e;

	for (e = 0; e < 10; e = e + 1)
	{
		if (e != 2 && e != 4)
			_putchar(e + '0');
	}

	_putchar('\n');
}

