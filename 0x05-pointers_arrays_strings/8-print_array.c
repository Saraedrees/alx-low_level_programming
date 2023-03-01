#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @n: number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (n != '\0')
		{
			printf("%d, ", a[n]);
		}
		else
		{
			printf("%d", a[n]);
		}
	}
}
