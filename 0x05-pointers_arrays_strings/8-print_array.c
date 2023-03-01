#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: input array.
 * @n: number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
