#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be checked
 *
 * Return: 0 (if there are no number in the string),
 * and number (if number is found)
 */
int _atoi(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = s[i];
		if ((n % 2 == 0) || (n % 2 == 1))
			return (n);
		return (0);
	}
}
