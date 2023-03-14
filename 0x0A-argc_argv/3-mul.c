#include<stdio.h>
#include<stdlib.h>

/**
 * main - function multiplies two numbers
 * @argc: number of command line arguments
 * @argv: arary that contains command line arguments
 *
 * Return: 0 (Success), and 1 if not two arguments and print "ERROR".
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
