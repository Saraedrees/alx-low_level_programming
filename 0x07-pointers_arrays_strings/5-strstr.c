#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be checked.
 * @needle: substring containing the charaters to be checked.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	}
	return ('\0');
}
