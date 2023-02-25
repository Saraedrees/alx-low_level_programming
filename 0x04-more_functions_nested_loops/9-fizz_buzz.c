#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line
 * print "Fizz" for multiples of 3
 * print "Buzz" for multiples of 5
 * print "FizzBuzz" for multiples of 3 and 5
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
