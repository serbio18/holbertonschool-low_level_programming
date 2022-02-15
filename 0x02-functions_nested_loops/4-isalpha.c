#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: a character
 * Return: Aways 0 or 1 (Sucess)
 */
int _isalpha(int c)
{

	if (isalpha(c))
	{
	return (1);
	}
	else
	{	
	return (0);
	}
}
