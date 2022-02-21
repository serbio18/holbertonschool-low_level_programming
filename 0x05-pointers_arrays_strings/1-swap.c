#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 * return: @void
 */
void swap_int(int *a, int *b)
{
	int n;
	int m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
