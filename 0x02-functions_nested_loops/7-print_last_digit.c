#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit: display last digit
 *
 * @a: number
 * Return: value of last digit
 */
int print_last_digit(int a)
{
	_putchar('0' + _abs(a % 10));
	return (_abs(a % 10));
}
