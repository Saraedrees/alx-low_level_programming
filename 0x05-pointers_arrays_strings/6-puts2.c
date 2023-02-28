#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * followed by a new line.
 * @str: string to be printed
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0, len = 0;
	
	while (i >= 0)
	{
		for (i = 0; i < len; i = i + 2)
		{
			_putchar(str[i]);
		}
	}
}
