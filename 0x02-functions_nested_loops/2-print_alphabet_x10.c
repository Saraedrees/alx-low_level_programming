#include "main.h"

/**
 * main - print 10 times the alphabet,
 * in lowercase, followed by new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	int i = 0;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 0; i < 10; i++)
		{
		_putchar(c);
		}
	}
	_putchar('\n');
	return (0);
}
