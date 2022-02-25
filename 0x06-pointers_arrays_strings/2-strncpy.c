#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - a function that that concatenates two strings
 * but with a limit of n bytes
 * @dest: the destination array
 * @src: the source array
 * @n: bytes
 * Return: @char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int  l1 = 0;
	int  l2 = 0;
	int j;

	/*printf("%d\n%d\n", l1, l2);*/

	while (src[l2] != '\0')
	{
			l2++;
	}
	for (j = 0; j <= n && j <= l2; j++)
	{
		dest[l1] = src[j];
		l1++;
	}
	return (dest);
}
