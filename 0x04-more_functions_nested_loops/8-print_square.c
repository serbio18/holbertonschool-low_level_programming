#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_square - function that draws a diagonal line on the terminal.
 * followed by a new line.
 * @size:number of times the character \ should be printed
 * @i:variable to increase number of spaces
 * @j:number of times the spaces should be printed
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
	       		{
			       	_putchar('#');
			}
			_putchar('\n');
		}
	}
}
