#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: input data.
 * @f: function pointer to @name.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
