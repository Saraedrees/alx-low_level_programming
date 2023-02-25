#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int n, sum;

	sum = 1;
	for (n = 1; n <= 50; n++)
	{
		if (n == 50)
		{
			printf("%d", sum);
		}
		else
		{
			printf("%d, ", sum);
			sum = sum + n;
		}
	}
	printf("\n");
	return (0);
}
