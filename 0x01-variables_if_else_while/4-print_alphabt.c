#include <stdio.h>

/**
 * main - prints random number: positive, negative or zero
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
	putchar(ch);
	}
	}
	putchar('\n');

	return (0);
}
