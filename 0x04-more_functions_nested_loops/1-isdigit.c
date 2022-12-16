#include "main.h"

/**
 * _isdigit - check capitalized alphabets.
 *
 * @c: digit
 * Return: 1 if digit, and 0 other wise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
