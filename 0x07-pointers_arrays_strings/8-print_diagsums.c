#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of
 * a square matrix of integers
 * @s: array to be printed.
 * @size: size of the array.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, j;
	int a[i][j];
	unsigned int diag1_sum = 0;
	unsigned int diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1_sum = diag1_sum + a[i][j];
			else if (i + j == size - 1)
				diag2_sum = diag2_sum + a[i][j];
			else
				continue;
		}
	}
	printf("%u, %u\n", diag1_sum, diag2_sum);
}
