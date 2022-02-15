#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked
 * Return: Always 0 or 1 (Sucess)
 */
int _islower(int c)
{

	if (islower(c)) 
	{
	return (1);
	}	
	else
	{
	return (0);
	}
}
