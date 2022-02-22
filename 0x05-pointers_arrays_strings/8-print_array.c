#include "main.h"

/**
 *  print_array - a function that prints n elements of an array of
 *  integers, followed by a new line.
 *  @a: the pointer to the array
 *  @n: the number of elements of the array to be printed
 *  Return: Always 0.
 */

void print_array(int *a, int n)
{
	/*int ar[] = a;*/
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d", a[n - 1]);
	printf("\n");
}
