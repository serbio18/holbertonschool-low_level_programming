#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints random number: positive, negative or zero
 * Rerturn: Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	printf("%d ", n);
	printf("is");
	l = (n % 10);
<<<<<<< HEAD
	if(l > 5)
        {
=======
	if (l > 5)
	{
>>>>>>> 6411ecd300f8abcb591bee3befc3bbe705144bb2
	printf(" %d and is greater than 5\n", l);
	}
	else if (l < 6 && l != 0)
	{
	printf(" %d and is less than 6 and not 0\n", l);
	}
	else
	printf(" %d and is 0\n", l);
	return (0);
}
