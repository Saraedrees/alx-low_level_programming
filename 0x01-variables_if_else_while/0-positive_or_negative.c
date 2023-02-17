#include <stdio.h>

/**
 *  main - Entry point
 *  Return: Always 0 (success)
 */
int main(void)
{
	float n;
	scanf("%f", &n);
	if (n > 0)
	{
		printf("%f is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%f is zero\n", n);
	}
	else
	{
		printf("%f is negative\n", n);
	}
	return (0);
}
