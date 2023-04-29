#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * 
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int numb = 1;
	char *Endian = (char *)&numb;

	if (*Endian == 1)
		return (1);

	return (0);
}
