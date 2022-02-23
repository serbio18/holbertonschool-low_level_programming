#include "main.h"

/**
 *  *_strcpy - a function that prints n elements of an array of
 *  integers, followed by a new line.
 *  @dest: the pointer to the array
 *  @src: the string , including the terminating null byte (\0)
 *  Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	/*int ar[] = a;*/
	int i = 0;
	int j = 0;
	
	while (src[i] != '\0' )
	{
		i++;
	}
	i+=1;
	while( j <= i)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
