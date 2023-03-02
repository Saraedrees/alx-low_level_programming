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
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] < src[n]; j++)
	{
		dest[i] = src[j];
		if (j == '\0')
			break;
		dest[len + n] = src[n];
	}
	return (dest);
}
