#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 or 1 (Sucess)
 */
int print_sign(int n)
{
	if (n > 0)
	{	
		_putchar('+');
	       	return (1);
       	}
	else if (n < 0)
	{	
		_putchar('-');
		 return (-1);
	}
       	else
       	{
		_putchar('0');
		 return (0);
	}
}
