#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string which is
 * a duplicate of the string @str.
 * @str: input string
 *
 * Return: (if success) a pointer to the new duplicate string,
 * and 0 if str = NULL, or if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	duplicate = (char *)malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
