#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints random number: positive, negative or zero
 * @void
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int count = 1;
	
	while( count < 11)
	{	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
	count++;
	}
}
