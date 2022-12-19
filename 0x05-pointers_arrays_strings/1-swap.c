#include "main.h"

/**
 * swap_int - swap values of two int
 * @a: int 1
 * @b: int 2
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
