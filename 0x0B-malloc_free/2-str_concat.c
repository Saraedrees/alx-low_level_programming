#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: 1st string to be concatenated
 * @s2: 2nd string to be concatenated
 *
 * Return: if success point to a newly allocated space in memory
 * which contains the contents of s1, then the contents of s2.
 * or NULL on failure, and treat as empty string if NULL is passed.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;
	s3 = malloc(sizeof(char) * len);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[j++] = s1[i];/*why j++*/
	for (i = 0; s2[i] != '\0'; i++)
		s3[j++] = s2[i];
	return (s3);
}
