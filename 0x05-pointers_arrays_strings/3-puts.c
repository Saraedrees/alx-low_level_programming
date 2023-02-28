#include "main.h"

/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 * @str: string to be printed.
 *
 * Return: no return.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (str[i] !== '\0')
		{
			_putchar(str[i]);
			continue;
		}
		else
		{
		_putchar('\n');
		break;
		}
	}
}
