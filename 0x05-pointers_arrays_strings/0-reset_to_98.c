#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as
 * parameter and updates the value it points to to 98.
 * @*n = the pointer
 * @n: the value of the pointer
 * Return: @void
 */
void reset_to_98(int *n)
{
	int v = 98;
	*n = v;
}
