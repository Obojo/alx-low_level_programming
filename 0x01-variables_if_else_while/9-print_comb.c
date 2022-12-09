#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int ch1;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch1 = '0'; ch1 <='9'; ch++)
		{
			putchar(ch);
			putchar(ch1);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
