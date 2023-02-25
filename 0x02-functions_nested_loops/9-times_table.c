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
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			r = a * b;
			_putchar(',');
			_putchar(' ');

			if (r <= 9)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
