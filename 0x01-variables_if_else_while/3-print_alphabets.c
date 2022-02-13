#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char dh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (dh = 'A' ; dh <= 'Z' ; dh++)
	{
		putchar(dh);
	}
		putchar('\n');
	
	return (0);
}
