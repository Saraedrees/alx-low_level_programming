#include<stdio.h>
#include<stdlib.h>

/**
 * main - function adds positive numbers
 * @argc: number of command line arguments
 * @argv: arary that contains command line arguments
 *
 * Return: 0 (Success),and 1 if one number contain symbols,and print "Error"
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= '0' || atoi(argv[i]) <= '9')
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
