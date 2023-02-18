#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the base16 numbers in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	int num;

	for (num = 0; num < 10 ; num++)
	{
		putchar((num % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
