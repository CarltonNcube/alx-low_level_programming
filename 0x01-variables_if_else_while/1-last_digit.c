#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
/* main - Prints a text according to number
 * return: Always (success)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (last > 5)
	{
	Printf("last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("last digit %d is %d is 0\n", n, lastd);
	}
	else if (lastd < 6 && last != 0)
	{
	printf("last digit of %d is %d and is lees than 6 and not 0\n", n, lastd);
	}
	return (0);
}
