#include "main.h"

/**
 * _islower - checks if a character is in lower case
 *
 * Return: 1 when _islower is true
 * else, 0. (not lower)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
