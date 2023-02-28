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
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else if (*(str + i) / 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			i++;
		}
	}
}
