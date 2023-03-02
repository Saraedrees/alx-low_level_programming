#include "main.h"

/**
 * _strcat - function concatenates two strings.
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: a pointer to the resulting string "dest".
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] += src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
