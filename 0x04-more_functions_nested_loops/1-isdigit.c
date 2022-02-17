#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_isdigit -  a function that checks for a digit (0 through 9).
 * @c: a number from 1 to 9
 * Return: 1 or 0
 */

int _isdigit(int c);
{
	if(isdigit(c))
		return (1);
	else 
		return (0);
}

