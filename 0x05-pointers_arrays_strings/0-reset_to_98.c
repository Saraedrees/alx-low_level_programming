#include "main.h"

/**
 * reset_to_98 - function takes a pointer to an int as parameter,
 *  and updates the value it points to to 98.
 * @n: number to be updated
 *
 */
void reset_to_98(int *n)
{
	int *p;

	n = 402;
	_putchar("n=%d\n", n);
	*p = 98;
	_putchar("n=%d\n", n);
}
