#include "main.h"

/**
 * _isupper - check capitalized alphabets.
 *
 * @c: alphabet
 * Return: 1 if capital, and 0 other wise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
