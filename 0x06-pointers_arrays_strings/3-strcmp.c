#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - a function that that concatenates two strings.
 * @s1: the
 * @s2: the
 * Return: @void
 */
int _strcmp(char *s1, char *s2)
{
	int l1, l2, j;

	l1 = 0;
	l2 = 0;

	while (s1[l1] != '\0')
	{
		++l1;
	}
	while (s2[l2] != '\0')
	{
		++l2;
	}
	for (j = 0; (*s1 != '\0') && (*s1 == *s2); j++)
	{
		s1++;
		s2++;
	}
	/*printf("%d", (*s1-*s2));*/
	return ((*s1 - *s2));
}
