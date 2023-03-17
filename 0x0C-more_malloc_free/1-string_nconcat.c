#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: 1st string to be concatenated
 * @s2: 2nd string to be concatenated
 * @n: number of bytes in s2 string
 *
 * Return: if success point to a newly allocated space in memory
 * which contains s1, followed by @n bytes of s2.
 * or NULL on failure, and treat it as empty string if NULL is passed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, len_s3, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;

	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n >= len_s2)
		n = len_s2;
	len_s3 = len_s1 + n;

	s3 = malloc(sizeof(char) * (len_s3 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len_s3; i++)
		if (i < len_s1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len_s1];

	s3[i] = '\0';

	return (s3);
}
