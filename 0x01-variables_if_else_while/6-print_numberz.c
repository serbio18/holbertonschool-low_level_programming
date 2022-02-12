#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
	putchar(ch + '0');
	ch++;
	}
	putchar('\n');
	return (0);
}
