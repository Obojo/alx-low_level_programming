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
		for (ch1 = '0'; ch1 <= '9'; ch1++)
		{
			if ((ch == ch1) || (ch > ch1))
			{
				NULL;
			}
			else
			{
				putchar(ch);
				putchar(ch1);
				if ((ch == '8') && (ch1 == '9'))
				{
					NULL;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
