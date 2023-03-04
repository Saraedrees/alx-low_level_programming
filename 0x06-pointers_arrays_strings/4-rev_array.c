#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses content of an array of integers.
 * @a: array of integers to be reversed.
 * @n: number of elements of the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int index, count, temp;

	for (count = 0; count < n - 1; count++)
	{
		for (index = count + 1; index > 0; index --)
		{
			temp = a[index];
			a[index] = a[index - 1];
			a[index - 1] = temp;
		}
	}
}
