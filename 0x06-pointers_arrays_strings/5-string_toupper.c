#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @a: string to be checked.
 *
 * Return: printed modified string.
 */
char *string_toupper(char *)
{
	char a;
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'A' && a[i] == 'Z')
		       a[i] = a[i] -32;
	}
}
