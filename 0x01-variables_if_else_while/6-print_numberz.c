#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print all single digits from 0 to 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int putchar(int num);

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar("\n");
	return (0);
}
