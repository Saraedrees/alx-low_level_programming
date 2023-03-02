#include "main.h"

/**
 * print_triangle - function print a triangle.
 * @size: number of lines of triangle.
 *
 * Return: no return.
 */

void print_triangle(int size)
{
	int tria, i;

	for (tria = 0; tria < size; tria++)
	{
		for (i = 1; i < (size - tria); i++)
			_putchar(' ');
		for (i--; i < size; i++)
			_putchar('#');
		if (tria < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
