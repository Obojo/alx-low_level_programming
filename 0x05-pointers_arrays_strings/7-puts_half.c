#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print half of a string
 * @str: string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int temp;

	temp = _strlen(str);
	if (temp % 2 == 0)
	{
		for (i = (temp / 2); i < temp ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (temp + 1) / 2; i < (temp + 1); i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
