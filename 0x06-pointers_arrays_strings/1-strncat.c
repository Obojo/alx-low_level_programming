#include "main.h"

/**
 * _strncat - concatinates two strings
 * @dest: string 1
 * @src: string 2
 * @n: amount of times to append
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';

	return (dest);

}
