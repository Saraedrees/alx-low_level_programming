#include "main.h"

/**
 * print_square - print square, followed by a new line.
 * @size: size of the the square.
 *
 * Return: no return.
 */

void print_square(int size)
{
	int length, width;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
