#include "main.h"

/**
 * print_number - function prints an integer.
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
