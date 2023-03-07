#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be checked.
 * @accept: string containig the characters to match. 
 *
 * Return: number of characters matched.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (bytes);
}
