#include <stdio.h>

/**
 *  * main - prints the alphabet in lowercase,
 *   * followed by a new line, except q and e
 *    * Return: Aways 0 (Sucess)
 *     */
int main(void)
{
	char ch = 0;

	while (ch <= 10)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
