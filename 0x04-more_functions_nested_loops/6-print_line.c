#include "main.h"

/**
 * print_line - draw a line on terminal
 *
 * @n: integer
 * Return: 0
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
