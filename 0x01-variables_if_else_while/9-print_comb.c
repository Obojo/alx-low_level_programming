#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '9')
		{
			putchar(ch);
			putchar(',');
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}