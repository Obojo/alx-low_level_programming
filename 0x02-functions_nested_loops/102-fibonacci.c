#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (i < 48)
	{
		printf("%ld", c);
		i++;
		a = b;
		b = c;
		c = a + b;
		if (counter < 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
