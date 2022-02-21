#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: the string
 * Return: @l the lenght of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l += 1;
	}
	return (l);
}
