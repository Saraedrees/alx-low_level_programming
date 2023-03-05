#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to be checked.
 *
 * Return: checked value of string.
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[i] += 13;
			break;
		}
	}
	return (s);
}
