#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	long int n1, n2, sum;
	int i;

	n1 = 0;
	n2 = 1;
	for (i = 1; i <= 50; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		if (i == 50)
		{
			printf("%ld", sum);
		}
		else
		{
			printf("%ld, ", sum);
		}
	}
	printf("\n");
	return (0);
}
