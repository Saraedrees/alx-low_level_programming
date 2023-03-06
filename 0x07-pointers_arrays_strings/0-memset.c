#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting
 * from s to be filled
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i + 1] = b;
	}
	return (s);
}
