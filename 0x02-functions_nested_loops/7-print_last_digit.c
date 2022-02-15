#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 or 1 (Sucess)
 */
int print_last_digit(int n)
{	
	int l;

	l = (n % 10);
	if(l < 0 )
	{
		l = l * -1;
	}	
	_putchar(l+'0');

	return (l);
}

