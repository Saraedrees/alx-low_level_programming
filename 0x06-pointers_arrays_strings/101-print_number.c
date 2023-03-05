#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	int i;

	if (n < 0)
		_putchar(-n);
	else
	{
		for (i = 0; i >= 0; i++)
		{
			if (n >= 0 && n <= 9)
				_putchar((n % 10) + '0');
			else if (n >= 10 && n <= 99)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 100 && n <= 999)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 1000 && n <= 9999)
			{
				_putchar((n / 1000) + '0');
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				continue;
		}
	}
}
