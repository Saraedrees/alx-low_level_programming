#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory to be copied from @src.
 * @src: source memory are to fill @dest.
 * @n: number of bytes from @src to be copied to @dest.
 *
 * Return: a pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
