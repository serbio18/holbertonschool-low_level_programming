#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
	printf("%d, ", ch);
	ch++;
	}
	printf("\n");
	return (0);
}
