#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	long int n1, n2, sum, total;

	n1 = 0;
	n2 = 1;
	sum = total = 0;
	while (sum <= 4000000)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		if (n1 % 2 == 0)
		{
			total = total + n1;
		}
	}
	printf("%ld\n", total);
	return (0);
}
