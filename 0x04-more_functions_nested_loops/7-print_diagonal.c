#include "main.h"

/**
 * print_diagonal - function draws a diagonal on the terminal.
 * @n: number of times the character should be printed.
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int diag;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
			_putchar('\');
	}
	_putchar('\n');
}
