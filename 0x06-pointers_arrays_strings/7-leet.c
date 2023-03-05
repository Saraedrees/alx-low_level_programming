#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * 4 replaces a&A, 3 replaces e&E, 0 replaces o&O,
 * 7 replaces t&T, 1 replaces l&L.
 * @s: string to be checked.
 *
 * Return: value of string.
 */
char *leet(char *s)
{
	int i = 0, j;
	int leet[] = {'4', '3', '0', '7', '1'};
	int upper[] = {'A', 'E', 'O', 'T', 'L'};
	int lower[] = {'a', 'e', 'o', 't', 'l'};

	while (s[i] != '\0')
	{
		for (j = 0; j <= 4; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = leet[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
