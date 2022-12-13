#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit: display last digit
 *
 * Return: value of last digit
 */
int print_last_digit(int a)
{
	int c;

	c = _abs(a % 10);
	return (c);
}
