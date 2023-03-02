#include "main.h"

/**
 * print_number - function prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned num;

	num = n;
	if (num > 0)
	{
		for (num = 0; num <= 9; num++)
		{
			_putchar((num % 10) + '0');
			_putchar('\n');
		}
		for (num = 10; num <= 9999; num++)
		{
			_putchar((num / 1000) + '0');
			_putchar((num / 100) + '0');
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			_putchar('\n');
		}
	_putchar('\n');
	}
}
