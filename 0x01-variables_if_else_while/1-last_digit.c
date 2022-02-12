#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints random number: positive, negative or zero
 * Rerturns: Always 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
        n = rand() - RAND_MAX / 2;

	printf("Last digit of ");
	printf("%d ", n);
	printf("is ");
	l = (n%10);
	if(l> 5)
        {
	printf("%d and is greater than 5", l);
        }
	else if(l< 6 && l !=0)
       	{
        printf(" %d and is less than 6 and not 0", l);
	}
	else
	printf(" %d and is 0", l);
       
       	return 0;
}

