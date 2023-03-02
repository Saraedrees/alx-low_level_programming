#include "main.h"

/**
 * _strncat - function concatenates two strings.
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes in "src" string
 *
 * Return: a pointer to the resulting string "dest".
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
