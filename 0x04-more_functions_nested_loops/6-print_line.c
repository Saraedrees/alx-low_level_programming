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
		for (lne = 0; lne < n; lne++)
			_putchar('_');
	}
	_putchar('\n');
}
