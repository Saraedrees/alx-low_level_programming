#include "main.h"

/**
 * _strcmp- compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: value of comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
				return (0);
			else if (s1[i] > s2[j])
				return (s1[i] - s2[j]);
			else
				return (s1[i] - s2[j]);
		}
	}
	return (*s1);
}
