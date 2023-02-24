#include "main.h"

/**
 * print_line - function draws a straight line in the terminal.
 * @n: number of times the character should be printed.
 *
 * Return: no return.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
		_putchar('\n');
	}
}
