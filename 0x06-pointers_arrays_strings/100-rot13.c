#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to be checked.
 *
 * Return: checked value of string.
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		while (s[i] != '\0')
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == alphabets[j])
				{
					s[i] = rot13[j];
					break;
				}
			}
			i++;
		}
		return (s);
}
