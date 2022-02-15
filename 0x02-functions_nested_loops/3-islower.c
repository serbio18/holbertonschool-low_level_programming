#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 or 1 (Sucess)
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
