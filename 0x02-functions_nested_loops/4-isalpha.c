#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character in ASCII
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c == 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

