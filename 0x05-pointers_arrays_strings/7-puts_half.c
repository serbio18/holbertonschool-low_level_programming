#include "main.h"
#include <string.h>

/**
 * puts_half - a function that reverses a string.
 * @str: the string
 * Return: @void
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int n = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if( n % 2 ==  0)
		n = l / 2;
	else 
		n = l - 1 / 2;

	i = n;

	while (i <= l)
	{
		_putchar(str[i]);
		i ++;
	}
	_putchar('\n');
}
