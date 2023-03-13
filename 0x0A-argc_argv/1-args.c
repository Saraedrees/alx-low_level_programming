#include<stdio.h>

/**
 * main - function prints number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: arary that contains command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
