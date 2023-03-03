#include "main.h"

/**
 * _strcmp- compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 0 if 2 strings are identical, and other number if not same.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int comp = 0;

	while (comp == 0)
	{
		if ((s1[i] == '\0') && (s2[j] == '\0'))
			break;
		comp = s1[i] - s2[j];
		i++;
		j++;
	}
	return (comp);
}
