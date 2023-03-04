#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string to be checked.
 *
 * Return: checked string.
 */
char *cap_string(char *str)
{
	int count = 0, i;
	int sep_words[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (str[count] >= 97 && str[count] <= 122)
		str[count] = str[count] - 32;
	count++;
	while (str[count] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (str[count] == sep_words[i])
			{
				if (str[count + 1] >= 97 && str[count + 1] <= 122)
					str[count + 1] = str[count + 1] - 32;
				break;
			}
		}
		count++;
	}
	return (str);
}
