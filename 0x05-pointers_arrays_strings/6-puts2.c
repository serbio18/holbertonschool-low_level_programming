#include "main.h"
#include <string.h>

/**
 * puts2 - a function that reverses a string.
 * @str: the string
 * Return: @void
 */
void  puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	while (i <= l)
	{
		_putchar(i + '0');
		i += 2;
	}
	_putchar('\n');
}
