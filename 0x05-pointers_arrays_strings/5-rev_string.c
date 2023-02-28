#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int index = 0, len = 0;
	char temp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[index - len - 1];
		s[index - len - 1] = temp;
	}
}

