#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{	
	char arr[] = "_putchar";
	int y = 0;

	while(arr[y] != '\0')
	{
	_putchar(arr[y]);
	y++;
	}
	_putchar('\n');
	return (0);
}

