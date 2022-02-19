#include <stdio.h>

/**
 * main - function that  prints a square, followed by a new line.
 *
 * Return: void
 */

int main(void)
{
	int size, i;
	size = 100;

	for (i = 1; i <= size; i++)
	{
		if ( i % 15 == 0)
			printf(" FizzBuzz ");
		if ( i % 3 == 0)
			printf(" Fizz ");
		else if ( i % 5 == 0)
			printf(" Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
