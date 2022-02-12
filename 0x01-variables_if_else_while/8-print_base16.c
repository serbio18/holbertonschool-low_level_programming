#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;
	char dh = 'a';

	while (ch < 10)
	{
	putchar(ch+'0');
	ch++;
	}
	while(dh <= 'f')
	{
	putchar(dh);
	dh++;
	}

	putchar('\n');
	return (0);
}

