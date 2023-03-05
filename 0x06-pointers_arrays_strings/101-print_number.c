#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = i * -1;
	}
	else
	{
		n = n;
	}
	if ((i / 10) > 0)
		_putchar(i / 10);

	_putchar((i % 10) + '0');
}
