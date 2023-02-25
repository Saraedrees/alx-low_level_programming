#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	long int n1, n2, sum, total;
	int i;

	n1 = 0;
	n2 = 1;
	for (i = 1; i <= 10; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		if (sum % 2 == 0)
		{
			total = sum;
			printf("%ld", total);
		}
		else
		{
			continue;
		}
	}
	printf("\n");
	return (0);
}
