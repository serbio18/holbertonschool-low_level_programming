#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * int print_last_digit(int) - a function that prints the last digit of a number.
 * @n: a number
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
	_putchar(l + '0');
	
	return (l);
}

