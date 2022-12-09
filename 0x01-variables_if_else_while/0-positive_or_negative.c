#include <sdtlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry position
 *
 * Return: 0
 */
int  main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code*/
	if (n > 0)
	{
		printf("%d is negative", n);
	}
	if else (n == 0)
	{
		printf("%n is zero", n);
	}
	else
	{
		printf("%d is positive", n);
	}
	return (0);
}
