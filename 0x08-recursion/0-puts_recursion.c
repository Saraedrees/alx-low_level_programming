#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	s = "Puts with recursion";
	_puts_recursion(s);
}
