#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * @c :char
 * @i: integer
 * @f: float
 * @s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 * Print a new line at the end of your function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
 
