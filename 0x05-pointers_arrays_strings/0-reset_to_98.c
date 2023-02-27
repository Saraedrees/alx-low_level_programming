#include "main.h"

/**
 * reset_to_98 - function takes a pointer to an int as parameter,
 *  and updates the value it points to to 98.
 * @n: number to be updated.
 *
 */
void reset_to_98(int *n)
{
	int i;

	i = 402;
	n = &i;
	_putchar('i');
	_putchar('\n');
	*n = 98;
	_putchar('i');
	_putchar('\n');
}
