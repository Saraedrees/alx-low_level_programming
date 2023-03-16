#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of bytes to be allocated.
 *
 * Return: pointer to the allocated memory,
 * if malloc fails; the "malloc_checked" should cause normal process
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);/*same as char *s then equation*/

	if (s == NULL)
		exit(98);
	return (s);
}
