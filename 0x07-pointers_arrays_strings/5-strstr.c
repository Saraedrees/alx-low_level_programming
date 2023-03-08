#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be checked.
 * @needle: substring to be located in @haystack.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (needle == 0)
		return (haystack);
	for (i = 0; haystack[i] != '\0'; haystack++)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}
	}
	return ('\0');
}
