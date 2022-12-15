#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry position
 *
 * Return: 0
 */
int  positive_or_negative(int n)
{
	/* my code*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
