#include "main.h"
#include <string.h>

/**
 * print_rev - a function that returns the length of a string.
 * @s: the string
 * Return: @void
 */
void print_rev(char *s)
{
	int i = 0;
	int l = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;
	j = l;

	while (j != -1)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
