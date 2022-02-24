#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - a function that that concatenates two strings.
 * @dest: the
 * @src: the
 * Return: @void
 */
char *_strcat(char *dest, char *src)
{
	/* store length of s1 in the length variable*/
	int l1 = 0;
	int l2 = 0;
	int j;

	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0')
	{
		l2++;
	}
	/* concatenate s2 to s1*/
	for (j = 0; j <= l2; j++)
	{
		dest[l1] = src[j];
	}
	return (dest);
}
