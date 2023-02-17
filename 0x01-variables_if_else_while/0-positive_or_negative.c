#include <stdio.h>

/**
 *  main - Entry point
 *  Return: Always 0 (success)
 */
int main(void)
{
	double n;
	scanf("%lf", &n);
	if (n > 0)
	{
		printf("%lf is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%lf is zero\n", n);
	}
	else
	{
		printf("%lf is negative\n", n);
	}
	return (0);
}
