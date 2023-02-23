#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character in ASCII
 *
 * Return: 1 if c is lowercase, and 0 otherwise
 */

int _islower(int c)
{
	if (_islower(c) >= 'a' && _islower(c) == 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

