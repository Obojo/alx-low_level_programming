#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @a: integer value
 * Return: absolute value
 */
int _abs(int a)
{
	int c;

	if (a < 0)
	{
		c = a * -1;
		return (c);
	}
	else
	{
		return (a);
	}
}
