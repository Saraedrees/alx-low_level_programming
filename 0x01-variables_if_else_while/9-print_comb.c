#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if ((num % 10) < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
