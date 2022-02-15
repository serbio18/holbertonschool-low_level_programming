#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints random number: positive, negative or zero
 * Return: Always 0
 */
void print_alphabet(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	
}
