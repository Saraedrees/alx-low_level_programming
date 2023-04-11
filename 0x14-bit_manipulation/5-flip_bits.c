#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number of bits
 * @m: the number to flip @n to.
 *
 * Return: the number of bits to flip to get from @n to @m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, n_bits = 0;

	while (diff > 0)
	{
		n_bits += (diff & 1);
		diff >>= 1;
	}

	return (n_bits);
}
