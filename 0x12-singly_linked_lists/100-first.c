#include <stdio.h>

/**
 * pre_main - function executed before main
 * Return: void.
 */

void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
