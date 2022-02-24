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
	int length, j;

  /* store length of s1 in the length variable*/
  length = 0;
  while (dest[length] != '\0') {
    ++length;
  }

  /* concatenate s2 to s1*/
  for (j = 0; src[j] != '\0'; ++j, ++length) {
    dest[length] = src[j];
  }

  

  puts(dest);


	return(0);
}
