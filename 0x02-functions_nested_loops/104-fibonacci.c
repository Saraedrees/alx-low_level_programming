#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	unsigned long int n1, n2, sum;
	int i;

	n1 = 0;
	n2 = 1;
	for (i = 1; i <= 98; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		if (i == 98)
		{
			printf("%lu", sum);
		}
		else
		{
			printf("%lu, ", sum);
		}
	}
	printf("\n");
	return (0);
}
