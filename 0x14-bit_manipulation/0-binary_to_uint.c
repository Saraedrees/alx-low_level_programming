#include "main.h"
#include <stdio.h>
#include <string.h>

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
	int i, j;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, j = 1; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			value += j;
		}
	}
	return (value);
}
