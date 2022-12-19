#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - a string in reverse
 * @s: the sring
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	char temp;

	temp = _strlen(s);
	for (i = (temp-1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
