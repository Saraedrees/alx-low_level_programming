#include "main.h"
int is_prime(int n, int div);

/**
 * is_prime - finds if the input number is prime.
 * @n: input number to be checked.
 * @div: the divisor.
 *
 * Return: 1 if @n is prime number, and 0 otherwise.
 */
int is_prime(int n, int div)
{
	if (n % div == 0)
	{
		if (n == div)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, div + 1));
}

/**
 * is_prime_number - checks if an integer is a prime number.
 * @n: input integer to be checked.
 *
 * Return: 1 if @n is prime number, and 0 if otherwise.
 */
int is_prime_number(int n)
{
	if ((n < 0) || (n == 0) || (n == 1))
		return (0);
	else
		return (is_prime(n, 2));
}
