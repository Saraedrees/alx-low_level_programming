#include<stdio.h>

/**
 * main - function prints number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: arary that contains command line arguments
 *
 * Return: 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
