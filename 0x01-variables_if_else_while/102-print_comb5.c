#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void format(int a, int b, int c, int d)
{
	for (d = '0'; d <= '9'; d++)
	{
		if (((a * 10) + b) >= ((c * 10) + d))
		{
			NULL;
		}
		else
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);
			if ((a == '9') && (b == '8') && (c == '9') && (d == '9'))
			{
				NULL;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}

}

int main()
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				format(a, b, c, d);
			}
		}
	}
	putchar('\n');
	return (0);
}
