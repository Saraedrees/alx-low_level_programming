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
	unsigned long int n1_half1, n1_half2, n2_half1, n2_half2;
	unsigned long int half1, half2;
	int i;

	n1 = 0;
	n2 = 1;
	for (i = 1; i <= 92; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%lu, ", sum);
	}
	n1_half1 = n1 / 10000000000;
	n2_half1 = n2 / 10000000000;
	n1_half2 = n1 % 10000000000;
	n2_half2 = n2 % 10000000000;
	for (i = 93; i <= 98; i++)
	{
		half1 = n1_half1 + n2_half1;
		half2 = n1_half2 + n2_half2;
		if (half2 > 9999999999)
		{
			half1 = half1 + 1;
			half2 = half2 % 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");

		n1_half1 = n2_half1;
		n1_half2 = n2_half2;
		n2_half1 = half1;
		n2_half2 = half2;
	}
	printf("\n");
	return (0);
}
