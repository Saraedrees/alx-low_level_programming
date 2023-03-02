#include "main.h"

/**
 * print_triangle - function print a triangle.
 * @size: size of triangle.
 *
 * Return: no return.
 */

void print_triangle(int size)
{
	int tria, i;

	if (size > 0)
	{
		for (tria = 0; tria < size; tria++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
