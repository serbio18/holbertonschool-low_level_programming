#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: 0
 */
void print_numbers(void)
{
	int e;

	for (e = 0; e < 10; e = e + 1)
	{
		_putchar(e + '0');
	}
	_putchar('\n');
}
