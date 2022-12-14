#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	float a = 1;
	float b = 2;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (i < 96)
	{
		i++;
		printf("%.0f", c);
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
