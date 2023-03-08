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
<<<<<<< HEAD
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
=======
			if (haystack[i] == needle[j])
				return (needle + j);
>>>>>>> 78da0f714ef886d61b388c4c24297040b5e8245f
		}
	}
	return ('\0');
}
