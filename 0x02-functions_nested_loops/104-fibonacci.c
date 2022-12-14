#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	while (i < 96)
	{
		i++;
		printf("%lu", c);
		a = b;
		b = c;
		c = a + b;
		if (i < 96)
		{
			printf(", ");
		}
		else
		{
			NULL;
		}
	}
	printf("\n");
	return (0);
}
