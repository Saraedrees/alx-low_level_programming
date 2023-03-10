#include <stdio.h>

/**
 * main - prints the largest prime factor of number.
 *
 * Return: 0.
 */
int main()
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
