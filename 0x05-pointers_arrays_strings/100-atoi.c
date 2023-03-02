#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be checked
 *
 * Return: number (if number is found)
 */
int _atoi(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = s[i];
		if ((n % 2 == 0) || (n % 2 == 1))
			return (n);
	}
}
