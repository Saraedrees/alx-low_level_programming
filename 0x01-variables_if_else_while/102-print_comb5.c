#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all combinations of two two-digit numbers
 * ranging from 00 to 99, with space between 2 numbers,
 * and with comma and space after them
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
