#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	/*_putchar('$');*/
	_putchar('\n');
}
