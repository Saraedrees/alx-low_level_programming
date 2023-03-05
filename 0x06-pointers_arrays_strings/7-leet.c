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
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] == 'a' || s[i] == 'A')
			{
				s[i] = '4';
			}
			else if (s[i] == 'e' || s[i] == 'E')
			{
				s[i] = '3';
			}
			else if (s[i] == 'o' || s[i] == 'O')
			{
				s[i] = '0';
			}
			else if (s[i] == 't' || s[i] == 'T')
			{
				s[i] = '7';
			}
			else if (s[i] == 'l' || s[i] == 'T')
			{
				s[i] = '1';
			}
			else
			{
				continue;
			}
			i++;
		}
	}
	return (s);
}
