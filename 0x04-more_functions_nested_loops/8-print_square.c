#include "main.h"

/**
 * print_square - function print a square, followed by new line.
 * @size: size of the square.
 *
 * Return: no return.
 */

void print_square(int size)
{
	int a;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
	}
	_putchar('\n');
}
