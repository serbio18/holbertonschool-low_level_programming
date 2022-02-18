#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * followed by a new line.
 * @n: number of times the character \ should be printed
 * @i: variable to increase number of spaces
 * @j: number of times the spaces should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			}
		}
}
