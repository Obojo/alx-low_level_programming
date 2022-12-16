#include "main.h"

/**
 * more_numbers - display 0-14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int i;

	i = 0
	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar('0' + (i / 10))
			}
			_putchar('0' + (i % 10))
		}
	_putchar('\n');
}
