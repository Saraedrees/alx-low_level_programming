#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or
 * 0 if there is one or more chars in the string b that is not 0 or 1,
 * 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		value += (b[i] - '0') * base;
		base *= 2;
	}
	return (value);
}
