#include "main.h"

/**
 * _isalpha - chech if a character is an alphabet
 *
 * Return: 1 if a charrater is an alphabet
 * else, 0.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
