#include "main.h"

/**
 * print_line - function draws a straight line in the terminal.
 * @n: number of times the character should be printed.
 *
 * Return: no return.
 */

void print_line(int n)
{
	int lne;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
