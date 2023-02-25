#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of times table
 *
 */

void print_times_table(int n);
{

	int i, j;

	if (n > 15 && n < 0)
	{
		break;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				_putchar(i * j);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

