#include "main.h"

/**
 * swap_int - function swaps the values of two integers.
 * @a: first integer to be swaped.
 * @b: second integer to be swaped.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
