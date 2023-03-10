#include "main.h"

/**
 * _strcpy - copies the string pointed to by "src", including the
 * terminating null byte (\0), to the buffer pointed to by "dest".
 * @dest: 1st pointed string
 * @src: 2nd pointed string
 *
 * Return: value of pointed to "dest"
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
