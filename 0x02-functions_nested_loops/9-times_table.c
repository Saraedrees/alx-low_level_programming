#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 *
 * Return - no return.
 */

void times_table(void)
{
	int a, b, r;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			r = a * b;
			_putchar(r);
			_putchar(',');
		}
	}
	_putchar('\n');
}
