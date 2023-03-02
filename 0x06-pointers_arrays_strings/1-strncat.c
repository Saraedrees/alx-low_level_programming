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
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
