#include "main.h"
#include <string.h>

/**
 *  rev_string - a function that reverses a string.
 * @s: the string
 * Return: @void
 */
void  rev_string(char *s)
{
	int i = 0;
	int l = 0;

	int temp;

	while (s[l] != '\0')
	{
		l++;
	}

	while (i <= l--)
	{
		temp = s[i];
		s[i++] = s[l];
		s[l] = temp;
	}
}
