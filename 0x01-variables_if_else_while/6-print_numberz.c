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
	int putchar(int i);

	for (i = 0; i < 10; i++)
	{
		putchar("%d");
	}
	putchar("\n");
	return (0);
}
