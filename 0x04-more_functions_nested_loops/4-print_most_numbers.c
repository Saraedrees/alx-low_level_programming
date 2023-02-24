#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9,
 * followed by a new line,
 * except 2 and 4.
 * @a: number to be checked.
 *
 * Return: no return.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar((a % 10) + '0');
		}
	}
	_putchar('\n');
}
