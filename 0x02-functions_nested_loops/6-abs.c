#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: @r: number to be checked
 * Return: 0 (Success)
 */

int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = $((n * -1));
		_putchar(r);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else if (n > 0)
	{
		_putchar(n);
	}
		return (0);
}
