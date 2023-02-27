#include "main.h"

/**
 * print_diagonal - function draws a diagonal on the terminal.
 * @n: number of times the character should be printed.
 *
 * Return: no return.
 */

void print_diagonal(int n)
{
	int diag, i;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (i = 0; i < diag; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
