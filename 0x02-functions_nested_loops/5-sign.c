#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if n is greater than zero and print +,
 * and 0 if n is zero and print 0,
 * and -1 if n is less than zero and print -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
