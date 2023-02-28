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
	
	if (str[i] != '\0')
	{
		for (i = i + 2; i < len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
}
