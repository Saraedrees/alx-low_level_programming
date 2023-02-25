#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of times table (0 < n <= 15)
 *
 */

void print_times_table(int n)
{
	int i, j, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				r = i * j;
				_putchar(',');
				_putchar(' ');

				if (r <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r <= 99)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar(((r / 100) % 10) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
